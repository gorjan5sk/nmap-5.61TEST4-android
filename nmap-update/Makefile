top_srcdir = .
srcdir = .
prefix = /sdcard/opt/nmap
exec_prefix = ${prefix}
bindir = ${exec_prefix}/bin
mandir = ${prefix}/share/man

CC = arm-linux-androideabi-gcc
CFLAGS = -g -O2
CPPFLAGS =   -D_REENTRANT -D_GNU_SOURCE -I/usr/include/apr-1  $(DEFS) -I$(NBASEDIR)
LDFLAGS = -static
LIBS =  $(NBASELIB)
DEFS = -DHAVE_CONFIG_H -D_FORTIFY_SOURCE=2

INSTALL = /usr/bin/install -c
STRIP = /tmp/ndk/bin/arm-linux-androideabi-strip
SHTOOL = ../shtool

DESTDIR =

APR_CONFIG = apr-1-config

SOURCES = nmap-update svn_auth
C_FILES = $(addsuffix .c,$(SOURCES))
O_FILES = $(addsuffix .o,$(SOURCES))

NBASEDIR = ../nbase
NBASELIB = $(NBASEDIR)/libnbase.a

all: nmap-update

nmap-update: $(O_FILES)
	$(CC) -o $@ $(CFLAGS) $(LDFLAGS) $^ $(LIBS)

%.o: %.c
	$(CC) -c -o $@ $(CPPFLAGS) $(CFLAGS) $<

$(NBASELIB):
	cd $(NBASEDIR) && $(MAKE)

install: nmap-update
	$(SHTOOL) mkdir -f -p -m 755 $(DESTDIR)$(bindir) $(DESTDIR)$(mandir)/man1
	$(INSTALL) -c -m 755 nmap-update $(DESTDIR)$(bindir)
	$(STRIP) -x $(DESTDIR)$(bindir)/nmap-update
	$(INSTALL) -c -m 644 ../docs/nmap-update.1 $(DESTDIR)$(mandir)/man1/

uninstall:
	$(RM) -f $(DESTDIR)$(bindir)/nmap-update

clean:
	rm -f nmap-update *.o makefile.dep

distclean: clean
	rm -f Makefile

Makefile: Makefile.in
	./config.status

makefile.dep:
	$(CC) -MM $(CPPFLAGS) $(C_FILES) > $@
include makefile.dep

.PHONY: all clean
