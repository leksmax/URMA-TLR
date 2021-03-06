##############################################################################
# Copyright (c) 2016 Digi International Inc., All Rights Reserved
#
# This software contains proprietary and confidential information of Digi
# International Inc.  By accepting transfer of this copy, Recipient agrees
# to retain this software in confidence, to prevent disclosure to others,
# and to make no use of this software other than that for which it was
# delivered.  This is an unpublished copyrighted work of Digi International
# Inc.  Except as permitted by federal law, 17 USC 117, copying is strictly
# prohibited.
#
# Restricted Rights Legend
#
# Use, duplication, or disclosure by the Government is subject to
# restrictions set forth in sub-paragraph (c)(1)(ii) of The Rights in
# Technical Data and Computer Software clause at DFARS 252.227-7031 or
# subparagraphs (c)(1) and (2) of the Commercial Computer Software -
# Restricted Rights at 48 CFR 52.227-19, as applicable.
#
# Digi International Inc. 11001 Bren Road East, Minnetonka, MN 55343
#
##############################################################################

TARGET ?= mips-linux-uclibc
KERNEL_DIR ?= $(SDK_BASE)/linux/src/

include $(TLR_BASE)/build/rds00008.mk

INCPATH =-I. -I$(TLR_BASE)/include -I$(INSTALL_ROOT)/usr/include -I$(KERNEL_DIR)/include
INCPATH +=-I$(ROOTFS_BASE)/src/include
CFLAGS += $(INCPATH)
//CFLAGS+=-DFAILOVER_DEBUG=1
//CFLAGS+=-DIFMANAGER_DEBUG=1

LFLAGS+=$(LIBPATH) -lmessage -lconfig_mgr -luci -lubox -lpthread -ldigiutils -lm -ljson-c -lcrypto

OBJS = probing.o \
		ifmanager.o \
		ifmessage.o \
		ifhandler.o \
		ifmconfig.o \
		failover.o \
		add_route.o \
		route.o \
		failover_show.o \
		failover_config.o \
		ifmwan.o \
		dns_handle.o

EXE = ifmanager

all: $(EXE)

$(EXE): $(OBJS)
	$(CC) -o $@ $^ $(LFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<
%.o: %.c %.h
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f *.o $(EXE)

install:
	-mkdir -p $(INSTALL_ROOT)/usr/bin
	install -m 0777 $(EXE) $(INSTALL_ROOT)/usr/bin

.PHONY: all clean install

