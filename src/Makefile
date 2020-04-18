include ${TOPDIR}/common_rules.mk

all_objs=$(patsubst %.cpp, ${OBJDIR}/%.o, $(wildcard *.cpp))

all_libs+=${LIBDIR}/libsrc.a

${LIBDIR}/libsrc.a: ${all_objs}
	mkdir -p ${OBJDIR}
	mkdir -p ${LIBDIR}
	${AR} $@ ${all_objs}

all: build

build: ${all_libs} 


clean: 
	${RM} ${all_libs} ${all_objs}
