@class NSUUID, OS_dispatch_queue, HAPAccessoryServerBrowser;
@protocol HMDDemoModeManagerDataSource;

@interface HomeKitDaemon.DemoModeManager : NSObject <HMDDemoModeManager, HMFMessageReceiver> {
    void /* unknown type, empty encoding */ homeManager;
    void /* unknown type, empty encoding */ messageDispatcher;
    void /* unknown type, empty encoding */ notificationCenter;
}

@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) OS_dispatch_queue *messageReceiveQueue;
@property (nonatomic, readonly) HAPAccessoryServerBrowser *demoAccessoryBrowser;
@property (nonatomic, readonly) id<HMDDemoModeManagerDataSource> demoModeDataSource;

- (void)configure;
- (void)handleNotification:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)handleRequestMessage:(id)a0;
- (id)handleTestModeConfigRequestPayload:(id)a0 error:(id *)a1;

@end
