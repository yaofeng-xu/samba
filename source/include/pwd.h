/* Copyright (C) 1991,1992,1995-2001,2003,2004 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */

/*
 *	POSIX Standard: 9.2.2 User Database Access	<pwd.h>
 */

#ifndef	_PWD_H
#define	_PWD_H	1


#define _PATH_PASSWD        "/etc/passwd"
#define _PATH_MASTERPASSWD  "/etc/master.passwd"
#define _PATH_MASTERPASSWD_LOCK "/etc/ptmp"

#define _PATH_PASSWD_CONF   "/etc/passwd.conf"
#define _PATH_PASSWDCONF    _PATH_PASSWD_CONF   /* XXX: compat */
#define _PATH_USERMGMT_CONF "/etc/usermgmt.conf"

#define _PATH_MP_DB     "/etc/pwd.db"
#define _PATH_SMP_DB        "/etc/spwd.db"

#define _PATH_PWD_MKDB      "/usr/sbin/pwd_mkdb"

#define _PW_KEYBYNAME       '1' /* stored by name */
#define _PW_KEYBYNUM        '2' /* stored by entry in the "file" */
#define _PW_KEYBYUID        '3' /* stored by uid */

#define _PASSWORD_EFMT1     '_' /* extended DES encryption format */
#define _PASSWORD_NONDES    '$' /* non-DES encryption formats */

#define _PASSWORD_LEN       128 /* max length, not counting NUL */

#define _PASSWORD_NOUID     0x01    /* flag for no specified uid. */
#define _PASSWORD_NOGID     0x02    /* flag for no specified gid. */
#define _PASSWORD_NOCHG     0x04    /* flag for no specified change. */
#define _PASSWORD_NOEXP     0x08    /* flag for no specified expire. */

#define _PASSWORD_OLDFMT    0x10    /* flag to expect an old style entry */
#define _PASSWORD_NOWARN    0x20    /* no warnings for bad entries */

#define _PASSWORD_WARNDAYS  14  /* days to warn about expiry */
#define _PASSWORD_CHGNOW    -1  /* special day to force password change at next login */


#include <features.h>

__BEGIN_DECLS

#define __need_size_t
#include <stddef.h>


/* The passwd structure.  */
struct passwd
{
  char *pw_name;		/* Username.  */
  char *pw_passwd;		/* Password.  */
  __uid_t pw_uid;		/* User ID.  */
  __gid_t pw_gid;		/* Group ID.  */
  char *pw_gecos;		/* Real name.  */
  char *pw_dir;			/* Home directory.  */
  char *pw_shell;		/* Shell program.  */
};


# include <stdio.h>


extern void setpwent (void);
extern void endpwent (void);
struct passwd *getpwnam(const char *);
struct passwd *getpwent (void);
struct passwd *getpwuid(uid_t uid);
//int getpwnam_r(const char*, struct passwd*, char*, size_t, struct passwd**);
//int getpwuid_r(uid_t, struct passwd*, char*, size_t, struct passwd**);

__END_DECLS

#endif /* pwd.h  */
