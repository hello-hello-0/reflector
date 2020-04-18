include ${TOPDIR}/common_rules.mk

TOPTARGETS := all build clean

SUBDIRS := $(wildcard */.)

$(TOPTARGETS): $(SUBDIRS)
$(SUBDIRS):
	$(MAKE) -C $@ $(MAKECMDGOALS) BUILDDIR=${BUILDDIR} TOPDIR=${TOPDIR}

.PHONY: $(TOPTARGETS) $(SUBDIRS) TOPDIR=${TOPDIR}
