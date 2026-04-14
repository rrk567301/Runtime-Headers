@class CDPDaemonConnection;

@interface CDPFollowUpController : NSObject {
    CDPDaemonConnection *_daemonConn;
}

- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (BOOL)postFollowUpWithContext:(id)a0 error:(id *)a1;
- (void)dealloc;
- (BOOL)clearFollowUpWithContext:(id)a0 error:(id *)a1;

@end
