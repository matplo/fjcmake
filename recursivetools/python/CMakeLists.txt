set_property(SOURCE recursivetools.i PROPERTY CPLUSPLUS ON)
set_property(SOURCE recursivetools.i PROPERTY SWIG_MODULE_NAME pyrecursivetools)
swig_add_library(pyrecursivetools
	TYPE SHARED
	LANGUAGE python
	OUTPUT_DIR ${CMAKE_BINARY_DIR}/python/${PROJECT_NAME}/RecursiveTools
	SOURCES	recursivetools.i)

add_compile_definitions(SWIG)

target_include_directories(pyrecursivetools
	PRIVATE
	../../fastjet/include
	../include
	${PYTHON_INCLUDE_DIRS}
	)
set_property(TARGET pyrecursivetools PROPERTY SWIG_USE_TARGET_INCLUDE_DIRECTORIES ON)

# note: macOS is APPLE and also UNIX !
if(APPLE)
	set_target_properties(pyrecursivetools PROPERTIES
		SUFFIX ".so"
		INSTALL_RPATH	"@loader_path;@loader_path/../../${PROJECT_NAME}/.libs"
		)
	set_property(TARGET pyrecursivetools APPEND PROPERTY
		LINK_FLAGS "-flat_namespace -undefined suppress"
		)
elseif(UNIX)
	set_target_properties(pyrecursivetools PROPERTIES
    INSTALL_RPATH	"$ORIGIN:$ORIGIN/../../${PROJECT_NAME}/.libs"
		)
endif()

target_link_libraries(pyrecursivetools
	PRIVATE
	recursivetools
	${PYTHON_LIBRARIES}
	)
