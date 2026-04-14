@class CDPDaemonConnection;

@interface CDPFollowUpController : NSObject {
    CDPDaemonConnection *_daemonConn;
}

- (void)invalidate;
- (BOOL)postFollowUpWithContext:(id)a0 error:(id *)a1;
- (id)init;
- (BOOL)clearFollowUpWithContext:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
