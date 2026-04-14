@class VSSubscriptionPersistentContainer, NSString, VSRemoteNotifier, VSSubscriptionPredicateFactory;

@interface VSSubscriptionRegistry : NSObject <VSSubscriptionServiceProtocol>

@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier;
@property (retain, nonatomic) VSSubscriptionPersistentContainer *persistentContainer;
@property (retain, nonatomic) VSSubscriptionPredicateFactory *predicateFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_performBlock:(id /* block */)a0;
- (void)_installedAppsDidChange:(id)a0;
- (id)_predicateForCurrentConnectionWithRequestKind:(long long)a0;
- (void)registerSubscription:(id)a0;
- (id)_subscriptionEntity;
- (id)_securityTaskForCurrentConnection;
- (void)_sendRemoteNotification;
- (id)_predicateForPersistentAttributesOfSubscriptions:(id)a0 withEntity:(id)a1 forFiltering:(BOOL)a2;
- (void).cxx_destruct;
- (void)removeSubscriptions:(id)a0;
- (long long)_saveChangesToContext:(id)a0 withDate:(id)a1;
- (id)_fetchRequest;
- (id)init;
- (BOOL)_saveChangesToContext:(id)a0;
- (void)fetchActiveSubscriptionsWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)registerSubscription:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)removeSubscriptions:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)dealloc;

@end
