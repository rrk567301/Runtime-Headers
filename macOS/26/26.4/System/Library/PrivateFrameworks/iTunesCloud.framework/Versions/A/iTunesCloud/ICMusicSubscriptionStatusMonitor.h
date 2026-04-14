@class NSNumber, NSMutableDictionary, NSMutableArray, NSArray, ICMusicSubscriptionStatus, ICUserIdentityContext, ICUserIdentity;

@interface ICMusicSubscriptionStatusMonitor : NSObject {
    ICUserIdentityContext *_identityContext;
    NSNumber *_DSID;
    NSMutableDictionary *_observers;
    NSMutableArray *_accessHandlers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSArray *_notificationHandlers;
    ICMusicSubscriptionStatus *_subscriptionStatus;
}

@property (readonly, nonatomic) ICUserIdentity *identity;
@property (readonly, nonatomic) ICMusicSubscriptionStatus *subscriptionStatus;

+ (id)sharedMonitorForIdentity:(id)a0;
+ (id)sharedMonitorForIdentity:(id)a0 identityStore:(id)a1;
+ (id)_sharedInstanceManager;

- (void)_handleActiveUserIdentityDidChangeRemoteNotification;
- (id)_initWithIdentityContext:(id)a0;
- (void)_handleUserIdentityStoreDidChange:(id)a0;
- (void)refreshSubscriptionStatus;
- (void)_invokeAccessHandlersWithSubscriptionStatus:(id)a0 error:(id)a1;
- (void)_requestSubscriptionStatusWithCachingPolicy:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_beginObservingSubscriptionStatus;
- (void)_updateWithSubscriptionStatus:(id)a0;
- (void).cxx_destruct;
- (void)_endObservingSubscriptionStatus;
- (void)performBlockWithLoadedSubscriptionStatus:(id /* block */)a0;
- (BOOL)_isMonitoringSubscriptionStatusForAutoupdatingIdentity;
- (id)_effectiveIdentityForRequestingSubscriptionStatus;
- (id)description;
- (id)beginObservingSubscriptionStatusWithHandler:(id /* block */)a0;
- (void)_handleSubscriptionStatusDidChange:(id)a0;
- (void)endObservingSubscriptionStatusWithToken:(id)a0;
- (void)_handleHomeManagerPropertiesDidChange:(id)a0;
- (void)dealloc;

@end
