@class CDPDaemonConnection;

@interface CDPFollowUpController : NSObject {
    CDPDaemonConnection *_daemonConn;
}

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)postFollowUpWithContext:(id)a0 error:(id *)a1;
- (BOOL)clearFollowUpWithContext:(id)a0 error:(id *)a1;

@end
