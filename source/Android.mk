LOCAL_PATH:= $(call my-dir)

########################################################################
prefix=/data/data/samba
PRIVATEDIR = ${prefix}/private
PASSWD_PROGRAM = /system/bin/smbpasswd
SMB_PASSWD_FILE = $(PRIVATEDIR)/smbpasswd
TDB_PASSWD_FILE = $(PRIVATEDIR)/smbpasswd.tdb
VARDIR = ${prefix}/var
LOGFILEBASE = $(VARDIR)
CONFIGFILE = $(prefix)/smb.conf
LIBDIR = ${prefix}
SWATDIR = ${prefix}/swat
SBINDIR = /system/bin
BINDIR = /system/bin
LOCKDIR = ${VARDIR}/locks
CODEPAGEDIR = $(LIBDIR)/codepages
PIDDIR = $(VARDIR)/locks


PASSWD_FLAGS = -DPASSWD_PROGRAM=\"$(PASSWD_PROGRAM)\" -DSMB_PASSWD_FILE=\"$(SMB_PASSWD_FILE)\" -DTDB_PASSWD_FILE=\"$(TDB_PASSWD_FILE)\"
FLAGS1 =  $(CPPFLAGS) -DLOGFILEBASE=\"$(LOGFILEBASE)\"
FLAGS2 = -DCONFIGFILE=\"$(CONFIGFILE)\" -DLMHOSTSFILE=\"$(LMHOSTSFILE)\"  
FLAGS3 = -DSWATDIR=\"$(SWATDIR)\" -DSBINDIR=\"$(SBINDIR)\" -DLOCKDIR=\"$(LOCKDIR)\" -DCODEPAGEDIR=\"$(CODEPAGEDIR)\"
FLAGS4 = -DDRIVERFILE=\"$(DRIVERFILE)\" -DBINDIR=\"$(BINDIR)\" -DPIDDIR=\"$(PIDDIR)\" -DLIBDIR=\"$(LIBDIR)\"
FLAGS5 = $(FLAGS1) $(FLAGS2) $(FLAGS3) $(FLAGS4) -DHAVE_INCLUDES_H
FLAGS  =  $(FLAGS5) $(PASSWD_FLAGS) -Wno-error=format-security -W -Wshadow -pedantic -std=gnu99
########################################################################

SMBD_OBJ1 := \
	sambd/server.c sambd/files.c sambd/chgpasswd.c sambd/connection.c \
	sambd/utmp.c sambd/session.c sambd/dfree.c sambd/dir.c sambd/password.c \
	sambd/conn.c sambd/fileio.c sambd/ipc.c sambd/lanman.c sambd/mangle.c \
	sambd/mangle_hash2.c sambd/mangle_hash.c sambd/mangle_map.c sambd/negprot.c \
	sambd/message.c sambd/nttrans.c sambd/pipes.c sambd/reply.c sambd/trans2.c \
	sambd/uid.c sambd/dosmode.c sambd/filename.c sambd/open.c sambd/close.c \
	sambd/blocking.c sambd/sec_ctx.c sambd/vfs.c sambd/vfs-wrap.c sambd/statcache.c \
    sambd/posix_acls.c lib/sysacls.c sambd/process.c sambd/service.c sambd/error.c \
	printing/printfsp.c lib/util_seaccess.c libsmb/cli_pipe_util.c

MSDFS_OBJ := msdfs/msdfs.c 

PARAM_OBJ := \
	param/loadparm.c param/params.c 

RPC_PARSE_OBJ1 := \
	rpc_parse/parse_prs.c rpc_parse/parse_sec.c rpc_parse/parse_misc.c

LIBSMB_OBJ := \
	libsmb/clientgen.c libsmb/cliconnect.c libsmb/clifile.c libsmb/clirap.c \
	libsmb/clierror.c libsmb/climessage.c libsmb/clireadwrite.c libsmb/clilist.c \
	libsmb/cliprint.c libsmb/clitrans.c libsmb/clisecdesc.c libsmb/clidgram.c \
	libsmb/namequery.c libsmb/nmblib.c libsmb/clistr.c libsmb/nterr.c \
	libsmb/smbdes.c libsmb/smbencrypt.c libsmb/smberr.c libsmb/credentials.c \
	libsmb/pwd_cache.c libsmb/clioplock.c libsmb/errormap.c libsmb/doserr.c \
	libsmb/passchange.c libsmb/unexpected.c libsmb/namecache.c \
	$(RPC_PARSE_OBJ1)

UBIQX_OBJ := \
	ubiqx/ubi_BinTree.c ubiqx/ubi_Cache.c ubiqx/ubi_SplayTree.c \
	ubiqx/ubi_dLinkList.c ubiqx/ubi_sLinkList.c ubiqx/debugparse.c

RPC_SERVER_OBJ := \
	rpc_server/srv_lsa.c rpc_server/srv_lsa_nt.c rpc_server/srv_lsa_hnd.c \
	rpc_server/srv_netlog.c rpc_server/srv_netlog_nt.c rpc_server/srv_pipe_hnd.c \
	rpc_server/srv_reg.c rpc_server/srv_reg_nt.c rpc_server/srv_samr.c \
	rpc_server/srv_samr_nt.c rpc_server/srv_srvsvc.c rpc_server/srv_srvsvc_nt.c \
    rpc_server/srv_util.c rpc_server/srv_wkssvc.c rpc_server/srv_wkssvc_nt.c \
    rpc_server/srv_pipe.c rpc_server/srv_dfs.c rpc_client/cli_spoolss_notify.c \
	rpc_server/srv_spoolss.c rpc_server/srv_spoolss_nt.c rpc_server/srv_dfs_nt.c

RPC_PARSE_OBJ := \
	rpc_parse/parse_lsa.c rpc_parse/parse_net.c rpc_parse/parse_reg.c \
	rpc_parse/parse_rpc.c rpc_parse/parse_samr.c rpc_parse/parse_srv.c \
    rpc_parse/parse_wks.c rpc_parse/parse_spoolss.c rpc_parse/parse_dfs.c

RPC_CLIENT_OBJ := \
	rpc_client/cli_netlogon.c rpc_client/cli_pipe.c rpc_client/cli_login.c \
	rpc_client/cli_trust.c

LOCKING_OBJ := \
	locking/locking.c locking/brlock.c locking/posix.c

PASSDB_OBJ := \
	passdb/passdb.c passdb/secrets.c passdb/pass_check.c passdb/smbpassfile.c \
	passdb/machine_sid.c passdb/pdb_smbpasswd.c passdb/pampass.c passdb/pdb_tdb.c \
	passdb/pdb_ldap.c passdb/pdb_nisplus.c

PRINTING_OBJ := \
	printing/pcap.c printing/print_svid.c printing/print_cups.c printing/load.c \
	printing/lpq_parse.c printing/print_generic.c

PROFILE_OBJ := profile/profile.c

TDBBASE_OBJ := \
	tdb/tdb.c tdb/spinlock.c

TDB_OBJ := \
	tdb/tdbutil.c \
	$(TDBBASE_OBJ) 

LIB_OBJ := \
	lib/charcnv.c lib/charset.c lib/debug.c lib/fault.c lib/getsmbpass.c \
	lib/interface.c lib/kanji.c lib/md4.c lib/interfaces.c lib/pidfile.c \
	lib/replace.c lib/signal.c lib/system.c lib/sendfile.c lib/time.c lib/ufc.c \
	lib/genrand.c lib/username.c lib/util_getent.c lib/access.c lib/smbrun.c \
	lib/bitmap.c lib/crc32.c lib/snprintf.c lib/wins_srv.c lib/util_str.c \
	lib/util_sid.c lib/util_unistr.c lib/util_file.c lib/util.c lib/util_sock.c \
	lib/util_sec.c sambd/ssl.c lib/talloc.c lib/hash.c lib/substitute.c lib/fsusage.c \
	lib/ms_fnmatch.c lib/select.c lib/error.c lib/messages.c lib/pam_errors.c \
	nsswitch/wb_client.c nsswitch/wb_common.c lib/pwd_grp.c\
	$(TDB_OBJ)

QUOTAOBJS := sambd/noquotas.c

PRINTBACKEND_OBJ := \
	printing/printing.c printing/nt_printing.c

OPLOCK_OBJ := \
	sambd/oplock.c sambd/oplock_irix.c sambd/oplock_linux.c

NOTIFY_OBJ := \
	sambd/notify.c sambd/notify_hash.c sambd/notify_kernel.c

NMBD_OBJ1 := \
	nambd/asyncdns.c nambd/nmbd.c nambd/nmbd_become_dmb.c nambd/nmbd_become_lmb.c \
	nambd/nmbd_browserdb.c nambd/nmbd_browsesync.c nambd/nmbd_elections.c \
    nambd/nmbd_incomingdgrams.c nambd/nmbd_incomingrequests.c nambd/nmbd_lmhosts.c \
	nambd/nmbd_logonnames.c nambd/nmbd_mynames.c nambd/nmbd_namelistdb.c \
	nambd/nmbd_namequery.c nambd/nmbd_nameregister.c nambd/nmbd_namerelease.c \
    nambd/nmbd_nodestatus.c nambd/nmbd_packets.c nambd/nmbd_processlogon.c \
	nambd/nmbd_responserecordsdb.c nambd/nmbd_sendannounce.c nambd/nmbd_serverlistdb.c \
    nambd/nmbd_subnetdb.c nambd/nmbd_winsproxy.c nambd/nmbd_winsserver.c \
    nambd/nmbd_workgroupdb.c nambd/nmbd_synclists.c

				
#########################################################################

SMBD_COMMON := \
	$(LIB_OBJ) $(PARAM_OBJ) $(LIBSMB_OBJ) $(UBIQX_OBJ)  \
	$(RPC_PARSE_OBJ) $(RPC_CLIENT_OBJ) $(PASSDB_OBJ) $(PROFILE_OBJ)

SMBD_OBJ := \
	testbuild.c \
	$(SMBD_OBJ1) $(MSDFS_OBJ) $(RPC_SERVER_OBJ) $(LOCKING_OBJ) \
	$(PRINTING_OBJ) $(QUOTAOBJS) $(PRINTBACKEND_OBJ) $(OPLOCK_OBJ) \
	$(NOTIFY_OBJ)


NMBD_OBJ := \
	$(NMBD_OBJ1)

SMBPASSWD_OBJ := \
	utils/smbpasswd.c libsmb/cli_lsarpc.c libsmb/cli_samr.c \
	libsmb/cli_pipe_util.c



#########################################################################
TESTPARM_OBJ :=\
	utils/testparm.o \
    $(PARAM_OBJ) $(UBIQX_OBJ) $(LIB_OBJ)


####################################################################################
##libsmbd_common
include $(CLEAR_VARS)

LOCAL_CFLAGS += $(FLAGS)

LOCAL_SRC_FILES := $(SMBD_COMMON)

LOCAL_C_INCLUDES := \
	$(KERNEL_HEADERS) \
	external/samba/source \
	external/samba/source/popt \
	external/samba/source/tdb \
	external/samba/source/aparser \
	external/samba/source/pam_smbpass \
	external/samba/source/include \
	external/samba/source/rpcclient \
	external/samba/source/smbwrapper \
	external/samba/source/web/po \
	external/samba/source/nsswitch \
	external/samba/source/ubiqx

LOCAL_SHARED_LIBRARIES := libdl liblog 
LOCAL_MODULE := libsmbd_common
LOCAL_MODULE_CLASS := SHARED_LIBRARIES
LOCAL_MODULE_TAGS := optional
include $(BUILD_SHARED_LIBRARY)

####################################################################################
##nmbd
include $(CLEAR_VARS)

LOCAL_CFLAGS += $(FLAGS)

LOCAL_SRC_FILES := $(NMBD_OBJ)

LOCAL_C_INCLUDES := \
	$(KERNEL_HEADERS) \
	external/samba/source \
	external/samba/source/popt \
	external/samba/source/tdb \
	external/samba/source/aparser \
	external/samba/source/pam_smbpass \
	external/samba/source/include \
	external/samba/source/rpcclient \
	external/samba/source/smbwrapper \
	external/samba/source/web/po \
	external/samba/source/nsswitch \
	external/samba/source/ubiqx

LOCAL_SHARED_LIBRARIES := libdl liblog libsmbd_common
LOCAL_MODULE := nmbd
LOCAL_MODULE_CLASS := EXECUTABLES
LOCAL_MODULE_TAGS := optional
include $(BUILD_EXECUTABLE)
	
####################################################################################
##smbd
include $(CLEAR_VARS)

LOCAL_CFLAGS += $(FLAGS)

LOCAL_SRC_FILES := $(SMBD_OBJ) 

LOCAL_C_INCLUDES := \
	$(KERNEL_HEADERS) \
	external/samba/source \
	external/samba/source/popt \
	external/samba/source/tdb \
	external/samba/source/aparser \
	external/samba/source/pam_smbpass \
	external/samba/source/include \
	external/samba/source/rpcclient \
	external/samba/source/smbwrapper \
	external/samba/source/web/po \
	external/samba/source/nsswitch \
	external/samba/source/ubiqx

LOCAL_SHARED_LIBRARIES := libdl liblog libsmbd_common
LOCAL_MODULE := smbd
LOCAL_MODULE_CLASS := EXECUTABLES
LOCAL_MODULE_TAGS := optional

include $(BUILD_EXECUTABLE)


####################################################################################
##smbpasswd
include $(CLEAR_VARS)

LOCAL_CFLAGS += $(FLAGS)

LOCAL_SRC_FILES := $(SMBPASSWD_OBJ) 

LOCAL_C_INCLUDES := \
	$(KERNEL_HEADERS) \
	external/samba/source \
	external/samba/source/popt \
	external/samba/source/tdb \
	external/samba/source/aparser \
	external/samba/source/pam_smbpass \
	external/samba/source/include \
	external/samba/source/rpcclient \
	external/samba/source/smbwrapper \
	external/samba/source/web/po \
	external/samba/source/nsswitch \
	external/samba/source/ubiqx

LOCAL_SHARED_LIBRARIES := libdl liblog libsmbd_common
LOCAL_MODULE := smbpasswd
LOCAL_MODULE_CLASS := EXECUTABLES
LOCAL_MODULE_TAGS := optional

include $(BUILD_EXECUTABLE)