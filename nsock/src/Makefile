NSOCK_VERSION = 0.02
prefix = /sdcard/opt/nmap-5.61TEST4
exec_prefix = ${prefix}
bindir = ${exec_prefix}/bin
sbindir = ${exec_prefix}/sbin
mandir = ${datarootdir}/man
srcdir = .
datarootdir = ${prefix}/share

CC = arm-linux-androideabi-gcc
AR = ar
RANLIB = arm-linux-androideabi-ranlib
CCOPT = 
DEFS = -DHAVE_CONFIG_H -DNSOCK_VERSION=\"$(NSOCK_VERSION)\"
# With GCC, add extra security checks to source code.
DEFS += -D_FORTIFY_SOURCE=2
INCLS = -I../include -I../../libpcap
CFLAGS = -g -O2 -Wall  $(CCOPT)
# CFLAGS = -g -Wall $(DEFS) $(INCLS)
CPPFLAGS =  -I/home/mogi/nmap-cc/nmap-5.61TEST4/openssl/include -I../../nbase $(DEFS) $(INCLS)
STATIC = 
SHTOOL = ./shtool
INSTALL = $(SHTOOL) install 
MAKEDEPEND = @MAKEDEPEND@
RPMTDIR=$(HOME)/rpmdir
NBASEDIR=../../nbase

TARGET = libnsock.a

SRCS = error.c filespace.c gh_list.c nsock_connect.c nsock_core.c nsock_iod.c nsock_read.c nsock_timers.c nsock_write.c nsock_ssl.c nsock_event.c nsock_pool.c netutils.c nsock_pcap.c 

OBJS = error.o filespace.o gh_list.o nsock_connect.o nsock_core.o nsock_iod.o nsock_read.o nsock_timers.o nsock_write.o nsock_ssl.o nsock_event.o nsock_pool.o netutils.o nsock_pcap.o 

DEPS = error.h filespace.h gh_list.h nsock_internal.h netutils.h nsock_pcap.h ../include/nsock.h $(NBASEDIR)/libnbase.a

.c.o:
	$(CC) -c $(CPPFLAGS) $(CFLAGS) $< -o $@

all: $(TARGET) 

$(TARGET): $(DEPS) $(OBJS)
	rm -f $@
	$(AR) cr $@ $(OBJS)
	$(RANLIB) $@

$(NBASEDIR)/libnbase.a: $(NBASEDIR)/Makefile
	cd $(NBASEDIR) && $(MAKE)

clean:
	rm -f $(OBJS) $(TARGET) makefile.dep

distclean: clean
	rm -f Makefile config.log config.status nsock_config.h

depend:
	$(MAKEDEPEND) $(INCLS) -s "# DO NOT DELETE" -- $(DEFS) -- $(SRCS)

${srcdir}/configure: configure.ac 
	cd ${srcdir} && autoconf

# autoheader might not change config.h.in, so touch a stamp file.
${srcdir}/config.h.in: stamp-h.in
${srcdir}/stamp-h.in: configure.ac acconfig.h \
	config.h.top config.h.bot
	cd ${srcdir} && autoheader
	echo timestamp > ${srcdir}/stamp-h.in

config.h: stamp-h
stamp-h: config.h.in config.status
	./config.status

Makefile: Makefile.in config.status
	./config.status

config.status: configure
	./config.status --recheck

makefile.dep:
	$(CC) -MM $(CPPFLAGS) $(SRCS) > $@
include makefile.dep
