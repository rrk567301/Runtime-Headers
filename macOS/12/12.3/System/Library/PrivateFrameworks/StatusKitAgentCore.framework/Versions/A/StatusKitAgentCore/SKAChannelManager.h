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
+ (id)_jwtTokenNotFoundError;

- (void).cxx_destruct;
- (id)serverTime;
- (void)createChannelWithCompletion:(id /* block */)a0;
- (void)publishData:(id)a0 onChannel:(id)a1 withChannelToken:(id)a2 publishInitiateTime:(id)a3 isPendingPublish:(BOOL)a4 isScheduledPublish:(BOOL)a5 retryCount:(unsigned long long)a6 completion:(id /* block */)a7;
- (id)_getJWTToken;
- (id)_createPayloadDataFromData:(id)a0;
- (void)subscribeToChannels:(id)a0;
- (void)unsubscribeFromChannels:(id)a0;
- (void)pushManager:(id)a0 didReceiveData:(id)a1 onChannel:(id)a2 dateReceived:(id)a3 dateExpired:(id)a4;
- (void)pushManager:(id)a0 failedToSubscribeToChannel:(id)a1 withError:(id)a2;
- (void)activeChannelSubscriptionsWithCompletion:(id /* block */)a0;
- (id)initWithPushManager:(id)a0 accountProvider:(id)a1 delegate:(id)a2;

@end
