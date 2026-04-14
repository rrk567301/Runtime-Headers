@class NSUUID;

@interface HMDAccessoryInfoFetchController : NSObject <HMFMessageReceiver> {
    void /* unknown type, empty encoding */ messageTargetUUID;
    void /* unknown type, empty encoding */ messageDispatcher;
    void /* unknown type, empty encoding */ remoteEventRouterClientController;
}

@property (nonatomic, copy) NSUUID *messageTargetUUID;
@property (nonatomic, retain) void /* unknown type, empty encoding */ messageReceiveQueue;

- (id)init;
- (void).cxx_destruct;
- (void)configureWithMessageDispatcher:(id)a0 remoteEventRouterClientController:(id)a1;
- (void)handleFetchWithMessage:(id)a0;
- (id)initWithHomeUUID:(id)a0 workQueue:(id)a1;

@end
