@class APSConnection, NSString, NSObject, SKASystemMonitor;
@protocol SKAMessageDeliveryProviding, SKAPushManagingDelegate, SKAServerBagProviding, OS_dispatch_queue;

@interface SKAPushManager : NSObject <SKASystemMonitorListener, APSConnectionDelegate, SKAPushManaging>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) SKASystemMonitor *systemMonitor;
@property (retain, nonatomic) APSConnection *connection;
@property (retain, nonatomic) id<SKAServerBagProviding> serverBag;
@property (retain, nonatomic) id<SKAMessageDeliveryProviding> messageDelivery;
@property (nonatomic) BOOL trafficModeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKAPushManagingDelegate> delegate;

+ (id)logger;

- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)subscribeToChannels:(id)a0 forTopic:(id)a1;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)unsubscribeFromChannels:(id)a0 forTopic:(id)a1;
- (void)connection:(id)a0 channelSubscriptionsFailedWithFailures:(id)a1;
- (id)initWithQueue:(id)a0 systemMonitor:(id)a1 apsConnection:(id)a2 inTrafficMode:(BOOL)a3 serverBag:(id)a4 messageDelivery:(id)a5;
- (void)_switchFilterToOpportunisticForTopic:(id)a0;
- (id)pushToken;
- (void)enableActivityTracking;
- (void)_switchFilterToEnabledForTopic:(id)a0;
- (void)systemDidLeaveFirstDataProtectionLock;
- (void)disableActivityTracking;
- (void)createChannelWithProtoData:(id)a0 completion:(id /* block */)a1;
- (void)_sendPresenceMessage:(id)a0 retryCount:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_initializeAPSConnection;
- (void)subscribedChannelsForTopic:(id)a0 completion:(id /* block */)a1;
- (void)switchTopic:(id)a0 toFilter:(int)a1;
- (void).cxx_destruct;
- (void)publishStatus:(id)a0 completion:(id /* block */)a1;
- (void)_provisionPayload:(id)a0 retryCount:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_createChannelWithProtoData:(id)a0 retryCount:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_publishStatus:(id)a0 retryCount:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)serverTime;
- (id)_pushEnvironment;
- (void)_switchFilterToNonwakingForTopic:(id)a0;
- (void)provisionPayload:(id)a0 completion:(id /* block */)a1;
- (void)sendPresenceMessage:(id)a0 completion:(id /* block */)a1;
- (void)subscribedStatusChannelsWithCompletion:(id /* block */)a0;

@end
