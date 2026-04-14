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
+ (id)_sharedInstanceManager;
+ (id)sharedMonitorForIdentity:(id)a0;

- (void)_endObservingSubscriptionStatus;
- (void)_invokeAccessHandlersWithSubscriptionStatus:(id)a0 error:(id)a1;
- (void)dealloc;
- (void)_handleActiveUserIdentityDidChangeRemoteNotification;
- (BOOL)_isMonitoringSubscriptionStatusForAutoupdatingIdentity;
- (void)refreshSubscriptionStatus;
- (void)_beginObservingSubscriptionStatus;
- (void)_handleHomeManagerPropertiesDidChange:(id)a0;
- (void)_updateWithSubscriptionStatus:(id)a0;
- (id)_initWithIdentityContext:(id)a0;
- (void)_handleSubscriptionStatusDidChange:(id)a0;
- (id)description;
- (void)endObservingSubscriptionStatusWithToken:(id)a0;
- (id)beginObservingSubscriptionStatusWithHandler:(id /* block */)a0;
- (id)_effectiveIdentityForRequestingSubscriptionStatus;
- (void)performBlockWithLoadedSubscriptionStatus:(id /* block */)a0;
- (void)_requestSubscriptionStatusWithCachingPolicy:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_handleUserIdentityStoreDidChange:(id)a0;
- (void).cxx_destruct;

@end
