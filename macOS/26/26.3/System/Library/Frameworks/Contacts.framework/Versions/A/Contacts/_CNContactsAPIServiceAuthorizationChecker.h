@class NSObject, NSXPCConnection;
@protocol OS_os_log, CNTCC;

@interface _CNContactsAPIServiceAuthorizationChecker : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_os_log> *_log;
    id<CNTCC> _tccServices;
    BOOL _hasCheckedAccessStatus;
    long long _status;
}

@property BOOL allowContactProvidersWithoutTCCApproval;

- (BOOL)check;
- (void).cxx_destruct;
- (BOOL)isConnectionFromContactProvider;
- (BOOL)doesConnectionHaveFullTCCAccess;
- (void)_checkTCCAuthorizationStatus;
- (BOOL)acceptConnectionWithReason:(id)a0;
- (id)bundleIdentifierForConnection:(id)a0;
- (BOOL)doesConnectionHaveLimitedTCCAccess;
- (id)initWithConnection:(id)a0 log:(id)a1 tccServices:(id)a2;
- (BOOL)isConnectionFromSystemService;
- (BOOL)isConnectionFromTCCUncoupledProcess;
- (BOOL)rejectConnectionWithReason:(id)a0;

@end
