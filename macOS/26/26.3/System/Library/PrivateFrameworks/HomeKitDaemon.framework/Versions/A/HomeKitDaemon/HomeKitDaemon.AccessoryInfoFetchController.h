@class NSUUID, OS_dispatch_queue;

@interface HomeKitDaemon.AccessoryInfoFetchController : NSObject <HMFMessageReceiver> {
    void /* unknown type, empty encoding */ messageTargetUUID;
    void /* unknown type, empty encoding */ messageDispatcher;
    void /* unknown type, empty encoding */ remoteEventRouterClientController;
}

@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) OS_dispatch_queue *messageReceiveQueue;

- (id)init;
- (void).cxx_destruct;
- (void)handleFetchWithMessage:(id)a0;

@end
