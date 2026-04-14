@protocol REMXPCDaemonControllerAutoCategorizationActivityObserver, REMXPCDaemonControllerCloudKitNetworkActivityDelegate;

@interface REMXPCDaemonControllerExportedObject : NSObject <REMXPCClient>

@property (weak, nonatomic) id<REMXPCDaemonControllerCloudKitNetworkActivityDelegate> cloudKitNetworkActivityDelegate;
@property (weak, nonatomic) id<REMXPCDaemonControllerAutoCategorizationActivityObserver> autoCategorizationActivityObserver;

- (void)autoCategorizationActivityDidUpdate:(id)a0;
- (void)cloudKitNetworkActivityDidUpdate:(id)a0;
- (void).cxx_destruct;

@end
