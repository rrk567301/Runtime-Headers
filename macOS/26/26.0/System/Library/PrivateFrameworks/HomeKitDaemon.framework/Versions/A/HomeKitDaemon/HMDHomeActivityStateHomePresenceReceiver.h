@class NSObject;
@protocol HMDHomeActivityStateHomePresenceReceiverDelegate, OS_dispatch_queue;

@interface HMDHomeActivityStateHomePresenceReceiver : HMDHomePresenceBase {
    NSObject<OS_dispatch_queue> *_messageReceiveQueue;
}

@property (weak, nonatomic) id<HMDHomeActivityStateHomePresenceReceiverDelegate> delegate;

+ (id)logCategory;

- (id)messageReceiveQueue;
- (void)_registerForMessages;
- (void).cxx_destruct;
- (void)handleUserPresenceUpdate:(id)a0;
- (id)initWithMessageReceiveQueue:(id)a0;

@end
