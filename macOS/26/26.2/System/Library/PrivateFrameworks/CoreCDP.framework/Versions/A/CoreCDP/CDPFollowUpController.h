@class CDPDaemonConnection;

@interface CDPFollowUpController : NSObject {
    CDPDaemonConnection *_daemonConn;
}

- (void)invalidate;
- (BOOL)clearFollowUpWithContext:(id)a0 error:(id *)a1;
- (BOOL)postFollowUpWithContext:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
