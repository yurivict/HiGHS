# Define library.
# Outdated CMake approach: update in progress
if (NOT FAST_BUILD)
  set(IPX_ON ON)
endif()

if (IPX_ON)
set(basiclu_sources
    ipm/basiclu/src/basiclu_factorize.c
    ipm/basiclu/src/basiclu_solve_dense.c
    ipm/basiclu/src/lu_build_factors.c
    ipm/basiclu/src/lu_factorize_bump.c
    ipm/basiclu/src/lu_initialize.c
    ipm/basiclu/src/lu_markowitz.c
    ipm/basiclu/src/lu_setup_bump.c
    ipm/basiclu/src/lu_solve_sparse.c
    ipm/basiclu/src/basiclu_get_factors.c
    ipm/basiclu/src/basiclu_solve_for_update.c
    ipm/basiclu/src/lu_condest.c
    ipm/basiclu/src/lu_file.c
    ipm/basiclu/src/lu_internal.c
    ipm/basiclu/src/lu_matrix_norm.c
    ipm/basiclu/src/lu_singletons.c
    ipm/basiclu/src/lu_solve_symbolic.c
    ipm/basiclu/src/lu_update.c
    ipm/basiclu/src/basiclu_initialize.c
    ipm/basiclu/src/basiclu_solve_sparse.c
    ipm/basiclu/src/lu_pivot.c
    ipm/basiclu/src/lu_solve_dense.c
    ipm/basiclu/src/lu_solve_triangular.c
    ipm/basiclu/src/basiclu_object.c
    ipm/basiclu/src/basiclu_update.c
    ipm/basiclu/src/lu_dfs.c
    ipm/basiclu/src/lu_garbage_perm.c
    ipm/basiclu/src/lu_residual_test.c
    ipm/basiclu/src/lu_solve_for_update.c)

set(ipx_sources
    ipm/ipx/src/basiclu_kernel.cc
    ipm/ipx/src/basiclu_wrapper.cc
    ipm/ipx/src/basis.cc
    ipm/ipx/src/conjugate_residuals.cc
    ipm/ipx/src/control.cc
    ipm/ipx/src/crossover.cc
    ipm/ipx/src/diagonal_precond.cc
    ipm/ipx/src/forrest_tomlin.cc
    ipm/ipx/src/guess_basis.cc
    ipm/ipx/src/indexed_vector.cc
    ipm/ipx/src/info.cc
    ipm/ipx/src/ipm.cc
    ipm/ipx/src/ipx_c.cc
    ipm/ipx/src/iterate.cc
    ipm/ipx/src/kkt_solver.cc
    ipm/ipx/src/kkt_solver_basis.cc
    ipm/ipx/src/kkt_solver_diag.cc
    ipm/ipx/src/linear_operator.cc
    ipm/ipx/src/lp_solver.cc
    ipm/ipx/src/lu_factorization.cc
    ipm/ipx/src/lu_update.cc
    ipm/ipx/src/maxvolume.cc
    ipm/ipx/src/model.cc
    ipm/ipx/src/normal_matrix.cc
    ipm/ipx/src/sparse_matrix.cc
    ipm/ipx/src/sparse_utils.cc
    ipm/ipx/src/splitted_normal_matrix.cc
    ipm/ipx/src/starting_basis.cc
    ipm/ipx/src/symbolic_invert.cc
    ipm/ipx/src/timer.cc
    ipm/ipx/src/utils.cc)
endif()

# Outdated CMake approach: update in progress
if (NOT FAST_BUILD)
include_directories(ipm/ipx/src)
include_directories(ipm/ipx/include)
include_directories(ipm/basiclu/src)
include_directories(ipm/basiclu/include)

set(sources
    ../extern/filereaderlp/reader.cpp
    io/Filereader.cpp
    io/FilereaderLp.cpp
    io/FilereaderEms.cpp
    io/FilereaderMps.cpp
    io/HighsIO.cpp
    io/HMPSIO.cpp
    io/HMpsFF.cpp
    io/LoadOptions.cpp
    lp_data/Highs.cpp
    lp_data/HighsDebug.cpp
    lp_data/HighsInfo.cpp
    lp_data/HighsInfoDebug.cpp
    lp_data/HighsDeprecated.cpp
    lp_data/HighsInterface.cpp
    lp_data/HighsLp.cpp
    lp_data/HighsLpUtils.cpp
    lp_data/HighsModelUtils.cpp
    lp_data/HighsRanging.cpp
    lp_data/HighsSolution.cpp
    lp_data/HighsSolutionDebug.cpp
    lp_data/HighsSolve.cpp
    lp_data/HighsStatus.cpp
    lp_data/HighsOptions.cpp
    mip/HighsMipSolver.cpp
    mip/HighsMipSolverData.cpp
    mip/HighsDomain.cpp
    mip/HighsDynamicRowMatrix.cpp
    mip/HighsLpRelaxation.cpp
    mip/HighsSeparation.cpp
    mip/HighsSeparator.cpp
    mip/HighsTableauSeparator.cpp
    mip/HighsModkSeparator.cpp
    mip/HighsPathSeparator.cpp
    mip/HighsCutGeneration.cpp
    mip/HighsSearch.cpp
    mip/HighsConflictPool.cpp
    mip/HighsCutPool.cpp
    mip/HighsCliqueTable.cpp
    mip/HighsGFkSolve.cpp
    mip/HighsTransformedLp.cpp
    mip/HighsLpAggregator.cpp
    mip/HighsDebugSol.cpp
    mip/HighsImplications.cpp
    mip/HighsPrimalHeuristics.cpp
    mip/HighsPseudocost.cpp
    mip/HighsRedcostFixing.cpp
    mip/HighsNodeQueue.cpp
    mip/HighsObjectiveFunction.cpp
    model/HighsHessian.cpp
    model/HighsHessianUtils.cpp
    model/HighsModel.cpp
    parallel/HighsTaskExecutor.cpp
    presolve/ICrashX.cpp
    presolve/HAggregator.cpp
    presolve/HighsLpPropagator.cpp
    presolve/HighsPostsolveStack.cpp
    presolve/HighsSymmetry.cpp
    presolve/HPreData.cpp
    presolve/HPresolve.cpp
    presolve/PresolveAnalysis.cpp
    presolve/PresolveComponent.cpp
    presolve/Presolve.cpp
    presolve/PresolveUtils.cpp
    qpsolver/basis.cpp
    qpsolver/quass.cpp
    qpsolver/ratiotest.cpp
    simplex/HEkk.cpp
    simplex/HEkkControl.cpp
    simplex/HEkkDebug.cpp
    simplex/HEkkPrimal.cpp
    simplex/HEkkDual.cpp
    simplex/HEkkDualRHS.cpp
    simplex/HEkkDualRow.cpp
    simplex/HEkkDualMulti.cpp
    simplex/HEkkInterface.cpp
    simplex/HighsSimplexAnalysis.cpp
    simplex/HSimplex.cpp
    simplex/HSimplexDebug.cpp
    simplex/HSimplexNla.cpp
    simplex/HSimplexNlaDebug.cpp
    simplex/HSimplexNlaFreeze.cpp
    simplex/HSimplexNlaProductForm.cpp
    simplex/HSimplexReport.cpp
    test/DevKkt.cpp
    test/KktCh2.cpp
    util/HFactor.cpp
    util/HFactorDebug.cpp
    util/HFactorExtend.cpp
    util/HFactorRefactor.cpp
    util/HFactorUtils.cpp
    util/HighsHash.cpp
    util/HighsLinearSumBounds.cpp
    util/HighsMatrixPic.cpp
    util/HighsMatrixUtils.cpp
    util/HighsSort.cpp
    util/HighsSparseMatrix.cpp
    util/HighsUtils.cpp
    util/HSet.cpp
    util/HVectorBase.cpp
    util/stringutil.cpp
    interfaces/highs_c_api.cpp)

set(headers
    ../extern/filereaderlp/builder.hpp
    ../extern/filereaderlp/model.hpp
    ../extern/filereaderlp/reader.hpp
    io/Filereader.h
    io/FilereaderLp.h
    io/FilereaderEms.h
    io/FilereaderMps.h
    io/HMpsFF.h
    io/HMPSIO.h
    io/HighsIO.h
    io/LoadOptions.h
    lp_data/HConst.h
    lp_data/HStruct.h
    lp_data/HighsAnalysis.h
    lp_data/HighsDebug.h
    lp_data/HighsInfo.h
    lp_data/HighsInfoDebug.h
    lp_data/HighsLp.h
    lp_data/HighsLpSolverObject.h
    lp_data/HighsLpUtils.h
    lp_data/HighsModelUtils.h
    lp_data/HighsOptions.h
    lp_data/HighsRanging.h
    lp_data/HighsRuntimeOptions.h
    lp_data/HighsSolution.h
    lp_data/HighsSolutionDebug.h
    lp_data/HighsSolve.h
    lp_data/HighsStatus.h
    mip/HighsCliqueTable.h
    mip/HighsCutGeneration.h
    mip/HighsConflictPool.h
    mip/HighsCutPool.h
    mip/HighsDebugSol.h
    mip/HighsDomainChange.h
    mip/HighsDomain.h
    mip/HighsDynamicRowMatrix.h
    mip/HighsGFkSolve.h
    mip/HighsImplications.h
    mip/HighsLpAggregator.h
    mip/HighsLpRelaxation.h
    mip/HighsMipSolverData.h
    mip/HighsMipSolver.h
    mip/HighsModkSeparator.h
    mip/HighsNodeQueue.h
    mip/HighsObjectiveFunction.h
    mip/HighsPathSeparator.h
    mip/HighsPrimalHeuristics.h
    mip/HighsPseudocost.h
    mip/HighsRedcostFixing.h
    mip/HighsSearch.h
    mip/HighsSeparation.h
    mip/HighsSeparator.h
    mip/HighsTableauSeparator.h
    mip/HighsTransformedLp.h
    model/HighsHessian.h
    model/HighsHessianUtils.h
    model/HighsModel.h
    parallel/HighsBinarySemaphore.h
    parallel/HighsCacheAlign.h
    parallel/HighsCombinable.h
    parallel/HighsMutex.h
    parallel/HighsParallel.h
    parallel/HighsSpinMutex.h
    parallel/HighsSplitDeque.h
    parallel/HighsTaskExecutor.h
    parallel/HighsTask.h
    qpsolver/quass.hpp
    qpsolver/vector.hpp
    simplex/HApp.h
    simplex/HEkk.h
    simplex/HEkkDual.h
    simplex/HEkkDualRHS.h
    simplex/HEkkDualRow.h
    simplex/HEkkPrimal.h
    simplex/HighsSimplexAnalysis.h
    simplex/HSimplex.h
    simplex/HSimplexReport.h
    simplex/HSimplexDebug.h
    simplex/HSimplexNla.h
    simplex/SimplexConst.h
    simplex/SimplexStruct.h
    simplex/SimplexTimer.h
    presolve/ICrashX.h
    presolve/HAggregator.h
    presolve/HighsLpPropagator.h
    presolve/HighsPostsolveStack.h
    presolve/HighsSymmetry.h
    presolve/HPreData.h
    presolve/HPresolve.h
    presolve/PresolveAnalysis.h
    presolve/PresolveComponent.h
    presolve/Presolve.h
    presolve/PresolveUtils.h
    test/DevKkt.h
    test/KktCh2.h
    util/FactorTimer.h
    util/HFactor.h
    util/HFactorConst.h
    util/HFactorDebug.h
    util/HighsCDouble.h
    util/HighsComponent.h
    util/HighsDataStack.h
    util/HighsDisjointSets.h
    util/HighsHash.h
    util/HighsInt.h
    util/HighsIntegers.h
    util/HighsLinearSumBounds.h
    util/HighsMatrixPic.h
    util/HighsMatrixSlice.h
    util/HighsMatrixUtils.h
    util/HighsRandom.h
    util/HighsRbTree.h
    util/HighsSort.h
    util/HighsSparseMatrix.h
    util/HighsSparseVectorSum.h
    util/HighsSplay.h
    util/HighsTimer.h
    util/HighsUtils.h
    util/HSet.h
    util/HVector.h
    util/HVectorBase.h
    util/stringutil.h
    Highs.h
    interfaces/highs_c_api.h
)

if (IPX_ON)
    set(headers ${headers} ipm/IpxWrapper.h ${basiclu_headers}
        ${ipx_headers})
    set(sources ${sources} ipm/IpxWrapper.cpp)
    add_library(libbasiclu ${basiclu_sources})
    add_library(libipx ${ipx_sources})
    target_link_libraries(libipx libbasiclu)
else ()
    set(headers ${headers} ipm/IpxWrapperEmpty.h)
endif()

add_library(libhighs ${sources})

if (IPX_ON)
    target_link_libraries(libhighs libipx)
endif()

if(${BUILD_SHARED_LIBS})
    # put version information into shared library file
    set_target_properties(libhighs PROPERTIES
        VERSION 
        ${HIGHS_VERSION_MAJOR}.${HIGHS_VERSION_MINOR}.${HIGHS_VERSION_PATCH}
        SOVERSION ${HIGHS_VERSION_MAJOR}.${HIGHS_VERSION_MINOR})
    if(MINGW)
        target_compile_definitions(libhighs PUBLIC LIBHIGHS_STATIC_DEFINE)
    endif()
else()
    # create static highs library with pic
    set_target_properties(libhighs PROPERTIES
        POSITION_INDEPENDENT_CODE on)
    target_compile_definitions(libhighs PUBLIC LIBHIGHS_STATIC_DEFINE)
endif()

# on UNIX system the 'lib' prefix is automatically added
set_target_properties(libhighs PROPERTIES
    OUTPUT_NAME "highs"
    MACOSX_RPATH "${CMAKE_INSTALL_PREFIX}/lib")

if (IPX_ON)
    set_target_properties(libipx PROPERTIES
        OUTPUT_NAME "ipx"
        MACOSX_RPATH "${CMAKE_INSTALL_PREFIX}/lib")
    set_target_properties(libbasiclu PROPERTIES
        OUTPUT_NAME "basiclu"
        MACOSX_RPATH "${CMAKE_INSTALL_PREFIX}/lib")
endif()

if (OSI_FOUND)
    add_library(OsiHighs interfaces/OsiHiGHSSolverInterface.cpp)
    set(headers ${headers} interfaces/OsiHiGHSSolverInterface.hpp)

    target_include_directories(OsiHighs PUBLIC ${OSI_INCLUDE_DIRS})
    target_link_libraries(OsiHighs PUBLIC libhighs ${OSI_LIBRARIES})
    target_compile_options(OsiHighs PUBLIC ${OSI_CFLAGS_OTHER})

    if(${BUILD_SHARED_LIBS})
        set_target_properties(OsiHighs PROPERTIES
           VERSION 
           ${HIGHS_VERSION_MAJOR}.${HIGHS_VERSION_MINOR}.${HIGHS_VERSION_PATCH}
           SOVERSION ${HIGHS_VERSION_MAJOR}.${HIGHS_VERSION_MINOR})
    else()
        set_target_properties(OsiHighs PROPERTIES POSITION_INDEPENDENT_CODE on)
    endif()

    install(TARGETS OsiHighs
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
        INCLUDES DESTINATION include)

    set_target_properties(OsiHighs PROPERTIES INSTALL_RPATH
        "${CMAKE_INSTALL_PREFIX}/lib")

    #configure and install the pkg-config file
    configure_file(${HIGHS_SOURCE_DIR}/osi-highs.pc.in
        "${PROJECT_BINARY_DIR}${CMAKE_FILES_DIRECTORY}/osi-highs.pc" @ONLY)
    install(FILES "${PROJECT_BINARY_DIR}${CMAKE_FILES_DIRECTORY}/osi-highs.pc"
        DESTINATION lib/pkgconfig)
endif()

if (ZLIB_FOUND)
  target_include_directories(libhighs PUBLIC ${ZLIB_INCLUDE_DIRS})
  target_link_libraries(libhighs ${ZLIB_LIBRARIES})
endif()

# set the install rpath to the installed destination
set_target_properties(highs PROPERTIES INSTALL_RPATH
    "${CMAKE_INSTALL_PREFIX}/lib")

# install the header files of highs
foreach ( file ${headers} )
    get_filename_component( dir ${file} DIRECTORY )
    install( FILES ${file} DESTINATION include/${dir} )
endforeach()
install(FILES ${HIGHS_BINARY_DIR}/HConfig.h DESTINATION include)
install(FILES ${HIGHS_BINARY_DIR}/libhighs_export.h DESTINATION include)

if (IPX_ON)
    if (UNIX)
        #target_compile_options(libhighs PRIVATE "-Wno-defaulted-function-deleted")
        #target_compile_options(libhighs PRIVATE "-Wno-return-type-c-linkage")
        target_compile_options(libhighs PRIVATE "-Wno-return-type" "-Wno-switch")

        target_compile_options(libhighs PRIVATE "-Wno-unused-variable")
        target_compile_options(libhighs PRIVATE "-Wno-unused-const-variable")
        target_compile_options(libhighs PRIVATE "-Wno-sign-compare")
        #target_compile_options(libhighs PRIVATE "-Wno-logical-op-parentheses")

        #target_compile_options(libipx PRIVATE "-Wno-defaulted-function-deleted")
        #target_compile_options(libipx PRIVATE "-Wno-return-type-c-linkage")
        target_compile_options(libipx PRIVATE "-Wno-return-type" "-Wno-switch")

        target_compile_options(libipx PRIVATE "-Wno-unused-variable")
        target_compile_options(libipx PRIVATE "-Wno-sign-compare")
        #target_compile_options(libipx PRIVATE "-Wno-logical-op-parentheses")
    endif()

    if (WIN32)
        install(TARGETS libhighs libipx libbasiclu EXPORT highs-targets
            LIBRARY DESTINATION bin
            ARCHIVE DESTINATION lib
            INCLUDES DESTINATION include)
    else()
        install(TARGETS libhighs libipx libbasiclu EXPORT highs-targets
            LIBRARY DESTINATION lib
            ARCHIVE DESTINATION lib
            INCLUDES DESTINATION include)
    endif()

    # Add library targets to the build-tree export set
    export(TARGETS libhighs libipx libbasiclu
    FILE "${HIGHS_BINARY_DIR}/highs-targets.cmake")
else()
    if (WIN32)
        install(TARGETS libhighs EXPORT highs-targets
                LIBRARY DESTINATION bin
                ARCHIVE DESTINATION lib
                INCLUDES DESTINATION include)
    else()
        install(TARGETS libhighs EXPORT highs-targets
                LIBRARY DESTINATION lib
                ARCHIVE DESTINATION lib
                INCLUDES DESTINATION include)
    endif()

    # Add library targets to the build-tree export set
    export(TARGETS libhighs 
    FILE "${HIGHS_BINARY_DIR}/highs-targets.cmake")
endif()


# Configure the config file for the build tree:
# Either list all the src/* directories here, or put explicit paths in all the
# include statements.
# M reckons that the latter is more transparent, and I'm inclined to agree.
set(CONF_INCLUDE_DIRS "${HIGHS_SOURCE_DIR}/src" "${HIGHS_BINARY_DIR}")
configure_file(${HIGHS_SOURCE_DIR}/highs-config.cmake.in
    "${HIGHS_BINARY_DIR}/highs-config.cmake" @ONLY)

# Configure the config file for the install
set(CONF_INCLUDE_DIRS "\${CMAKE_CURRENT_LIST_DIR}/../../../include")
configure_file(${HIGHS_SOURCE_DIR}/highs-config.cmake.in
    "${HIGHS_BINARY_DIR}${CMAKE_FILES_DIRECTORY}/highs-config.cmake" @ONLY)

# Configure the pkg-config file for the install
configure_file(${HIGHS_SOURCE_DIR}/highs.pc.in
    "${HIGHS_BINARY_DIR}${CMAKE_FILES_DIRECTORY}/highs.pc" @ONLY)

# Install the targets of the highs export group, the config file so that other
# cmake-projects can link easily against highs, and the pkg-config flie so that
# other projects can easily build against highs
install(EXPORT highs-targets FILE highs-targets.cmake DESTINATION 
    lib/cmake/highs)
install(FILES "${HIGHS_BINARY_DIR}${CMAKE_FILES_DIRECTORY}/highs-config.cmake" 
    DESTINATION lib/cmake/highs)
install(FILES "${HIGHS_BINARY_DIR}${CMAKE_FILES_DIRECTORY}/highs.pc" 
    DESTINATION lib/pkgconfig)

else() 

# FAST_BUILD is set to on.
# At the moment used only for gradually updating the CMake targets build and
# install / export.
# Define library in modern CMake using target_*()
# No interfaces (apart from c); No ipx; New (short) ctest instances.
add_library(libhighs)

if (NOT ${BUILD_SHARED_LIBS})
    set_target_properties(libhighs PROPERTIES POSITION_INDEPENDENT_CODE ON)
    target_compile_definitions(libhighs PUBLIC LIBHIGHS_STATIC_DEFINE)
elseif(MINGW)
    target_compile_definitions(libhighs PUBLIC LIBHIGHS_STATIC_DEFINE)
endif()

target_sources(libhighs PRIVATE
    ../extern/filereaderlp/reader.cpp
    io/Filereader.cpp
    io/FilereaderLp.cpp
    io/FilereaderEms.cpp
    io/FilereaderMps.cpp
    io/HighsIO.cpp
    io/HMPSIO.cpp
    io/HMpsFF.cpp
    io/LoadOptions.cpp
    lp_data/Highs.cpp
    lp_data/HighsDebug.cpp
    lp_data/HighsDeprecated.cpp
    lp_data/HighsInfo.cpp
    lp_data/HighsInfoDebug.cpp
    lp_data/HighsInterface.cpp
    lp_data/HighsLp.cpp
    lp_data/HighsLpUtils.cpp
    lp_data/HighsModelUtils.cpp
    lp_data/HighsRanging.cpp
    lp_data/HighsSolution.cpp
    lp_data/HighsSolutionDebug.cpp
    lp_data/HighsSolve.cpp
    lp_data/HighsStatus.cpp
    lp_data/HighsOptions.cpp
    mip/HighsMipSolver.cpp
    mip/HighsMipSolverData.cpp
    mip/HighsDomain.cpp
    mip/HighsDynamicRowMatrix.cpp
    mip/HighsLpRelaxation.cpp
    mip/HighsSeparation.cpp
    mip/HighsSeparator.cpp
    mip/HighsTableauSeparator.cpp
    mip/HighsModkSeparator.cpp
    mip/HighsPathSeparator.cpp
    mip/HighsCutGeneration.cpp
    mip/HighsSearch.cpp
    mip/HighsConflictPool.cpp
    mip/HighsCutPool.cpp
    mip/HighsCliqueTable.cpp
    mip/HighsGFkSolve.cpp
    mip/HighsTransformedLp.cpp
    mip/HighsLpAggregator.cpp
    mip/HighsDebugSol.cpp
    mip/HighsImplications.cpp
    mip/HighsPrimalHeuristics.cpp
    mip/HighsPseudocost.cpp
    mip/HighsNodeQueue.cpp
    mip/HighsObjectiveFunction.cpp
    mip/HighsRedcostFixing.cpp
    model/HighsHessian.cpp
    model/HighsHessianUtils.cpp
    model/HighsModel.cpp
    parallel/HighsTaskExecutor.cpp
    presolve/ICrashX.cpp
    presolve/HAggregator.cpp
    presolve/HighsLpPropagator.cpp
    presolve/HighsPostsolveStack.cpp
    presolve/HighsSymmetry.cpp
    presolve/HPreData.cpp
    presolve/HPresolve.cpp
    presolve/PresolveAnalysis.cpp
    presolve/PresolveComponent.cpp
    presolve/Presolve.cpp
    presolve/PresolveUtils.cpp
    qpsolver/basis.cpp
    qpsolver/quass.cpp
    qpsolver/ratiotest.cpp
    simplex/HEkk.cpp
    simplex/HEkkControl.cpp
    simplex/HEkkDebug.cpp
    simplex/HEkkPrimal.cpp
    simplex/HEkkDual.cpp
    simplex/HEkkDualRHS.cpp
    simplex/HEkkDualRow.cpp
    simplex/HEkkDualMulti.cpp
    simplex/HEkkInterface.cpp
    simplex/HighsSimplexAnalysis.cpp
    simplex/HSimplex.cpp
    simplex/HSimplexDebug.cpp
    simplex/HSimplexNla.cpp
    simplex/HSimplexNlaDebug.cpp
    simplex/HSimplexNlaFreeze.cpp
    simplex/HSimplexNlaProductForm.cpp
    simplex/HSimplexReport.cpp
    test/KktCh2.cpp
    test/DevKkt.cpp
    util/HFactor.cpp
    util/HFactorDebug.cpp
    util/HFactorExtend.cpp
    util/HFactorRefactor.cpp
    util/HFactorUtils.cpp
    util/HighsHash.cpp
    util/HighsLinearSumBounds.cpp
    util/HighsMatrixPic.cpp
    util/HighsMatrixUtils.cpp
    util/HighsSort.cpp
    util/HighsSparseMatrix.cpp
    util/HighsUtils.cpp
    util/HSet.cpp
    util/HVectorBase.cpp
    util/stringutil.cpp
    interfaces/highs_c_api.cpp)

target_include_directories(libhighs PUBLIC . ipm/ io/ lp_data/ mip/ model/ simplex/
                           presolve/ util/ test/ interfaces/ ../extern/)
target_include_directories(libhighs PUBLIC ${HIGHS_BINARY_DIR})

if (ZLIB_FOUND)
    target_include_directories(libhighs PUBLIC ${ZLIB_INCLUDE_DIRS} ../extern/zstr)
    target_link_libraries(libhighs ${ZLIB_LIBRARIES})
endif()

# on UNIX system the 'lib' prefix is automatically added
set_target_properties(libhighs PROPERTIES
    OUTPUT_NAME "highs"
    MACOSX_RPATH "${CMAKE_INSTALL_PREFIX}/lib")

if (UNIX)
    set_target_properties(libhighs PROPERTIES
        LIBRARY_OUTPUT_DIRECTORY "${HIGHS_BINARY_DIR}/lib")
endif()

set(headers_fast_build_
    ../extern/filereaderlp/builder.hpp
    ../extern/filereaderlp/model.hpp
    ../extern/filereaderlp/reader.hpp
    io/Filereader.h
    io/FilereaderLp.h
    io/FilereaderEms.h
    io/FilereaderMps.h
    io/HMpsFF.h
    io/HMPSIO.h
    io/HighsIO.h
    io/LoadOptions.h
    lp_data/HConst.h
    lp_data/HStruct.h
    lp_data/HighsAnalysis.h
    lp_data/HighsDebug.h
    lp_data/HighsInfo.h
    lp_data/HighsInfoDebug.h
    lp_data/HighsLp.h
    lp_data/HighsLpSolverObject.h
    lp_data/HighsLpUtils.h
    lp_data/HighsModelUtils.h
    lp_data/HighsOptions.h
    lp_data/HighsRanging.h
    lp_data/HighsRuntimeOptions.h
    lp_data/HighsSolution.h
    lp_data/HighsSolutionDebug.h
    lp_data/HighsSolve.h
    lp_data/HighsStatus.h
    mip/HighsCliqueTable.h
    mip/HighsCutGeneration.h
    mip/HighsConflictPool.h
    mip/HighsCutPool.h
    mip/HighsDebugSol.h
    mip/HighsDomainChange.h
    mip/HighsDomain.h
    mip/HighsDynamicRowMatrix.h
    mip/HighsGFkSolve.h
    mip/HighsImplications.h
    mip/HighsLpAggregator.h
    mip/HighsLpRelaxation.h
    mip/HighsMipSolverData.h
    mip/HighsMipSolver.h
    mip/HighsModkSeparator.h
    mip/HighsNodeQueue.h
    mip/HighsObjectiveFunction.h
    mip/HighsPathSeparator.h
    mip/HighsPrimalHeuristics.h
    mip/HighsPseudocost.h
    mip/HighsRedcostFixing.h
    mip/HighsSearch.h
    mip/HighsSeparation.h
    mip/HighsSeparator.h
    mip/HighsTableauSeparator.h
    mip/HighsTransformedLp.h
    model/HighsHessian.h
    model/HighsHessianUtils.h
    model/HighsModel.h
    parallel/HighsBinarySemaphore.h
    parallel/HighsCacheAlign.h
    parallel/HighsCombinable.h
    parallel/HighsMutex.h
    parallel/HighsParallel.h
    parallel/HighsSpinMutex.h
    parallel/HighsSplitDeque.h
    parallel/HighsTaskExecutor.h
    parallel/HighsTask.h
    qpsolver/quass.hpp
    qpsolver/vector.hpp
    simplex/HApp.h
    simplex/HEkk.h
    simplex/HEkkDual.h
    simplex/HEkkDualRHS.h
    simplex/HEkkDualRow.h
    simplex/HEkkPrimal.h
    simplex/HighsSimplexAnalysis.h
    simplex/HSimplex.h
    simplex/HSimplexReport.h
    simplex/HSimplexDebug.h
    simplex/HSimplexNla.h
    simplex/SimplexConst.h
    simplex/SimplexStruct.h
    simplex/SimplexTimer.h
    presolve/ICrashX.h
    presolve/HAggregator.h
    presolve/HighsLpPropagator.h
    presolve/HighsPostsolveStack.h
    presolve/HighsSymmetry.h
    presolve/HPreData.h
    presolve/HPresolve.h
    presolve/PresolveAnalysis.h
    presolve/PresolveComponent.h
    presolve/Presolve.h
    presolve/PresolveUtils.h
    test/DevKkt.h
    test/KktCh2.h
    util/FactorTimer.h
    util/HFactor.h
    util/HFactorConst.h
    util/HFactorDebug.h
    util/HighsCDouble.h
    util/HighsComponent.h
    util/HighsDataStack.h
    util/HighsDisjointSets.h
    util/HighsHash.h
    util/HighsInt.h
    util/HighsIntegers.h
    util/HighsLinearSumBounds.h
    util/HighsMatrixPic.h
    util/HighsMatrixSlice.h
    util/HighsMatrixUtils.h
    util/HighsRandom.h
    util/HighsRbTree.h
    util/HighsSort.h
    util/HighsSparseMatrix.h
    util/HighsSparseVectorSum.h
    util/HighsSplay.h
    util/HighsTimer.h
    util/HighsUtils.h
    util/HSet.h
    util/HVector.h
    util/HVectorBase.h
    util/stringutil.h
    Highs.h
    interfaces/highs_c_api.h
)

if(IPX_ON)
    set(headers_fast_build_ ${headers_fast_build_} ipm/IpxWrapper.h ${basiclu_headers}
        ${ipx_headers})
else()
    set(headers_fast_build_ ${headers_fast_build_} ipm/IpxWrapperEmpty.h )
endif()

#set_target_properties(libhighs PROPERTIES PUBLIC_HEADER "src/Highs.h;src/lp_data/HighsLp.h;src/lp_data/HighsLpSolverObject.h")

# set the install rpath to the installed destination
set_target_properties(libhighs PROPERTIES INSTALL_RPATH
    "${CMAKE_INSTALL_PREFIX}/lib")

# install the header files of highs
foreach ( file ${headers_fast_build_} )
    get_filename_component( dir ${file} DIRECTORY )
    install( FILES ${file} DESTINATION include/${dir} )
endforeach()
install(FILES ${HIGHS_BINARY_DIR}/HConfig.h DESTINATION include)
install(FILES ${HIGHS_BINARY_DIR}/libhighs_export.h DESTINATION include)


# target_compile_options(libhighs PRIVATE "-Wall")
# target_compile_options(libhighs PRIVATE "-Wunused")

target_include_directories(libhighs PUBLIC ipm/ipx/src
    ipm/ipx/include ipm/basiclu/src ipm/basiclu/include)

if (IPX_ON)
    target_sources(libhighs PRIVATE ${basiclu_sources} ${ipx_sources} ipm/IpxWrapper.cpp)

    if (UNIX)
        target_compile_options(libhighs PRIVATE "-Wno-return-type" "-Wno-switch")
        target_compile_options(libhighs PRIVATE "-Wno-unused-variable")
        target_compile_options(libhighs PRIVATE "-Wno-unused-const-variable")
        target_compile_options(libhighs PRIVATE "-Wno-sign-compare")
    endif()

endif()

    set_target_properties(libhighs PROPERTIES INSTALL_RPATH
        "${CMAKE_INSTALL_PREFIX}/lib")

endif()

if(FORTRAN_FOUND)
    set(fortransources interfaces/highs_fortran_api.f90)
    set(CMAKE_Fortran_MODULE_DIRECTORY ${HIGHS_BINARY_DIR}/modules)
    add_library(FortranHighs interfaces/highs_fortran_api.f90)
    target_link_libraries(FortranHighs PUBLIC libhighs)
    install(TARGETS FortranHighs
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
        INCLUDES DESTINATION include
        MODULES DESTINATION modules)
    install(FILES ${HIGHS_BINARY_DIR}/modules/highs_fortran_api.mod DESTINATION include/fortran)
    set_target_properties(FortranHighs PROPERTIES INSTALL_RPATH
        "${CMAKE_INSTALL_PREFIX}/lib")
endif(FORTRAN_FOUND)

if(CSHARP_FOUND)
    message(STATUS "CSharp supported")
    set(csharpsources
    interfaces/highs_csharp_api.cs)
    add_library(HighsCsharp interfaces/highs_csharp_api.cs)
    target_compile_options(HighsCsharp PUBLIC "/unsafe")
    add_executable(csharpexample ../examples/call_highs_from_csharp.cs)
    target_compile_options(csharpexample PUBLIC "/unsafe")
    target_link_libraries(csharpexample PUBLIC HighsCsharp)
else()
    message(STATUS "No CSharp support")
endif()

find_package(Threads REQUIRED)
target_link_libraries(libhighs Threads::Threads)
