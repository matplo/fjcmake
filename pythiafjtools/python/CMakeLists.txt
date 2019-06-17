set_property(SOURCE pythiafjtools.i PROPERTY CPLUSPLUS ON)
set_property(SOURCE pythiafjtools.i PROPERTY SWIG_MODULE_NAME pypythiafjtools)
swig_add_library(pypythiafjtools
	TYPE SHARED
	LANGUAGE python
	OUTPUT_DIR ${CMAKE_BINARY_DIR}/python/${PROJECT_NAME}/PythiaFJTools
	SOURCES	pythiafjtools.i)

add_compile_definitions(SWIG)

target_include_directories(pypythiafjtools
	PRIVATE
	../../fastjet/include
	../include
	${PYTHON_INCLUDE_DIRS}
	)
set_property(TARGET pypythiafjtools PROPERTY SWIG_USE_TARGET_INCLUDE_DIRECTORIES ON)

# note: macOS is APPLE and also UNIX !
if(APPLE)
	set_target_properties(pypythiafjtools PROPERTIES
		SUFFIX ".so"
		INSTALL_RPATH	"@loader_path;@loader_path/../../${PROJECT_NAME}/.libs"
		)
	set_property(TARGET pypythiafjtools APPEND PROPERTY
		LINK_FLAGS "-flat_namespace -undefined suppress"
		)
elseif(UNIX)
	set_target_properties(pypythiafjtools PROPERTIES
    INSTALL_RPATH	"$ORIGIN:$ORIGIN/../../${PROJECT_NAME}/.libs"
		)
endif()

target_link_libraries(pypythiafjtools
	PRIVATE
	pythiafjtools
	${PYTHIA8_LDFLAGS}
	${PYTHON_LIBRARIES}
	)
