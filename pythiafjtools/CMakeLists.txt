add_library(pythiafjtools "")

execute_process ( COMMAND pythia8-config --prefix WORKING_DIRECTORY /tmp OUTPUT_VARIABLE PYTHIA8_DIR OUTPUT_STRIP_TRAILING_WHITESPACE )
execute_process ( COMMAND pythia8-config --cxxflags WORKING_DIRECTORY /tmp OUTPUT_VARIABLE PYTHIA8_CXXFLAGS OUTPUT_STRIP_TRAILING_WHITESPACE )
execute_process ( COMMAND pythia8-config --ldflags WORKING_DIRECTORY /tmp OUTPUT_VARIABLE PYTHIA8_LDFLAGS OUTPUT_STRIP_TRAILING_WHITESPACE )
message( STATUS "PYTHIA8_DIR: ${PYTHIA8_DIR}")
message( STATUS "PYTHIA8_CXXFLAGS: ${PYTHIA8_CXXFLAGS}")
message( STATUS "PYTHIA8_LDFLAGS: ${PYTHIA8_LDFLAGS}")
set(PYTHIA8_LDFLAGS "${PYTHIA8_LDFLAGS} -ldl")

target_sources(pythiafjtools
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/PythiaFJTools/vectorize.hh>

    $<INSTALL_INTERFACE:include/RecursiveTools/vectorize.hh>
  PRIVATE
    src/vectorize.cc
)
target_include_directories(pythiafjtools
  PUBLIC
    $<BUILD_INTERFACE:${PYTHIA8_DIR}/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../../fastjet/include>
    $<INSTALL_INTERFACE:include>
)

set_target_properties(pythiafjtools PROPERTIES
  VERSION ${PROJECT_VERSION}
  PUBLIC_HEADER $<TARGET_PROPERTY:pythiafjtools,INTERFACE_SOURCES>
)

# note: macOS is APPLE and also UNIX !
if(APPLE)
  set_target_properties(pythiafjtools PROPERTIES
    INSTALL_RPATH "@loader_path")
elseif(UNIX)
  set_target_properties(pythiafjtools PROPERTIES
    INSTALL_RPATH "$ORIGIN")
endif()

target_link_libraries(pythiafjtools
  PUBLIC
    CMakeSwig::fastjet
    ${PYTHIA8_LDFLAGS}
)

#target_link_libraries(pythiafjtools PUBLIC...)
add_library(CMakeSwig::pythiafjtools ALIAS pythiafjtools)

# Install
include(GNUInstallDirs)
install(TARGETS pythiafjtools
  EXPORT CMakeSwigTargets
  PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/pythiafjtools
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  #RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
