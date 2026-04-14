@class VSSecurityTask, NSString, VSDelayOperation, VSSubscriptionPredicateFactory, NSMutableDictionary, NSOperationQueue, VSRemoteNotifier, VSSubscriptionServiceConnection, VSSubscriptionFetchOptionsValidator, VSLinkedOnOrAfterChecker;

@interface VSSubscriptionRegistrationCenter : NSObject <VSSubscriptionServiceProtocol, VSRemoteNotifierDelegate>

@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) NSMutableDictionary *subscriptionsByOptions;
@property (retain, nonatomic) VSDelayOperation *expirationOperation;
@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier;
@property (retain, nonatomic) VSSubscriptionServiceConnection *connection;
@property (retain, nonatomic) VSSecurityTask *currentTask;
@property (retain, nonatomic) VSLinkedOnOrAfterChecker *linkedOnOrAfterChecker;
@property (retain) VSSubscriptionPredicateFactory *predicateFactory;
@property (retain) VSSubscriptionFetchOptionsValidator *fetchOptionsValidator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultSubscriptionRegistrationCenter;

- (void)_refreshCachedSubscriptions;
- (void)setCurrentSubscription:(id)a0;
- (BOOL)_shouldRaiseExceptionsForMisuse;
- (BOOL)_shouldAllowAccessToSubscription:(id)a0;
- (void).cxx_destruct;
- (void)registerSubscription:(id)a0;
- (void)_sendLocalNotificationWithUserInfo:(id)a0;
- (void)fetchActiveSubscriptionsWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeSubscriptions:(id)a0;
- (id)init;
- (void)_resetExpirationOperation;
- (void)remoteNotifier:(id)a0 didReceiveRemoteNotificationWithUserInfo:(id)a1;
- (id)_serviceWithErrorHandler:(id /* block */)a0;
- (void)dealloc;

@end
