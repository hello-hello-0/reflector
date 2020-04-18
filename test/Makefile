include ${TOPDIR}/common_rules.mk

all_objs=$(patsubst %.cpp, ${OBJDIR}/%.o, $(wildcard *.cpp))

all_bins=${BINDIR}/main

main_STATIC_LIBS=${LIBDIR}/libsrc.a

${BINDIR}/main: ${all_objs}
	mkdir -p ${BINDIR}
	${LD} ${all_objs} ${main_STATIC_LIBS} -o $@

all: build

build: ${all_bins}

clean:
	${RM} ${all_bins} ${all_objs}
