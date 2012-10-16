// defaults.h.in
/*

Copyright (C) 1993-2012 John W. Eaton

This file is part of Octave.

Octave is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 3 of the License, or (at your
option) any later version.

Octave is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with Octave; see the file COPYING.  If not, see
<http://www.gnu.org/licenses/>.

*/

#if !defined (octave_defaults_h)
#define octave_defaults_h 1

#include <string>

#include "pathsearch.h"

#ifndef OCTAVE_CANONICAL_HOST_TYPE
#define OCTAVE_CANONICAL_HOST_TYPE "x86_64-unknown-linux-gnu"
#endif

#ifndef OCTAVE_DEFAULT_PAGER
#define OCTAVE_DEFAULT_PAGER "less"
#endif

#ifndef OCTAVE_ARCHLIBDIR
#define OCTAVE_ARCHLIBDIR "/mnt/galaxyTools/tools/oqtans/sw_require/octave-3.6.2_64/libexec/octave/3.6.2/exec/x86_64-unknown-linux-gnu"
#endif

#ifndef OCTAVE_BINDIR
#define OCTAVE_BINDIR "/mnt/galaxyTools/tools/oqtans/sw_require/octave-3.6.2_64/bin"
#endif

#ifndef OCTAVE_DATADIR
#define OCTAVE_DATADIR "/mnt/galaxyTools/tools/oqtans/sw_require/octave-3.6.2_64/share"
#endif

#ifndef OCTAVE_DATAROOTDIR
#define OCTAVE_DATAROOTDIR "/mnt/galaxyTools/tools/oqtans/sw_require/octave-3.6.2_64/share"
#endif

#ifndef OCTAVE_DOC_CACHE_FILE
#define OCTAVE_DOC_CACHE_FILE "/mnt/galaxyTools/tools/oqtans/sw_require/octave-3.6.2_64/share/octave/3.6.2/etc/doc-cache"
#endif

#ifndef OCTAVE_EXEC_PREFIX
#define OCTAVE_EXEC_PREFIX "/mnt/galaxyTools/tools/oqtans/sw_require/octave-3.6.2_64"
#endif

#ifndef OCTAVE_FCNFILEDIR
#define OCTAVE_FCNFILEDIR "/mnt/galaxyTools/tools/oqtans/sw_require/octave-3.6.2_64/share/octave/3.6.2/m"
#endif

#ifndef OCTAVE_IMAGEDIR
#define OCTAVE_IMAGEDIR "/mnt/galaxyTools/tools/oqtans/sw_require/octave-3.6.2_64/share/octave/3.6.2/imagelib"
#endif

#ifndef OCTAVE_INCLUDEDIR
#define OCTAVE_INCLUDEDIR "/mnt/galaxyTools/tools/oqtans/sw_require/octave-3.6.2_64/include"
#endif

#ifndef OCTAVE_INFODIR
#define OCTAVE_INFODIR "/mnt/galaxyTools/tools/oqtans/sw_require/octave-3.6.2_64/share/info"
#endif

#ifndef OCTAVE_INFOFILE
#define OCTAVE_INFOFILE "/mnt/galaxyTools/tools/oqtans/sw_require/octave-3.6.2_64/share/info/octave.info"
#endif

#ifndef OCTAVE_LIBDIR
#define OCTAVE_LIBDIR "/mnt/galaxyTools/tools/oqtans/sw_require/octave-3.6.2_64/lib"
#endif

#ifndef OCTAVE_LIBEXECDIR
#define OCTAVE_LIBEXECDIR "/mnt/galaxyTools/tools/oqtans/sw_require/octave-3.6.2_64/libexec"
#endif

#ifndef OCTAVE_LIBEXECDIR
#define OCTAVE_LIBEXECDIR "/mnt/galaxyTools/tools/oqtans/sw_require/octave-3.6.2_64/libexec"
#endif

#ifndef OCTAVE_LOCALAPIFCNFILEDIR
#define OCTAVE_LOCALAPIFCNFILEDIR "/mnt/galaxyTools/tools/oqtans/sw_require/octave-3.6.2_64/share/octave/site/api-v48+/m"
#endif

#ifndef OCTAVE_LOCALAPIOCTFILEDIR
#define OCTAVE_LOCALAPIOCTFILEDIR "/mnt/galaxyTools/tools/oqtans/sw_require/octave-3.6.2_64/lib/octave/site/oct/api-v48+/x86_64-unknown-linux-gnu"
#endif

#ifndef OCTAVE_LOCALARCHLIBDIR
#define OCTAVE_LOCALARCHLIBDIR "/mnt/galaxyTools/tools/oqtans/sw_require/octave-3.6.2_64/libexec/octave/site/exec/x86_64-unknown-linux-gnu"
#endif

#ifndef OCTAVE_LOCALFCNFILEDIR
#define OCTAVE_LOCALFCNFILEDIR "/mnt/galaxyTools/tools/oqtans/sw_require/octave-3.6.2_64/share/octave/site/m"
#endif

#ifndef OCTAVE_LOCALOCTFILEDIR
#define OCTAVE_LOCALOCTFILEDIR "/mnt/galaxyTools/tools/oqtans/sw_require/octave-3.6.2_64/lib/octave/site/oct/x86_64-unknown-linux-gnu"
#endif

#ifndef OCTAVE_LOCALSTARTUPFILEDIR
#define OCTAVE_LOCALSTARTUPFILEDIR "/mnt/galaxyTools/tools/oqtans/sw_require/octave-3.6.2_64/share/octave/site/m/startup"
#endif

#ifndef OCTAVE_LOCALAPIARCHLIBDIR
#define OCTAVE_LOCALAPIARCHLIBDIR "/mnt/galaxyTools/tools/oqtans/sw_require/octave-3.6.2_64/libexec/octave/api-v48+/site/exec/x86_64-unknown-linux-gnu"
#endif

#ifndef OCTAVE_LOCALVERARCHLIBDIR
#define OCTAVE_LOCALVERARCHLIBDIR "/mnt/galaxyTools/tools/oqtans/sw_require/octave-3.6.2_64/libexec/octave/3.6.2/site/exec/x86_64-unknown-linux-gnu"
#endif

#ifndef OCTAVE_LOCALVERFCNFILEDIR
#define OCTAVE_LOCALVERFCNFILEDIR "/mnt/galaxyTools/tools/oqtans/sw_require/octave-3.6.2_64/share/octave/3.6.2/site/m"
#endif

#ifndef OCTAVE_LOCALVEROCTFILEDIR
#define OCTAVE_LOCALVEROCTFILEDIR "/mnt/galaxyTools/tools/oqtans/sw_require/octave-3.6.2_64/lib/octave/3.6.2/site/oct/x86_64-unknown-linux-gnu"
#endif

#ifndef OCTAVE_MAN1DIR
#define OCTAVE_MAN1DIR "/mnt/galaxyTools/tools/oqtans/sw_require/octave-3.6.2_64/share/man/man1"
#endif

#ifndef OCTAVE_MAN1EXT
#define OCTAVE_MAN1EXT ".1"
#endif

#ifndef OCTAVE_MANDIR
#define OCTAVE_MANDIR "/mnt/galaxyTools/tools/oqtans/sw_require/octave-3.6.2_64/share/man"
#endif

#ifndef OCTAVE_OCTFILEDIR
#define OCTAVE_OCTFILEDIR "/mnt/galaxyTools/tools/oqtans/sw_require/octave-3.6.2_64/lib/octave/3.6.2/oct/x86_64-unknown-linux-gnu"
#endif

#ifndef OCTAVE_OCTETCDIR
#define OCTAVE_OCTETCDIR "/mnt/galaxyTools/tools/oqtans/sw_require/octave-3.6.2_64/share/octave/3.6.2/etc"
#endif

#ifndef OCTAVE_OCTINCLUDEDIR
#define OCTAVE_OCTINCLUDEDIR "/mnt/galaxyTools/tools/oqtans/sw_require/octave-3.6.2_64/include/octave-3.6.2/octave"
#endif

#ifndef OCTAVE_OCTLIBDIR
#define OCTAVE_OCTLIBDIR "/mnt/galaxyTools/tools/oqtans/sw_require/octave-3.6.2_64/lib/octave/3.6.2"
#endif

#ifndef OCTAVE_PREFIX
#define OCTAVE_PREFIX "/mnt/galaxyTools/tools/oqtans/sw_require/octave-3.6.2_64"
#endif

#ifndef OCTAVE_STARTUPFILEDIR
#define OCTAVE_STARTUPFILEDIR "/mnt/galaxyTools/tools/oqtans/sw_require/octave-3.6.2_64/share/octave/3.6.2/m/startup"
#endif

#ifndef OCTAVE_RELEASE
#define OCTAVE_RELEASE ""
#endif

extern std::string Voctave_home;

extern std::string Vbin_dir;
extern std::string Vinfo_dir;
extern std::string Vdata_dir;
extern std::string Vlibexec_dir;
extern std::string Varch_lib_dir;
extern std::string Vlocal_arch_lib_dir;
extern std::string Vlocal_ver_arch_lib_dir;

extern std::string Vlocal_ver_oct_file_dir;
extern std::string Vlocal_api_oct_file_dir;
extern std::string Vlocal_oct_file_dir;

extern std::string Vlocal_ver_fcn_file_dir;
extern std::string Vlocal_api_fcn_file_dir;
extern std::string Vlocal_fcn_file_dir;

extern std::string Voct_file_dir;
extern std::string Vfcn_file_dir;

extern std::string Vimage_dir;

// Name of the editor to be invoked by the edit_history command.
extern std::string VEDITOR;

extern std::string Vlocal_site_defaults_file;
extern std::string Vsite_defaults_file;

// Name of the FFTW wisdom program.
extern OCTINTERP_API std::string Vfftw_wisdom_program;

extern std::string subst_octave_home (const std::string&);

extern void install_defaults (void);

extern void set_exec_path (const std::string& path = std::string ());
extern void set_image_path (const std::string& path = std::string ());

#endif
