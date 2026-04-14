@class VSSubscriptionPersistentContainer, NSString, VSRemoteNotifier, VSSubscriptionPredicateFactory;

@interface VSSubscriptionRegistry : NSObject <VSSubscriptionServiceProtocol>

@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier;
@property (retain, nonatomic) VSSubscriptionPersistentContainer *persistentContainer;
@property (retain, nonatomic) VSSubscriptionPredicateFactory *predicateFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)_saveChangesToContext:(id)a0 withDate:(id)a1;
- (id)_predicateForPersistentAttributesOfSubscriptions:(id)a0 withEntity:(id)a1 forFiltering:(BOOL)a2;
- (void)removeSubscriptions:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_subscriptionEntity;
- (id)_predicateForCurrentConnectionWithRequestKind:(long long)a0;
- (void).cxx_destruct;
- (void)_sendRemoteNotification;
- (void)registerSubscription:(id)a0;
- (void)_performBlock:(id /* block */)a0;
- (id)_fetchRequest;
- (void)fetchActiveSubscriptionsWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeSubscriptions:(id)a0;
- (void)registerSubscription:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)init;
- (void)_installedAppsDidChange:(id)a0;
- (BOOL)_saveChangesToContext:(id)a0;
- (id)_securityTaskForCurrentConnection;
- (void)dealloc;

@end
