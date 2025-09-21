@class CDPDaemonConnection;

@interface CDPFollowUpController : NSObject {
    CDPDaemonConnection *_daemonConn;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (char)postFollowUpWithContext:(id)a0 error:(id *)a1;
- (char)clearFollowUpWithContext:(id)a0 error:(id *)a1;

@end
