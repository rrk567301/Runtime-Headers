@interface RemindersUICore.TTRCloudKitNetworkActivityMonitor : NSObject <REMXPCDaemonControllerCloudKitNetworkActivityDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ executeToken;
}

- (void).cxx_destruct;
- (id)init;
- (void)cloudKitNetworkActivityDidChange:(id)a0;

@end
