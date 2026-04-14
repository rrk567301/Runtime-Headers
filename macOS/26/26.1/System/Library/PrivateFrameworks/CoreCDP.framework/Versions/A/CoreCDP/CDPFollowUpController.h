@class CDPDaemonConnection;

@interface CDPFollowUpController : NSObject {
    CDPDaemonConnection *_daemonConn;
}

- (BOOL)postFollowUpWithContext:(id)a0 error:(id *)a1;
- (void)invalidate;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)clearFollowUpWithContext:(id)a0 error:(id *)a1;
- (id)init;

@end
