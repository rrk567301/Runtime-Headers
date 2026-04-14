@class FTMessageDelivery, APSConnection, NSString, NSObject, SKASystemMonitor;
@protocol OS_dispatch_queue, SKAPushManagingDelegate;

@interface SKAPushManager : NSObject <APSConnectionDelegate, SKASystemMonitorListener, SKAPushManaging>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) SKASystemMonitor *systemMonitor;
@property (retain, nonatomic) APSConnection *connection;
@property (retain, nonatomic) FTMessageDelivery *messageDelivery;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKAPushManagingDelegate> delegate;

+ (id)logger;

- (void).cxx_destruct;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 channelSubscriptionsFailedWithFailures:(id)a1;
- (id)serverTime;
- (void)systemDidLeaveFirstDataProtectionLock;
- (id)_pushEnvironment;
- (void)createChannelWithProtoData:(id)a0 completion:(id /* block */)a1;
- (void)publishStatus:(id)a0 completion:(id /* block */)a1;
- (void)subscribedChannelsWithCompletion:(id /* block */)a0;
- (void)subscribeToChannels:(id)a0;
- (void)unsubscribeFromChannels:(id)a0;
- (void)_initializeAPSConnection;
- (BOOL)_sharedChannelsIsDisabledByServer;
- (void)switchFilterToNonwaking;
- (void)switchFilterToEnabled;
- (id)initWithQueue:(id)a0 systemMonitor:(id)a1;

@end
