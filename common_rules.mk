OBJDIR=${BUILDDIR}/objs
LIBDIR=${BUILDDIR}/libs
BINDIR=${BUILDDIR}/bins

${OBJDIR}/%.o:	%.c
	mkdir -p $(@D)
	${CC} -o $@ ${CFLAGS} -c $<

${OBJDIR}/%.o:	%.cpp
	mkdir -p $(@D)
	${XX} -o $@ ${CXXFLAGS} -c $<

${OBJDIR}/%.o:	%.cc
	mkdir -p $(@D)
	${XX} -o $@ ${CXXFLAGS} -c $<

${OBJDIR}/%.o:	%.cu
	mkdir -p $(@D)
	${NVCC} -o $@ ${NVCC_CFLAGS} -c $<
