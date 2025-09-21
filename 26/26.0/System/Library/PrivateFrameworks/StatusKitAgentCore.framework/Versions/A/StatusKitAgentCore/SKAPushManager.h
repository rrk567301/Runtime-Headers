@class FTMessageDelivery, APSConnection, NSString, NSObject, SKASystemMonitor;
@protocol OS_dispatch_queue, SKAPushManagingDelegate;

@interface SKAPushManager : NSObject <SKASystemMonitorListener, APSConnectionDelegate, SKAPushManaging>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) SKASystemMonitor *systemMonitor;
@property (retain, nonatomic) APSConnection *connection;
@property (retain, nonatomic) FTMessageDelivery *messageDelivery;
@property (nonatomic) BOOL trafficModeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKAPushManagingDelegate> delegate;

+ (id)logger;

- (id)pushToken;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (id)serverTime;
- (void)connection:(id)a0 channelSubscriptionsFailedWithFailures:(id)a1;
- (void)_provisionPayload:(id)a0 retryCount:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_unsubscribeFromChannels:(id)a0 forTopic:(id)a1;
- (void)_subscribedChannelsForTopic:(id)a0 WithCompletion:(id /* block */)a1;
- (void)sendPresenceMessage:(id)a0 completion:(id /* block */)a1;
- (void)_publishStatus:(id)a0 retryCount:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_switchFilterToNonwakingForTopic:(id)a0;
- (void)subscribedStatusChannelsWithCompletion:(id /* block */)a0;
- (void)subscribeToPresenceChannels:(id)a0;
- (void)enableActivityTracking;
- (void)_switchFilterToOpportunisticForTopic:(id)a0;
- (void)unsubscribeFromPresenceChannels:(id)a0;
- (void)_createChannelWithProtoData:(id)a0 retryCount:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)switchTopic:(long long)a0 toFilter:(long long)a1;
- (id)_pushEnvironment;
- (void)subscribedPresenceChannelsWithCompletion:(id /* block */)a0;
- (void)disableActivityTracking;
- (void)createChannelWithProtoData:(id)a0 completion:(id /* block */)a1;
- (void)unsubscribeFromStatusChannels:(id)a0;
- (void)_subscribeToChannels:(id)a0 forTopic:(id)a1;
- (void)_sendPresenceMessage:(id)a0 retryCount:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)systemDidLeaveFirstDataProtectionLock;
- (void)subscribeToStatusChannels:(id)a0;
- (void)_initializeAPSConnection;
- (void)_switchFilterToEnabledForTopic:(id)a0;
- (void)provisionPayload:(id)a0 completion:(id /* block */)a1;
- (BOOL)_sharedChannelsIsDisabledByServer;
- (id)initWithQueue:(id)a0 systemMonitor:(id)a1 inTrafficMode:(BOOL)a2;
- (id)initWithQueue:(id)a0 systemMonitor:(id)a1 apsConnection:(id)a2 inTrafficMode:(BOOL)a3;
- (void).cxx_destruct;
- (void)publishStatus:(id)a0 completion:(id /* block */)a1;

@end
