set(BACKEND_SRCS
  gimple-match.cc generic-match.cc insn-attrtab.cc insn-automata.cc insn-dfatab.cc insn-emit.cc insn-extract.cc insn-latencytab.cc insn-modes.cc insn-opinit.cc insn-output.cc insn-peep.cc insn-preds.cc insn-recog.cc insn-enums.cc ggc-page.cc adjust-alignment.cc alias.cc alloc-pool.cc auto-inc-dec.cc auto-profile.cc bb-reorder.cc bitmap.cc builtins.cc caller-save.cc calls.cc ccmp.cc cfg.cc cfganal.cc cfgbuild.cc cfgcleanup.cc cfgexpand.cc cfghooks.cc cfgloop.cc cfgloopanal.cc cfgloopmanip.cc cfgrtl.cc ctfc.cc ctfout.cc btfout.cc symtab.cc symtab-thunks.cc symtab-clones.cc cgraph.cc cgraphbuild.cc cgraphunit.cc cgraphclones.cc combine.cc combine-stack-adj.cc compare-elim.cc context.cc convert.cc coroutine-passes.cc coverage.cc cprop.cc cse.cc cselib.cc data-streamer.cc data-streamer-in.cc data-streamer-out.cc dbxout.cc dbgcnt.cc dce.cc ddg.cc debug.cc df-core.cc df-problems.cc df-scan.cc dfp.cc digraph.cc dojump.cc dominance.cc domwalk.cc double-int.cc dse.cc dumpfile.cc dwarf2asm.cc dwarf2cfi.cc dwarf2ctf.cc dwarf2out.cc early-remat.cc emit-rtl.cc et-forest.cc except.cc explow.cc expmed.cc expr.cc fibonacci_heap.cc file-prefix-map.cc final.cc fixed-value.cc fold-const.cc fold-const-call.cc function.cc function-abi.cc function-tests.cc fwprop.cc gcc-rich-location.cc gcse.cc gcse-common.cc ggc-common.cc ggc-tests.cc gimple.cc gimple-array-bounds.cc gimple-builder.cc gimple-expr.cc gimple-if-to-switch.cc gimple-iterator.cc gimple-fold.cc gimple-harden-conditionals.cc gimple-laddress.cc gimple-loop-interchange.cc gimple-loop-jam.cc gimple-loop-versioning.cc gimple-low.cc gimple-predicate-analysis.cc gimple-pretty-print.cc gimple-range.cc gimple-range-cache.cc gimple-range-edge.cc gimple-range-fold.cc gimple-range-gori.cc gimple-range-infer.cc gimple-range-trace.cc gimple-ssa-backprop.cc gimple-ssa-evrp.cc gimple-ssa-evrp-analyze.cc gimple-ssa-isolate-paths.cc gimple-ssa-nonnull-compare.cc gimple-ssa-split-paths.cc gimple-ssa-store-merging.cc gimple-ssa-strength-reduction.cc gimple-ssa-sprintf.cc gimple-ssa-warn-access.cc gimple-ssa-warn-alloca.cc gimple-ssa-warn-restrict.cc gimple-streamer-in.cc gimple-streamer-out.cc gimple-walk.cc gimple-warn-recursion.cc gimplify.cc gimplify-me.cc godump.cc graph.cc graphds.cc graphviz.cc graphite.cc graphite-isl-ast-to-gimple.cc graphite-dependences.cc graphite-optimize-isl.cc graphite-poly.cc graphite-scop-detection.cc graphite-sese-to-poly.cc gtype-desc.cc haifa-sched.cc hash-map-tests.cc hash-set-tests.cc hw-doloop.cc hwint.cc ifcvt.cc ree.cc inchash.cc incpath.cc init-regs.cc internal-fn.cc ipa-cp.cc ipa-sra.cc ipa-devirt.cc ipa-fnsummary.cc ipa-polymorphic-call.cc ipa-split.cc ipa-inline.cc ipa-comdats.cc ipa-free-lang-data.cc ipa-visibility.cc ipa-inline-analysis.cc ipa-inline-transform.cc ipa-modref.cc ipa-modref-tree.cc ipa-predicate.cc ipa-profile.cc ipa-prop.cc ipa-param-manipulation.cc ipa-pure-const.cc ipa-icf.cc ipa-icf-gimple.cc ipa-reference.cc ipa-ref.cc ipa-utils.cc ipa.cc ira.cc ira-build.cc ira-costs.cc ira-conflicts.cc ira-color.cc ira-emit.cc ira-lives.cc jump.cc langhooks.cc lcm.cc lists.cc loop-doloop.cc loop-init.cc loop-invariant.cc loop-iv.cc loop-unroll.cc lower-subreg.cc lra.cc lra-assigns.cc lra-coalesce.cc lra-constraints.cc lra-eliminations.cc lra-lives.cc lra-remat.cc lra-spills.cc lto-cgraph.cc lto-streamer.cc lto-streamer-in.cc lto-streamer-out.cc lto-section-in.cc lto-section-out.cc lto-opts.cc lto-compress.cc mcf.cc mode-switching.cc modulo-sched.cc multiple_target.cc omp-offload.cc omp-expand.cc omp-general.cc omp-low.cc omp-oacc-kernels-decompose.cc omp-oacc-neuter-broadcast.cc omp-simd-clone.cc opt-problem.cc optabs.cc optabs-libfuncs.cc optabs-query.cc optabs-tree.cc optinfo.cc optinfo-emit-json.cc options-save.cc opts-global.cc ordered-hash-map-tests.cc passes.cc plugin.cc pointer-query.cc postreload-gcse.cc postreload.cc predict.cc print-rtl.cc print-rtl-function.cc print-tree.cc profile.cc profile-count.cc range.cc range-op.cc read-md.cc read-rtl.cc read-rtl-function.cc real.cc realmpfr.cc recog.cc reg-stack.cc regcprop.cc reginfo.cc regrename.cc regstat.cc reload.cc reload1.cc reorg.cc resource.cc rtl-error.cc rtl-ssa/accesses.cc rtl-ssa/blocks.cc rtl-ssa/changes.cc rtl-ssa/functions.cc rtl-ssa/insns.cc rtl-tests.cc rtl.cc rtlhash.cc rtlanal.cc rtlhooks.cc rtx-vector-builder.cc run-rtl-passes.cc sched-deps.cc sched-ebb.cc sched-rgn.cc sel-sched-ir.cc sel-sched-dump.cc sel-sched.cc selftest-rtl.cc selftest-run-tests.cc sese.cc shrink-wrap.cc simplify-rtx.cc sparseset.cc spellcheck.cc spellcheck-tree.cc splay-tree-utils.cc sreal.cc stack-ptr-mod.cc statistics.cc stmt.cc stor-layout.cc store-motion.cc streamer-hooks.cc stringpool.cc substring-locations.cc target-globals.cc targhooks.cc timevar.cc toplev.cc tracer.cc trans-mem.cc tree-affine.cc asan.cc tsan.cc ubsan.cc sanopt.cc sancov.cc tree-call-cdce.cc tree-cfg.cc tree-cfgcleanup.cc tree-chrec.cc tree-complex.cc tree-data-ref.cc tree-dfa.cc tree-diagnostic.cc tree-diagnostic-client-data-hooks.cc tree-diagnostic-path.cc tree-dump.cc tree-eh.cc tree-emutls.cc tree-if-conv.cc tree-inline.cc tree-into-ssa.cc tree-iterator.cc tree-logical-location.cc tree-loop-distribution.cc tree-nested.cc tree-nrv.cc tree-object-size.cc tree-outof-ssa.cc tree-parloops.cc tree-phinodes.cc tree-predcom.cc tree-pretty-print.cc tree-profile.cc tree-scalar-evolution.cc tree-sra.cc tree-switch-conversion.cc tree-ssa-address.cc tree-ssa-alias.cc tree-ssa-ccp.cc tree-ssa-coalesce.cc tree-ssa-copy.cc tree-ssa-dce.cc tree-ssa-dom.cc tree-ssa-dse.cc tree-ssa-forwprop.cc tree-ssa-ifcombine.cc tree-ssa-live.cc tree-ssa-loop-ch.cc tree-ssa-loop-im.cc tree-ssa-loop-ivcanon.cc tree-ssa-loop-ivopts.cc tree-ssa-loop-manip.cc tree-ssa-loop-niter.cc tree-ssa-loop-prefetch.cc tree-ssa-loop-split.cc tree-ssa-loop-unswitch.cc tree-ssa-loop.cc tree-ssa-math-opts.cc tree-ssa-operands.cc gimple-range-path.cc tree-ssa-phiopt.cc tree-ssa-phiprop.cc tree-ssa-pre.cc tree-ssa-propagate.cc tree-ssa-reassoc.cc tree-ssa-sccvn.cc tree-ssa-scopedtables.cc tree-ssa-sink.cc tree-ssa-strlen.cc tree-ssa-structalias.cc tree-ssa-tail-merge.cc tree-ssa-ter.cc tree-ssa-threadbackward.cc tree-ssa-threadedge.cc tree-ssa-threadupdate.cc tree-ssa-uncprop.cc tree-ssa-uninit.cc tree-ssa.cc tree-ssanames.cc tree-stdarg.cc tree-streamer.cc tree-streamer-in.cc tree-streamer-out.cc tree-tailcall.cc tree-vect-generic.cc gimple-isel.cc tree-vect-patterns.cc tree-vect-data-refs.cc tree-vect-stmts.cc tree-vect-loop.cc tree-vect-loop-manip.cc tree-vect-slp.cc tree-vect-slp-patterns.cc tree-vectorizer.cc tree-vector-builder.cc tree-vrp.cc tree.cc tristate.cc typed-splay-tree.cc valtrack.cc value-pointer-equiv.cc value-query.cc value-range.cc value-range-equiv.cc value-relation.cc value-prof.cc var-tracking.cc varasm.cc varpool.cc vec-perm-indices.cc vmsdbgout.cc vr-values.cc vtable-verify.cc warning-control.cc web.cc wide-int.cc wide-int-print.cc xcoffout.cc analyzer/analysis-plan.cc analyzer/analyzer.cc analyzer/analyzer-logging.cc analyzer/analyzer-pass.cc analyzer/analyzer-selftests.cc analyzer/bar-chart.cc analyzer/call-info.cc analyzer/call-string.cc analyzer/checker-path.cc analyzer/complexity.cc analyzer/constraint-manager.cc analyzer/diagnostic-manager.cc analyzer/engine.cc analyzer/feasible-graph.cc analyzer/function-set.cc analyzer/pending-diagnostic.cc analyzer/program-point.cc analyzer/program-state.cc analyzer/region.cc analyzer/region-model.cc analyzer/region-model-asm.cc analyzer/region-model-impl-calls.cc analyzer/region-model-manager.cc analyzer/region-model-reachability.cc analyzer/sm.cc analyzer/sm-file.cc analyzer/sm-malloc.cc analyzer/sm-pattern-test.cc analyzer/sm-sensitive.cc analyzer/sm-signal.cc analyzer/sm-taint.cc analyzer/state-purge.cc analyzer/store.cc analyzer/supergraph.cc analyzer/svalue.cc analyzer/trimmed-graph.cc analyzer/varargs.cc

  patch.cc
  config/i386/i386.cc
  config/i386/x86-tune-sched.cc
  config/i386/x86-tune-sched-bd.cc
  config/i386/x86-tune-sched-atom.cc
  config/i386/x86-tune-sched-core.cc
  config/i386/i386-options.cc
  config/i386/i386-builtins.cc
  config/i386/i386-expand.cc
  config/i386/i386-features.cc
  config/linux.cc config/i386/gnu-property.cc config/host-linux.cc
  )
set(BACKEND_CXXFLAGS
  ${LIBGFORTRAN_COMMON_CXXFLAGS}
  -w -DTARGET_MACHINE=\"x86_64-pc-linux-gnu\"
  -DTARGET_NAME=\"x86_64-pc-linux-gnu\"
  -fno-common -DHAVE_CONFIG_H -UIN_GCC_FRONTEND
  )
add_library(libgfortranbackend SHARED ${BACKEND_SRCS})
target_compile_options(libgfortranbackend PRIVATE ${BACKEND_CXXFLAGS})
target_include_directories(libgfortranbackend BEFORE PRIVATE
  ${LIBGFORTRAN_COMMON_INCDIRS})

set(CPPDEFAULT_SRCS
  cppbuiltin.cc
  cppdefault.cc
  )

set(CPPDEFAULT_CXXFLAGS
  -w -DGCC_INCLUDE_DIR=\"${CMAKE_BINARY_DIR}/usr/lib/gcc/x86_64-pc-linux-gnu/13.0.0/include\"
  -DFIXED_INCLUDE_DIR=\"${CMAKE_BINARY_DIR}/usr/lib/gcc/x86_64-pc-linux-gnu/13.0.0/include-fixed\"
  -DGPLUSPLUS_INCLUDE_DIR=\"${CMAKE_BINARY_DIR}/usr/lib/gcc/x86_64-pc-linux-gnu/13.0.0/../../../../include/c++/13.0.0\"
  -DGPLUSPLUS_INCLUDE_DIR_ADD_SYSROOT=0
  -DGPLUSPLUS_TOOL_INCLUDE_DIR=\"${CMAKE_BINARY_DIR}/usr/lib/gcc/x86_64-pc-linux-gnu/13.0.0/../../../../include/c++/13.0.0/x86_64-pc-linux-gnu\"
  -DGPLUSPLUS_BACKWARD_INCLUDE_DIR=\"${CMAKE_BINARY_DIR}/usr/lib/gcc/x86_64-pc-linux-gnu/13.0.0/../../../../include/c++/13.0.0/backward\"
  -DGPLUSPLUS_LIBCXX_INCLUDE_DIR=\"${CMAKE_BINARY_DIR}/usr/lib/gcc/x86_64-pc-linux-gnu/13.0.0/../../../../libc++_include/c++/13.0.0/v1\"
  -DGPLUSPLUS_LIBCXX_INCLUDE_DIR_ADD_SYSROOT=0
  -DLOCAL_INCLUDE_DIR=\"/usr/local/include\"
  -DCROSS_INCLUDE_DIR=\"${CMAKE_BINARY_DIR}/usr/lib/gcc/x86_64-pc-linux-gnu/13.0.0/../../../../x86_64-pc-linux-gnu/sys-include\"
  -DTOOL_INCLUDE_DIR=\"${CMAKE_BINARY_DIR}/usr/lib/gcc/x86_64-pc-linux-gnu/13.0.0/../../../../x86_64-pc-linux-gnu/include\"
  -DNATIVE_SYSTEM_HEADER_DIR=\"/usr/include\"
  -DPREFIX=\"${CMAKE_BINARY_DIR}/usr/\"
  -DSTANDARD_EXEC_PREFIX=\"${CMAKE_BINARY_DIR}/usr/lib/gcc/\"
  -DBASEVER=\"13.0.0\"
  ${LIBGFORTRAN_COMMON_CXXFLAGS}
  )

add_library(libcppdefault SHARED ${CPPDEFAULT_SRCS})
target_compile_options(libcppdefault PRIVATE ${CPPDEFAULT_CXXFLAGS})
target_include_directories(libcppdefault BEFORE PRIVATE
  ${LIBGFORTRAN_COMMON_INCDIRS})

set(BACKENDATTRIBS_CXXFLAGS
  -DIN_GCC_FRONTEND -DIN_GCC 
  ${LIBGFORTRAN_COMMON_CXXFLAGS}
  )
add_library(libbackendattribs
  SHARED
  attribs.cc)
target_include_directories(libbackendattribs BEFORE PRIVATE
  ${LIBGFORTRAN_COMMON_INCDIRS})
target_compile_options(libbackendattribs PRIVATE ${BACKENDATTRIBS_CXXFLAGS})

target_link_libraries(libgfortranbackend PRIVATE libcppdefault libbackendattribs libgfortran)

add_library(libgfortrancommontarget SHARED
  common/config/i386/i386-common.cc prefix.cc
  opts.cc opts-common.cc options.cc vec.cc hooks.cc common/common-targhooks.cc hash-table.cc file-find.cc spellcheck.cc selftest.cc opt-suggestions.cc
  )
target_compile_options(
  libgfortrancommontarget PRIVATE
  ${CPPDEFAULT_CXXFLAGS}
  )
target_include_directories(libgfortrancommontarget BEFORE PRIVATE
  ${LIBGFORTRAN_COMMON_INCDIRS})

add_library(libgfortrancommon SHARED
  diagnostic-spec.cc diagnostic.cc diagnostic-color.cc diagnostic-format-json.cc diagnostic-format-sarif.cc diagnostic-show-locus.cc edit-context.cc pretty-print.cc intl.cc json.cc sbitmap.cc vec.cc input.cc hash-table.cc ggc-none.cc memory-block.cc selftest.cc selftest-diagnostic.cc sort.cc
  )
target_compile_options(
  libgfortrancommon PRIVATE
  -DLOCALEDIR=\"${CMAKE_BINARY_DIR}/usr/share/locale\"
  ${CPPDEFAULT_CXXFLAGS}
  )
target_include_directories(libgfortrancommon BEFORE PRIVATE
  ${LIBGFORTRAN_COMMON_INCDIRS})

add_library(libgfortranall SHARED
  $<TARGET_OBJECTS:libgfortran>
  $<TARGET_OBJECTS:libgfortranbackend>
  $<TARGET_OBJECTS:libcpp>
  $<TARGET_OBJECTS:libdecnumber>
  $<TARGET_OBJECTS:libbacktrace>
  $<TARGET_OBJECTS:libiberty>
  )
target_link_libraries(libgfortranall
  PUBLIC
  libgfortrancommontarget
  libgfortrancommon
  mpc mpfr gmp dl z)

set(MAIN_SRCS
  main.cc
  )
set(MAIN_CXXFLAGS
  -DIN_GCC_FRONTEND -DIN_GCC 
  ${LIBGFORTRAN_COMMON_CXXFLAGS}
  )
add_wiz_program(
  gfortran
  FILES ${MAIN_SRCS}
  OPTIONS ${MAIN_CXXFLAGS}
  INCLUDES ${LIBGFORTRAN_COMMON_INCDIRS}
  DEPENDS
  libgfortranall
  libcppdefault libbackendattribs
  )

target_link_options(gfortran BEFORE PRIVATE
  ${LIBGFORTRAN_COMMON_CXXFLAGS}
  )
