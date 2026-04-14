@class NSObject, WLKSubscriptionData, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface WLKSubscriptionStore : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    int _subscriptionSyncSubscriptionDataDidChangeNotificationToken;
    WLKSubscriptionData *_subscriptionData;
}

+ (id)sharedInstance;

- (id)_connection;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)fetchSubscriptionData:(BOOL)a0 completion:(id /* block */)a1;
- (void)refreshSubscriptionDataIfNeeded;
- (BOOL)_isSubscriptionSyncInProgress;
- (void)_setIsSubscriptionSyncInProgress:(BOOL)a0;
- (id)cachedSubscriptionData;

@end
