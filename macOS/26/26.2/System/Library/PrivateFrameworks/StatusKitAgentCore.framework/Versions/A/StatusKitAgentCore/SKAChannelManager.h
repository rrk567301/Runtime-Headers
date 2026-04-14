@class NSString;
@protocol SKAChannelManagingDelegate, SKAAccountProviding, SKAPushManaging;

@interface SKAChannelManager : NSObject <SKAPushManagingDelegate, SKAChannelManaging>

@property (retain, nonatomic) id<SKAPushManaging> pushManager;
@property (retain, nonatomic) id<SKAAccountProviding> accountProvider;
@property (weak, nonatomic) id<SKAChannelManagingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;

- (void)publishData:(id)a0 onChannel:(id)a1 withChannelToken:(id)a2 publishInitiateTime:(id)a3 isPendingPublish:(BOOL)a4 isScheduledPublish:(BOOL)a5 retryCount:(unsigned long long)a6 completion:(id /* block */)a7;
- (void)enableActivityTracking;
- (void)activePresenceChannelSubscriptionsWithCompletion:(id /* block */)a0;
- (void)releasePresenceOnChannel:(id)a0 membershipKey:(id)a1 serverKey:(id)a2 timestamp:(id)a3 withChannelToken:(id)a4 serviceIdentifier:(id)a5 completion:(id /* block */)a6;
- (void)subscribeToPresenceChannels:(id)a0;
- (void)unsubscribeFromStatusChannels:(id)a0;
- (void)createPresenceChannelWithMembershipKey:(id)a0 serverKey:(id)a1 serviceIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)publishProvisionPayloads:(id)a0 onChannel:(id)a1 withChannelToken:(id)a2 publishInitiateTime:(id)a3 retryCount:(unsigned long long)a4 completion:(id /* block */)a5;
- (id)serverTime;
- (void)activeStatusChannelSubscriptionsWithCompletion:(id /* block */)a0;
- (id)_getPresenceJWTToken;
- (void)subscribeToStatusChannels:(id)a0;
- (BOOL)shouldRetryRequestForResponse:(id)a0 withRetryInterval:(unsigned int *)a1 currentRetry:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)unsubscribeFromPresenceChannels:(id)a0;
- (void)createChannelWithCompletion:(id /* block */)a0;
- (void)pushManager:(id)a0 failedToSubscribeToChannel:(id)a1 withError:(id)a2;
- (id)_createPayloadDataFromData:(id)a0;
- (void)pollActiveParticipantsForChannel:(id)a0 membershipKey:(id)a1 serverKey:(id)a2 withChannelToken:(id)a3 serviceIdentifier:(id)a4 completion:(id /* block */)a5;
- (id)_getStatusJWTToken;
- (id)initWithPushManager:(id)a0 accountProvider:(id)a1 delegate:(id)a2;
- (id)_getNonce;
- (void)disableActivityTracking;
- (void)pushManager:(id)a0 didReceiveData:(id)a1 onChannel:(id)a2 identifier:(unsigned long long)a3 dateReceived:(id)a4 dateExpired:(id)a5;
- (void)assertPresence:(id)a0 withPriority:(long long)a1 onChannel:(id)a2 membershipKey:(id)a3 serverKey:(id)a4 timestamp:(id)a5 withChannelToken:(id)a6 serviceIdentifier:(id)a7 isRefresh:(BOOL)a8 completion:(id /* block */)a9;

@end
