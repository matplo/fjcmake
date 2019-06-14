add_library(fastjet "")

target_sources(fastjet
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/LimitedWarning.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/AreaDefinition.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/ActiveAreaSpec.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/CircularRange.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/NNH.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/PseudoJet.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/ClusterSequenceStructure.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/GhostedAreaSpec.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/SharedPtr.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/NNFJN2Plain.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/NNBase.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/ClusterSequenceWithArea.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/version.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/ClusterSequenceAreaBase.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/Error.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/PseudoJetStructureBase.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/RangeDefinition.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/ClusterSequenceArea.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/ClusterSequenceVoronoiArea.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/ClusterSequenceActiveAreaExplicitGhosts.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/WrappedStructure.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/JetDefinition.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/CompositeJetStructure.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/NNFJN2Tiled.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/ClusterSequenceActiveArea.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/ClusterSequence.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/Selector.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/FunctionOfPseudoJet.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/RectangularGrid.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/ClusterSequencePassiveArea.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/ClusterSequence1GhostPassiveArea.hh>

    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/tools/Recluster.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/tools/Filter.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/tools/Pruner.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/tools/Transformer.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/tools/CASubJetTagger.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/tools/JHTopTagger.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/tools/JetMedianBackgroundEstimator.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/tools/Subtractor.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/tools/MassDropTagger.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/tools/RestFrameNSubjettinessTagger.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/tools/GridMedianBackgroundEstimator.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/tools/BackgroundEstimatorBase.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/tools/TopTaggerBase.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/tools/Boost.hh>

    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/internal/IsBase.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/internal/SearchTree.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/internal/LimitedWarning.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/internal/LazyTiling9.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/internal/LazyTiling9Alt.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/internal/ClosestPair2D.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/internal/Voronoi.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/internal/Triangulation.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/internal/DnnPlane.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/internal/BasicRandom.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/internal/base.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/internal/ClosestPair2DBase.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/internal/TilingExtent.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/internal/Dnn2piCylinder.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/internal/Dnn4piCylinder.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/internal/Dnn3piCylinder.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/internal/numconsts.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/internal/MinHeap.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/internal/LazyTiling9SeparateGhosts.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/internal/LazyTiling25.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/internal/deprecated.hh>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/fastjet/internal/DynamicNearestNeighbours.hh>

    $<INSTALL_INTERFACE:include/fastjet/LimitedWarning.hh>
    $<INSTALL_INTERFACE:include/fastjet/AreaDefinition.hh>
    $<INSTALL_INTERFACE:include/fastjet/ActiveAreaSpec.hh>
    $<INSTALL_INTERFACE:include/fastjet/CircularRange.hh>
    $<INSTALL_INTERFACE:include/fastjet/NNH.hh>
    $<INSTALL_INTERFACE:include/fastjet/PseudoJet.hh>
    $<INSTALL_INTERFACE:include/fastjet/ClusterSequenceStructure.hh>
    $<INSTALL_INTERFACE:include/fastjet/GhostedAreaSpec.hh>
    $<INSTALL_INTERFACE:include/fastjet/SharedPtr.hh>
    $<INSTALL_INTERFACE:include/fastjet/NNFJN2Plain.hh>
    $<INSTALL_INTERFACE:include/fastjet/NNBase.hh>
    $<INSTALL_INTERFACE:include/fastjet/ClusterSequenceWithArea.hh>
    $<INSTALL_INTERFACE:include/fastjet/version.hh>
    $<INSTALL_INTERFACE:include/fastjet/ClusterSequenceAreaBase.hh>
    $<INSTALL_INTERFACE:include/fastjet/Error.hh>
    $<INSTALL_INTERFACE:include/fastjet/PseudoJetStructureBase.hh>
    $<INSTALL_INTERFACE:include/fastjet/RangeDefinition.hh>
    $<INSTALL_INTERFACE:include/fastjet/ClusterSequenceArea.hh>
    $<INSTALL_INTERFACE:include/fastjet/ClusterSequenceVoronoiArea.hh>
    $<INSTALL_INTERFACE:include/fastjet/ClusterSequenceActiveAreaExplicitGhosts.hh>
    $<INSTALL_INTERFACE:include/fastjet/WrappedStructure.hh>
    $<INSTALL_INTERFACE:include/fastjet/JetDefinition.hh>
    $<INSTALL_INTERFACE:include/fastjet/CompositeJetStructure.hh>
    $<INSTALL_INTERFACE:include/fastjet/NNFJN2Tiled.hh>
    $<INSTALL_INTERFACE:include/fastjet/ClusterSequenceActiveArea.hh>
    $<INSTALL_INTERFACE:include/fastjet/ClusterSequence.hh>
    $<INSTALL_INTERFACE:include/fastjet/Selector.hh>
    $<INSTALL_INTERFACE:include/fastjet/FunctionOfPseudoJet.hh>
    $<INSTALL_INTERFACE:include/fastjet/RectangularGrid.hh>
    $<INSTALL_INTERFACE:include/fastjet/ClusterSequencePassiveArea.hh>
    $<INSTALL_INTERFACE:include/fastjet/ClusterSequence1GhostPassiveArea.hh>

    $<INSTALL_INTERFACE:include/fastjet/tools/Recluster.hh>
    $<INSTALL_INTERFACE:include/fastjet/tools/Filter.hh>
    $<INSTALL_INTERFACE:include/fastjet/tools/Pruner.hh>
    $<INSTALL_INTERFACE:include/fastjet/tools/Transformer.hh>
    $<INSTALL_INTERFACE:include/fastjet/tools/CASubJetTagger.hh>
    $<INSTALL_INTERFACE:include/fastjet/tools/JHTopTagger.hh>
    $<INSTALL_INTERFACE:include/fastjet/tools/JetMedianBackgroundEstimator.hh>
    $<INSTALL_INTERFACE:include/fastjet/tools/Subtractor.hh>
    $<INSTALL_INTERFACE:include/fastjet/tools/MassDropTagger.hh>
    $<INSTALL_INTERFACE:include/fastjet/tools/RestFrameNSubjettinessTagger.hh>
    $<INSTALL_INTERFACE:include/fastjet/tools/GridMedianBackgroundEstimator.hh>
    $<INSTALL_INTERFACE:include/fastjet/tools/BackgroundEstimatorBase.hh>
    $<INSTALL_INTERFACE:include/fastjet/tools/TopTaggerBase.hh>
    $<INSTALL_INTERFACE:include/fastjet/tools/Boost.hh>

    $<INSTALL_INTERFACE:include/fastjet/internal/IsBase.hh>
    $<INSTALL_INTERFACE:include/fastjet/internal/SearchTree.hh>
    $<INSTALL_INTERFACE:include/fastjet/internal/LimitedWarning.hh>
    $<INSTALL_INTERFACE:include/fastjet/internal/LazyTiling9.hh>
    $<INSTALL_INTERFACE:include/fastjet/internal/LazyTiling9Alt.hh>
    $<INSTALL_INTERFACE:include/fastjet/internal/ClosestPair2D.hh>
    $<INSTALL_INTERFACE:include/fastjet/internal/Voronoi.hh>
    $<INSTALL_INTERFACE:include/fastjet/internal/Triangulation.hh>
    $<INSTALL_INTERFACE:include/fastjet/internal/DnnPlane.hh>
    $<INSTALL_INTERFACE:include/fastjet/internal/BasicRandom.hh>
    $<INSTALL_INTERFACE:include/fastjet/internal/base.hh>
    $<INSTALL_INTERFACE:include/fastjet/internal/ClosestPair2DBase.hh>
    $<INSTALL_INTERFACE:include/fastjet/internal/TilingExtent.hh>
    $<INSTALL_INTERFACE:include/fastjet/internal/Dnn2piCylinder.hh>
    $<INSTALL_INTERFACE:include/fastjet/internal/Dnn4piCylinder.hh>
    $<INSTALL_INTERFACE:include/fastjet/internal/Dnn3piCylinder.hh>
    $<INSTALL_INTERFACE:include/fastjet/internal/numconsts.hh>
    $<INSTALL_INTERFACE:include/fastjet/internal/MinHeap.hh>
    $<INSTALL_INTERFACE:include/fastjet/internal/LazyTiling9SeparateGhosts.hh>
    $<INSTALL_INTERFACE:include/fastjet/internal/LazyTiling25.hh>
    $<INSTALL_INTERFACE:include/fastjet/internal/deprecated.hh>
    $<INSTALL_INTERFACE:include/fastjet/internal/DynamicNearestNeighbours.hh>

  PRIVATE
    src/TilingExtent.cc
    src/ClusterSequence_TiledN2.cc
    src/MassDropTagger.cc
    src/RestFrameNSubjettinessTagger.cc
    src/Subtractor.cc
    src/GhostedAreaSpec.cc
    src/ClusterSequenceStructure.cc
    src/DnnPlane.cc
    src/BasicRandom.cc
    src/JHTopTagger.cc
    src/ClosestPair2D.cc
    src/Voronoi.cc
    src/LazyTiling9Alt.cc
    src/JetMedianBackgroundEstimator.cc
    src/PseudoJet.cc
    src/ClusterSequence_CP2DChan.cc
    src/Recluster.cc
    src/AreaDefinition.cc
    src/Pruner.cc
    src/Filter.cc
    src/LimitedWarning.cc
    src/LazyTiling9.cc
    src/CASubJetTagger.cc
    src/TopTaggerBase.cc
    src/RectangularGrid.cc
    src/ClusterSequencePassiveArea.cc
    src/LazyTiling25.cc
    src/ClusterSequence.cc
    src/FunctionOfPseudoJet.cc
    src/Selector.cc
    src/ClusterSequence1GhostPassiveArea.cc
    src/CompositeJetStructure.cc
    src/JetDefinition.cc
    src/LazyTiling9SeparateGhosts.cc
    src/MinHeap.cc
    src/ClusterSequence_DumbN3.cc
    src/ClusterSequenceActiveArea.cc
    src/BackgroundEstimatorBase.cc
    src/ClusterSequence_Delaunay.cc
    src/PseudoJetStructureBase.cc
    src/RangeDefinition.cc
    src/Dnn4piCylinder.cc
    src/Dnn3piCylinder.cc
    src/ClusterSequenceVoronoiArea.cc
    src/ClusterSequenceActiveAreaExplicitGhosts.cc
    src/ClusterSequenceArea.cc
    src/GridMedianBackgroundEstimator.cc
    src/Dnn2piCylinder.cc
    src/ClusterSequence_N2.cc
    src/ClusterSequenceAreaBase.cc
    src/Error.cc)

target_include_directories(fastjet
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<BUILD_INTERFACE:${FASTJET_DIR}/include>
    $<INSTALL_INTERFACE:include>
)
find_package( CGAL QUIET COMPONENTS Core)
if ( CGAL_FOUND )
  # include( ${CGAL_USE_FILE} )
  set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CGAL_LIBRARY_DIRS}/cmake/CGAL/")
  find_package(GMP REQUIRED)
  link_directories( /usr/local/lib )
  include_directories( /usr/local/include )
  set(Boost_NO_BOOST_CMAKE ON)
  set(BUILD_SHARED_LIBS ON)
  set(Boost_USE_STATIC_LIBS OFF)
  find_package(Boost REQUIRED COMPONENTS math_c99 log log_setup system filesystem thread)
    if (BOOST-NOTFOUND)
      message(SEND_ERROR "Boost or one of the components not found.")
    else()
      include_directories(SYSTEM ${Boost_INCLUDE_DIRS})
      message( STATUS "BOOST_LIBRARIES: ${Boost_LIBRARYDIR} ${Boost_LIBRARIES} ${BOOST_LIBRARIES}")
      # add_definitions(-DBOOST_LOG_DYN_LINK -DBOOST_SYSTEM_NO_DEPRECATED)
      add_compile_definitions(BOOST_LOG_DYN_LINK BOOST_SYSTEM_NO_DEPRECATED)
      target_link_libraries(fastjet ${Boost_LIBRARIES})
      target_link_libraries(fastjet CGAL::CGAL CGAL::CGAL_Core)
    endif (BOOST-NOTFOUND)
  else()
  # add_definitions(-DDROP_CGAL)
  add_compile_definitions(DROP_CGAL)
endif()

add_compile_definitions(FASTJET_PACKAGE_VERSION="3.3.2")

set_target_properties(fastjet PROPERTIES
  VERSION ${PROJECT_VERSION}
  PUBLIC_HEADER $<TARGET_PROPERTY:fastjet,INTERFACE_SOURCES>
)
#target_link_libraries(fastjet PUBLIC ...)
add_library(CMakeSwig::fastjet ALIAS fastjet)

# Install
include(GNUInstallDirs)
install(TARGETS fastjet
  EXPORT CMakeSwigTargets
  PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/fastjet
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  #RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

string(REPLACE "include/fastjet/include/fastjet" "include/fastjet" INCLUDE_DEST_DIR "${CMAKE_INSTALL_INCLUDEDIR}/fastjet")
message(STATUS "Include dest dir: ${INCLUDE_INST_DIR}")
install(DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/" # source directory
        DESTINATION "${INCLUDE_DEST_DIR}/../../" # target directory
        FILES_MATCHING # install only matched files
        PATTERN "*.hh" # select header files
)
