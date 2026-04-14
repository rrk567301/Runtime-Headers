@class NSString, NSDictionary, ASDServiceBroker, NSObject;
@protocol OS_dispatch_queue, ASDAppStoreChangedObserver;

@interface ASDAppStoreService : NSObject <ASDServiceProvider> {
    int _badgesChangedNotificationToken;
    int _badgesChangedForAppStoreNotificationToken;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSDictionary *_badges;
    id<ASDAppStoreChangedObserver> _observer;
    ASDServiceBroker *_serviceBroker;
}

@property (weak) id<ASDAppStoreChangedObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interface;
+ (id)defaultService;

- (void)allBadgeIDsWithReplyHandler:(id /* block */)a0;
- (void)allBadgeMetricsWithReplyHandler:(id /* block */)a0;
- (id)init;
- (void)badgeCountWithReplyHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)removeBadgeIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)dealloc;
- (void)removeMetricsForBadgeIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)addBadgeIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)removeAllBadgeIDsWithReplyHandler:(id /* block */)a0;
- (void)launchAppStoreWithURL:(id)a0 withReplyHandler:(id /* block */)a1;
- (void)reloadWidgetOnConnectivityToEndpoint:(id)a0 parameters:(id)a1 replyHandler:(id /* block */)a2;
- (void)revokeAppConsentForAccountID:(id)a0 itemID:(id)a1 account:(id)a2 completionBlock:(id /* block */)a3;

@end
