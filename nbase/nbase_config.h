/* nbase_config.h.  Generated from nbase_config.h.in by configure.  */

/***************************************************************************
 * nbase_config.h.in -- Autoconf uses this template, combined with the     *
 * configure script knowledge about system capabilities, to build the      *
 * nbase_config.h file that lets nbase (and libraries that call it) better *
 * understand system particulars.                                          *
 *                                                                         *
 ***********************IMPORTANT NMAP LICENSE TERMS************************
 *                                                                         *
 * The Nmap Security Scanner is (C) 1996-2011 Insecure.Com LLC. Nmap is    *
 * also a registered trademark of Insecure.Com LLC.  This program is free  *
 * software; you may redistribute and/or modify it under the terms of the  *
 * GNU General Public License as published by the Free Software            *
 * Foundation; Version 2 with the clarifications and exceptions described  *
 * below.  This guarantees your right to use, modify, and redistribute     *
 * this software under certain conditions.  If you wish to embed Nmap      *
 * technology into proprietary software, we sell alternative licenses      *
 * (contact sales@insecure.com).  Dozens of software vendors already       *
 * license Nmap technology such as host discovery, port scanning, OS       *
 * detection, and version detection.                                       *
 *                                                                         *
 * Note that the GPL places important restrictions on "derived works", yet *
 * it does not provide a detailed definition of that term.  To avoid       *
 * misunderstandings, we consider an application to constitute a           *
 * "derivative work" for the purpose of this license if it does any of the *
 * following:                                                              *
 * o Integrates source code from Nmap                                      *
 * o Reads or includes Nmap copyrighted data files, such as                *
 *   nmap-os-db or nmap-service-probes.                                    *
 * o Executes Nmap and parses the results (as opposed to typical shell or  *
 *   execution-menu apps, which simply display raw Nmap output and so are  *
 *   not derivative works.)                                                *
 * o Integrates/includes/aggregates Nmap into a proprietary executable     *
 *   installer, such as those produced by InstallShield.                   *
 * o Links to a library or executes a program that does any of the above   *
 *                                                                         *
 * The term "Nmap" should be taken to also include any portions or derived *
 * works of Nmap.  This list is not exclusive, but is meant to clarify our *
 * interpretation of derived works with some common examples.  Our         *
 * interpretation applies only to Nmap--we don't speak for other people's  *
 * GPL works.                                                              *
 *                                                                         *
 * If you have any questions about the GPL licensing restrictions on using *
 * Nmap in non-GPL works, we would be happy to help.  As mentioned above,  *
 * we also offer alternative license to integrate Nmap into proprietary    *
 * applications and appliances.  These contracts have been sold to dozens  *
 * of software vendors, and generally include a perpetual license as well  *
 * as providing for priority support and updates as well as helping to     *
 * fund the continued development of Nmap technology.  Please email        *
 * sales@insecure.com for further information.                             *
 *                                                                         *
 * As a special exception to the GPL terms, Insecure.Com LLC grants        *
 * permission to link the code of this program with any version of the     *
 * OpenSSL library which is distributed under a license identical to that  *
 * listed in the included docs/licenses/OpenSSL.txt file, and distribute   *
 * linked combinations including the two. You must obey the GNU GPL in all *
 * respects for all of the code used other than OpenSSL.  If you modify    *
 * this file, you may extend this exception to your version of the file,   *
 * but you are not obligated to do so.                                     *
 *                                                                         *
 * If you received these files with a written license agreement or         *
 * contract stating terms other than the terms above, then that            *
 * alternative license agreement takes precedence over these comments.     *
 *                                                                         *
 * Source is provided to this software because we believe users have a     *
 * right to know exactly what a program is going to do before they run it. *
 * This also allows you to audit the software for security holes (none     *
 * have been found so far).                                                *
 *                                                                         *
 * Source code also allows you to port Nmap to new platforms, fix bugs,    *
 * and add new features.  You are highly encouraged to send your changes   *
 * to nmap-dev@insecure.org for possible incorporation into the main       *
 * distribution.  By sending these changes to Fyodor or one of the         *
 * Insecure.Org development mailing lists, it is assumed that you are      *
 * offering the Nmap Project (Insecure.Com LLC) the unlimited,             *
 * non-exclusive right to reuse, modify, and relicense the code.  Nmap     *
 * will always be available Open Source, but this is important because the *
 * inability to relicense code has caused devastating problems for other   *
 * Free Software projects (such as KDE and NASM).  We also occasionally    *
 * relicense the code to third parties as discussed above.  If you wish to *
 * specify special license conditions of your contributions, just say so   *
 * when you send them.                                                     *
 *                                                                         *
 * This program is distributed in the hope that it will be useful, but     *
 * WITHOUT ANY WARRANTY; without even the implied warranty of              *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU       *
 * General Public License v2.0 for more details at                         *
 * http://www.gnu.org/licenses/gpl-2.0.html , or in the COPYING file       *
 * included with Nmap.                                                     *
 *                                                                         *
 ***************************************************************************/

/* $Id: nbase_config.h.in 22744 2011-03-26 04:33:12Z david $ */
#ifndef NBASE_CONFIG_H
#define NBASE_CONFIG_H

#define HAVE_USLEEP 1

#define HAVE_NANOSLEEP 1

/* #undef HAVE_STRUCT_ICMP */

/* #undef HAVE_IP_IP_SUM */

/* #undef inline */

#define STDC_HEADERS 1

#define HAVE_STRING_H 1

#define HAVE_NETDB_H 1

#define HAVE_GETOPT_H 1

#define HAVE_UNISTD_H 1

#define HAVE_STRINGS_H 1

/* #undef HAVE_BSTRING_H */

/* #undef WORDS_BIGENDIAN */

#define HAVE_MEMORY_H 1

/* #undef HAVE_LIBIBERTY_H */

#define HAVE_FCNTL_H 1

#define HAVE_ERRNO_H 1

/* both bzero() and memcpy() are used in the source */
/* #undef HAVE_BZERO */
/* #undef HAVE_MEMCPY */
#define HAVE_STRERROR 1

#define HAVE_SYS_PARAM_H 1

/* #undef HAVE_SYS_SOCKIO_H */

#define HAVE_SYS_SOCKET_H 1

#define HAVE_SYS_WAIT_H 1

#define HAVE_NET_IF_H 1

/* #undef BSD_NETWORKING */

#define HAVE_STRCASESTR 1

#define HAVE_STRCASECMP 1

#define HAVE_STRNCASECMP 1

#define HAVE_GETTIMEOFDAY 1

#define HAVE_SLEEP 1

/* #undef HAVE_SIGNAL */

#define HAVE_GETOPT 1

#define HAVE_GETOPT_LONG_ONLY 1

/* #undef HAVE_SOCKADDR_SA_LEN */

/* #undef HAVE_NETINET_IF_ETHER_H */

#define HAVE_NETINET_IN_H 1

#define HAVE_SYS_TIME_H 1

/* #undef PWD_H */

#define HAVE_ARPA_INET_H 1

#define HAVE_SYS_RESOURCE_H 1

#define HAVE_INTTYPES_H 1

/* #undef HAVE_MACH_O_DYLD_H */

/* #undef HAVE_RPC_TYPES_H */

#define HAVE_SYS_STAT_H 1

/* #undef SPRINTF_RETURNS_STRING */

/* #undef STUPID_SOLARIS_CHECKSUM_BUG */

/* IPv6 stuff */
#define HAVE_IPV6 1
#define HAVE_AF_INET6 1
#define HAVE_SOCKADDR_IN6 1
#define HAVE_SOCKADDR_STORAGE 1
#define HAVE_GETADDRINFO 1
#define HAVE_GAI_STRERROR 1
#define HAVE_GETNAMEINFO 1
#define HAVE_INET_NTOP 1
#define HAVE_INET_PTON 1

/* #undef int8_t */
/* #undef int16_t */
/* #undef int32_t */
/* #undef int64_t */
/* #undef uint8_t */
/* #undef uint16_t */
/* #undef uint32_t */
/* #undef uint64_t */

#define HAVE_SNPRINTF 1
/* #undef HAVE_VASNPRINTF */
#define HAVE_ASPRINTF 1
#define HAVE_VASPRINTF 1
/* #undef HAVE_VFPRINTF */
#define HAVE_VSNPRINTF 1
/* #undef NEED_SNPRINTF_PROTO */
/* #undef NEED_VSNPRINTF_PROTO */

/* define if your compiler has __attribute__ */
#define HAVE___ATTRIBUTE__ 1

#define HAVE_OPENSSL 1

#define HAVE_PROC_SELF_EXE 1

/* #undef LINUX */
/* #undef FREEBSD */
/* #undef OPENBSD */
/* #undef SOLARIS */
/* #undef SUNOS */
/* #undef BSDI */
/* #undef IRIX */
/* #undef HPUX */
/* #undef NETBSD */

#endif /* NBASE_CONFIG_H */
