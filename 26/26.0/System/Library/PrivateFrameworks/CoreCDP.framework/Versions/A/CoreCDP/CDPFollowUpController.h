@class CDPDaemonConnection;

@interface CDPFollowUpController : NSObject {
    CDPDaemonConnection *_daemonConn;
}

- (void)dealloc;
- (void)invalidate;
- (BOOL)clearFollowUpWithContext:(id)a0 error:(id *)a1;
- (id)init;
- (BOOL)postFollowUpWithContext:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
