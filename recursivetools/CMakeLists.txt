add_library(recursivetools "")

target_sources(recursivetools
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/RecursiveTools/SoftDrop.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/RecursiveTools/RecursiveSymmetryCutBase.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/RecursiveTools/RecursiveSoftDrop.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/RecursiveTools/Recluster.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/RecursiveTools/ModifiedMassDropTagger.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/RecursiveTools/IteratedSoftDrop.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/RecursiveTools/BottomUpSoftDrop.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/RecursiveTools/Util.hh>

    $<INSTALL_INTERFACE:include/RecursiveTools/SoftDrop.hh>
    $<INSTALL_INTERFACE:include/RecursiveTools/RecursiveSymmetryCutBase.hh>
    $<INSTALL_INTERFACE:include/RecursiveTools/RecursiveSoftDrop.hh>
    $<INSTALL_INTERFACE:include/RecursiveTools/Recluster.hh>
    $<INSTALL_INTERFACE:include/RecursiveTools/ModifiedMassDropTagger.hh>
    $<INSTALL_INTERFACE:include/RecursiveTools/IteratedSoftDrop.hh>
    $<INSTALL_INTERFACE:include/RecursiveTools/BottomUpSoftDrop.hh>
    $<INSTALL_INTERFACE:include/RecursiveTools/Util.hh>
  PRIVATE
    src/BottomUpSoftDrop.cc
    src/IteratedSoftDrop.cc
    src/ModifiedMassDropTagger.cc
    src/Recluster.cc
    src/RecursiveSoftDrop.cc
    src/RecursiveSymmetryCutBase.cc
    src/SoftDrop.cc
    src/Util.cc
)
target_include_directories(recursivetools
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../../fastjet/include>
    $<INSTALL_INTERFACE:include>
)

set_target_properties(recursivetools PROPERTIES
  VERSION ${PROJECT_VERSION}
  PUBLIC_HEADER $<TARGET_PROPERTY:recursivetools,INTERFACE_SOURCES>
)

# note: macOS is APPLE and also UNIX !
if(APPLE)
  set_target_properties(recursivetools PROPERTIES
    INSTALL_RPATH "@loader_path")
elseif(UNIX)
  set_target_properties(recursivetools PROPERTIES
    INSTALL_RPATH "$ORIGIN")
endif()

target_link_libraries(recursivetools
  PUBLIC
    CMakeSwig::fastjet
)

#target_link_libraries(recursivetools PUBLIC...)
add_library(CMakeSwig::recursivetools ALIAS recursivetools)

# Install
include(GNUInstallDirs)
install(TARGETS recursivetools
  EXPORT CMakeSwigTargets
  PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/recursivetools
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  #RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
