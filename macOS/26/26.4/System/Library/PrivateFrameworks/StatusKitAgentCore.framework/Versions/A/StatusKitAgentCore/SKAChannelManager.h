@class NSString;
@protocol SKAAccountProviding, SKAServerBagProviding, SKAPushManaging, SKAChannelManagingDelegate;

@interface SKAChannelManager : NSObject <SKAPushManagingDelegate, SKAChannelManaging>

@property (retain, nonatomic) id<SKAPushManaging> pushManager;
@property (retain, nonatomic) id<SKAAccountProviding> accountProvider;
@property (retain, nonatomic) id<SKAServerBagProviding> serverBag;
@property (weak, nonatomic) id<SKAChannelManagingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;
+ (int)serverRoutableClientWithUuid:(id)a0;

- (void)publishProvisionPayloads:(id)a0 onChannel:(id)a1 withChannelToken:(id)a2 publishInitiateTime:(id)a3 serverObservableAdopterName:(id)a4 retryCount:(unsigned long long)a5 completion:(id /* block */)a6;
- (void)createChannelWithCompletion:(id /* block */)a0;
- (void)enableActivityTracking;
- (id)_getNonce;
- (id)initWithPushManager:(id)a0 accountProvider:(id)a1 delegate:(id)a2 serverBag:(id)a3;
- (void)pollActiveParticipantsForChannel:(id)a0 membershipKey:(id)a1 serverKey:(id)a2 withChannelToken:(id)a3 serverObservableAdopterName:(id)a4 pushTopic:(id)a5 channelOwnershipType:(int)a6 completion:(id /* block */)a7;
- (void)pushManager:(id)a0 didReceiveData:(id)a1 onChannel:(id)a2 identifier:(unsigned long long)a3 dateReceived:(id)a4 dateExpired:(id)a5;
- (void)disableActivityTracking;
- (void)createPresenceChannelWithMembershipKey:(id)a0 serverKey:(id)a1 serverObservableAdopterName:(id)a2 pushTopic:(id)a3 channelOwnershipType:(int)a4 completion:(id /* block */)a5;
- (void)activeStatusChannelSubscriptionsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_getStatusJWTToken;
- (void)pushManager:(id)a0 failedToSubscribeToChannel:(id)a1 withError:(id)a2;
- (void)setPersistentPayloadData:(id)a0 onChannel:(id)a1 priority:(long long)a2 ttlSeconds:(double)a3 membershipKey:(id)a4 serverKey:(id)a5 timestamp:(id)a6 withChannelToken:(id)a7 serverObservableAdopterName:(id)a8 isRefresh:(BOOL)a9 pushTopic:(id)a10 channelOwnershipType:(int)a11 completion:(id /* block */)a12;
- (id)serverTime;
- (void)assertPresenceWithPresencePayloadData:(id)a0 presencePayloadTTLSeconds:(double)a1 persistentPayloadData:(id)a2 persistentPayloadTTLSeconds:(double)a3 serverRoutablePayload:(id)a4 publishPriority:(long long)a5 connectivityPriority:(long long)a6 onChannel:(id)a7 membershipKey:(id)a8 serverKey:(id)a9 timestamp:(id)a10 withChannelToken:(id)a11 serverObservableAdopterName:(id)a12 isRefresh:(BOOL)a13 pushTopic:(id)a14 channelOwnershipType:(int)a15 completion:(id /* block */)a16;
- (BOOL)shouldRetryRequestForResponse:(id)a0 withRetryInterval:(unsigned int *)a1 currentRetry:(unsigned long long)a2;
- (id)_createPayloadDataFromData:(id)a0;
- (id)_getPresenceJWTToken;
- (void)releasePresenceOnChannel:(id)a0 membershipKey:(id)a1 serverKey:(id)a2 timestamp:(id)a3 withChannelToken:(id)a4 serverObservableAdopterName:(id)a5 pushTopic:(id)a6 channelOwnershipType:(int)a7 completion:(id /* block */)a8;
- (void)publishData:(id)a0 onChannel:(id)a1 withChannelToken:(id)a2 publishInitiateTime:(id)a3 isPendingPublish:(BOOL)a4 isScheduledPublish:(BOOL)a5 ttlSeconds:(double)a6 retryCount:(unsigned long long)a7 completion:(id /* block */)a8;

@end
