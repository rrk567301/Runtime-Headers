@class APSConnection, NSString, NSObject;
@protocol OS_dispatch_queue, TRIPushServiceConnectionDelegate;

@interface TRIPushServiceConnection : NSObject <APSConnectionDelegate, TRIPushServiceChannelSubscribing>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *pushServiceQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *subscriptionRequestQueue;
@property (readonly, nonatomic) id<TRIPushServiceConnectionDelegate> triDelegate;
@property (readonly, nonatomic) APSConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_validateChannelId:(id)a0;
+ (id)subsetOfChannels:(id)a0 currentChannelCount:(long long)a1 hardLimit:(long long)a2;

- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 channelSubscriptionsFailedWithFailures:(id)a1;
- (id)_publicChannelForChannelId:(id)a0;
- (void)dealloc;
- (void)_unsubscribeFromChannel:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)_subscribeToChannels:(id)a0;
- (id)subscribedChannelIds;
- (void)unsubscribeFromChannel:(id)a0;
- (void)subscribeToChannels:(id)a0;
- (unsigned long long)_subscribedChannelCount;
- (void).cxx_destruct;

@end
