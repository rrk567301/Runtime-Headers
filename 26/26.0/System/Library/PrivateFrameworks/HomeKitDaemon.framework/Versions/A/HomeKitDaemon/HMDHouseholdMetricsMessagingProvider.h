@class HMDMessageDispatcher;
@protocol HMFMessageReceiver;

@interface HMDHouseholdMetricsMessagingProvider : NSObject <HMDHouseholdMetricsMessaging>

@property (readonly, nonatomic) id<HMFMessageReceiver> receiver;
@property (readonly, nonatomic) HMDMessageDispatcher *messageDispatcher;

+ (id)logCategory;

- (id)initWithReceiver:(id)a0;
- (void)sendMessage:(id)a0 toDevice:(id)a1 withPayload:(id)a2 responseHandler:(id /* block */)a3;
- (void)registerForMessage:(id)a0 selector:(SEL)a1;
- (void)deregisterForMessage:(id)a0;
- (void).cxx_destruct;
- (id)initWithReceiver:(id)a0 messageDispatcher:(id)a1;

@end
