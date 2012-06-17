# @author Gorjan Petrovski mogi57@gmail.com
# Modified from the excellent script and patches of Vlatko Kosturjak - kost@linux.hr

# edit line below if you have NDK to reflect the path where NDK is installed
NDK=~/android-ndk-r8
NDKDEST=/tmp/ndk
NDKPLATFORM=android-5
ANDROIDDEST=/data/local/nmap

OPENSSLOPT=
# uncomment if you want openssl support and you have compiled OpenSSL already
OPENSSLOPT="--with-openssl=$(CURDIR)/openssl"

NDKCP=$(NDK)/build/tools/make-standalone-toolchain.sh --platform=$(NDKPLATFORM) --install-dir=$(NDKDEST)

all: | checklibs cpndk patch build pack
	@echo "Nmap for Android successfully built"

#check whether the user has copied the libs
checklibs: libssl.a libcrypto.a libdl.a
	@echo "Libraries found!"

cpndk:
	$(NDKCP) && cp $(CURDIR)/*.a $(NDKDEST)/arm-linux-androideabi/lib

patch:
	-cd .. && patch -N -p1 < android/patches.diff

unpatch:
	-cd .. && patch -R -p1 < android/patches.diff

build: | configure compile
	@echo "Type 'build' successfuly built"

configure:
	cd .. && PATH=$(NDKDEST)/bin:$(PATH) LUA_CFLAGS="-DLUA_USE_POSIX" LDFLAGS="-static" ac_cv_linux_vers=2 CC=arm-linux-androideabi-gcc CXX=arm-linux-androideabi-g++ LD=arm-linux-androideabi-ld RANLIB=arm-linux-androideabi-ranlib AR=arm-linux-androideabi-ar ./configure --host=arm-linux-androideabi --without-zenmap --without-nping --without-ncat --without-ndiff --with-liblua=included --with-libpcap=internal --with-pcap=linux --enable-static --prefix=$(ANDROIDDEST) $(OPENSSLOPT)

compile:
	cd .. && PATH=$(NDKDEST)/bin:$(PATH) make

clean: unpatch
	rm -rf $(NDKDEST)
	rm -rf nmap

pack: 
	mkdir -p nmap/share/nmap
	mkdir nmap/bin
	cd .. && cp nmap android/nmap/bin
	cd .. && cp -a nmap-mac-prefixes nmap-os-db nmap-payloads nmap-protocols nmap-rpc nmap-service-probes nmap-services nselib nse_main.lua scripts -t android/nmap/share/nmap
	
