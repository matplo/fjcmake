set_property(SOURCE fastjet.i PROPERTY CPLUSPLUS ON)
set_property(SOURCE fastjet.i PROPERTY SWIG_MODULE_NAME pyfastjet)
swig_add_library(pyfastjet
	TYPE SHARED
	LANGUAGE python
	OUTPUT_DIR ${CMAKE_BINARY_DIR}/python/${PROJECT_NAME}/fastjet
	SOURCES	fastjet.i)

add_compile_definitions(SWIG)

target_include_directories(pyfastjet
	PRIVATE
	../include
	${PYTHON_INCLUDE_DIRS}
	)
set_property(TARGET pyfastjet PROPERTY SWIG_USE_TARGET_INCLUDE_DIRECTORIES ON)

# note: macOS is APPLE and also UNIX !
if(APPLE)
	set_target_properties(pyfastjet PROPERTIES
		SUFFIX ".so"
		INSTALL_RPATH	"@loader_path;@loader_path/../../${PROJECT_NAME}/.libs"
		)
	set_property(TARGET pyfastjet APPEND PROPERTY
		LINK_FLAGS "-flat_namespace -undefined suppress"
		)
elseif(UNIX)
	set_target_properties(pyfastjet PROPERTIES
    INSTALL_RPATH	"$ORIGIN:$ORIGIN/../../${PROJECT_NAME}/.libs"
		)
endif()

target_link_libraries(pyfastjet
	PRIVATE
	fastjet
	${PYTHON_LIBRARIES}
	)
