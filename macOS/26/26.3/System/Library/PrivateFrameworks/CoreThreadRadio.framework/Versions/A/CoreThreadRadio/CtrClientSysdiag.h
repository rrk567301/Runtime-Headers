@class CtrClient;

@interface CtrClientSysdiag : NSObject {
    CtrClient *ctrClient;
}

- (id)init:(const char *)a0;
- (void).cxx_destruct;
- (BOOL)generateThreadDiagnosticsMonitorLogs;

@end
