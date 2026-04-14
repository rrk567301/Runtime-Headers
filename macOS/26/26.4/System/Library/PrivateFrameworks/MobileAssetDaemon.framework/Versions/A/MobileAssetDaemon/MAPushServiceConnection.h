@class APSConnection, NSString, NSObject;
@protocol OS_dispatch_queue, MAPushServiceConnectionDelegate;

@interface MAPushServiceConnection : NSObject <APSConnectionDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *pushServiceQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *subscriptionRequestQueue;
@property (readonly, nonatomic) id<MAPushServiceConnectionDelegate> delegate;
@property (readonly, nonatomic) APSConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (id)subscribedChannels;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (id)initWithDelegate:(id)a0;
- (void)connection:(id)a0 channelSubscriptionsFailedWithFailures:(id)a1;
- (void)unsubscribeFromChannel:(id)a0;
- (id)_APSConnectionEnvironment;
- (id)_publicChannelForPushChannel:(id)a0;
- (unsigned long long)_subscribedChannelCount;
- (void).cxx_destruct;
- (void)_recordOperation:(id)a0;
- (void)_unsubscribeFromChannel:(id)a0;
- (void)subscribeToChannel:(id)a0;
- (void)_subscribeToChannel:(id)a0;
- (void)_recordFailedOperation:(id)a0 forReason:(id)a1;
- (void)dealloc;

@end
