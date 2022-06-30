CXXFILES := \
	arith.cc \
	array.cc \
	bbt.cc \
	check.cc \
	class.cc \
	constructor.cc \
	convert.cc \
	cpp.cc \
	data.cc \
	decl.cc \
	dependency.cc \
	dump-parse-tree.cc \
	error.cc \
	expr.cc \
	f95-lang.cc \
	frontend-passes.cc \
	gfortranspec.cc \
	interface.cc \
	intrinsic.cc \
	io.cc \
	iresolve.cc \
	match.cc \
	matchexp.cc \
	misc.cc \
	module.cc \
	openmp.cc \
	options.cc \
	parse.cc \
	primary.cc \
	resolve.cc \
	scanner.cc \
	simplify.cc \
	st.cc \
	symbol.cc \
	target-memory.cc \

# CXXFILES := resolve.cc expr.cc check.cc symbol.cc
#CXXFILES += module.cc array.cc interface.cc match.cc
#CXXFILES += error.cc intrinsic.cc class.cc trans-types.cc
CFILES   :=
CXXOBJS := $(CXXFILES:%.cc=%.o)
COBJS   := $(CFILES:%.cc=%.o)

OBJS    := $(CXXOBJS) $(COBJS)

$(info $(OBJS))
parser: $(OBJS)
	g++ $^ -o $@

CXXFLAGS := -w -c -DIN_GCC_FRONTEND -g -O2
CXXFLAGS += -DIN_GCC -fno-exceptions -fno-rtti -fasynchronous-unwind-tables
CXXFLAGS += -fno-common  -DHAVE_CONFIG_H
CXXFLAGS += -I/home/wierton/disk/gcc-compile/objdir/gcc
CXXFLAGS += -I/home/wierton/disk/gcc-compile/objdir/gcc/fortran
CXXFLAGS += -I/home/wierton/gcc/gcc -I/home/wierton/gcc/gcc/fortran -I/home/wierton/gcc/gcc/../include -I/home/wierton/gcc/gcc/../libcpp/include -I/home/wierton/gcc/gcc/../libcody  -I/home/wierton/gcc/gcc/../libdecnumber -I/home/wierton/gcc/gcc/../libdecnumber/bid -I../libdecnumber -I/home/wierton/gcc/gcc/../libbacktrace

%.o: %.cc
	g++ $(CXXFLAGS) -o $@ $<

clean:
	rm -rf *.o
