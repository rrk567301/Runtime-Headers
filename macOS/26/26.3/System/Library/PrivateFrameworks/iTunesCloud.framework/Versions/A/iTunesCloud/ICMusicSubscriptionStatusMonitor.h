@class NSNumber, NSMutableDictionary, NSMutableArray, NSArray, ICMusicSubscriptionStatus, ICUserIdentityContext, ICUserIdentity;

@interface ICMusicSubscriptionStatusMonitor : NSObject {
    ICUserIdentityContext *_identityContext;
    NSNumber *_DSID;
    NSMutableDictionary *_observers;
    NSMutableArray *_accessHandlers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSArray *_notificationHandlers;
}

@property (readonly, nonatomic) ICUserIdentity *identity;
@property (readonly, nonatomic) ICMusicSubscriptionStatus *subscriptionStatus;

+ (id)sharedMonitorForIdentity:(id)a0 identityStore:(id)a1;
+ (id)sharedMonitorForIdentity:(id)a0;
+ (id)_sharedInstanceManager;

- (void)_invokeAccessHandlersWithSubscriptionStatus:(id)a0 error:(id)a1;
- (void)_handleUserIdentityStoreDidChange:(id)a0;
- (void)_updateWithSubscriptionStatus:(id)a0;
- (void)performBlockWithLoadedSubscriptionStatus:(id /* block */)a0;
- (void)_beginObservingSubscriptionStatus;
- (id)description;
- (id)beginObservingSubscriptionStatusWithHandler:(id /* block */)a0;
- (void)endObservingSubscriptionStatusWithToken:(id)a0;
- (void)_requestSubscriptionStatusWithCachingPolicy:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_handleActiveUserIdentityDidChangeRemoteNotification;
- (void).cxx_destruct;
- (void)_handleSubscriptionStatusDidChange:(id)a0;
- (void)refreshSubscriptionStatus;
- (BOOL)_isMonitoringSubscriptionStatusForAutoupdatingIdentity;
- (void)_endObservingSubscriptionStatus;
- (void)dealloc;
- (id)_effectiveIdentityForRequestingSubscriptionStatus;
- (void)_handleHomeManagerPropertiesDidChange:(id)a0;
- (id)_initWithIdentityContext:(id)a0;

@end
