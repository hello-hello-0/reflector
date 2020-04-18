include common.mk
include common_rules.mk

.PHONY: all clean

default: src.build 
	
test: test.build

tools: tools.build

all: src test tools

BUILDDIR ?=$(abspath ./build)
ABSBUILDDIR := $(abspath ${BUILDDIR})

TOPDIR := $(abspath .)

src.%:
	mkdir -p ${LIBDIR}
	${MAKE} -C src $* BUILDDIR=${ABSBUILDDIR} TOPDIR=${TOPDIR}

test.build: src.build
	${MAKE} -C test build BUILDDIR=${ABSBUILDDIR} TOPDIR=${TOPDIR}

test.clean: 
	${MAKE} -C test clean BUILDDIR=${ABSBUILDDIR} TOPDIR=${TOPDIR}

tools.build: src.build
	${MAKE} -C tools build BUILDDIR=${ABSBUILDDIR} TOPDIR=${TOPDIR}

tools.clean: 
	${MAKE} -C tools clean BUILDDIR=${ABSBUILDDIR} TOPDIR=${TOPDIR}

TARGETS := src test tools
clean: ${TARGETS:%=%.clean}
	${RM} ${OBJDIR}
	${RM} ${LIBDIR}
	${RM} ${BINDIR}

