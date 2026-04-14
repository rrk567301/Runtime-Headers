@class NSMutableDictionary, NSString, NSXPCConnection, NSOperationQueue, NSObject, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_source, NSCopying;

@interface ICMusicSubscriptionStatusController : NSObject <ICMusicSubscriptionStatusRemoteRequestingClient> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    unsigned long long _numberOfActiveRemoteRequests;
    NSOperationQueue *_operationQueue;
    id<NSCopying> _privacyAcknowledgementObservationToken;
    NSXPCConnection *_remoteRequestingClientConnection;
    NSUUID *_remoteRequestingClientConnectionIdentifier;
    NSObject<OS_dispatch_source> *_remoteRequestingClientConnectionInvalidationTimer;
    NSMutableDictionary *_statusHandlersForPendingIdenticalRequests;
    NSMutableDictionary *_pendingRequests;
}

@property (class, readonly, nonatomic) ICMusicSubscriptionStatusController *sharedStatusController;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_canConnectToMusicSubscriptionStatusService;

- (void)_deliverSubscriptionStatusResponse:(id)a0 forRequest:(id)a1 error:(id)a2;
- (void)_handleSeveredRemoteClientConnectionWithIdentifier:(id)a0;
- (void)setSubscriptionStatusFromResponsePayload:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_invalidateRemoteRequestingClientConnection;
- (void)performSubscriptionStatusRequest:(id)a0 withStatusHandler:(id /* block */)a1;
- (id)init;
- (void)deliverSubscriptionStatusResponse:(id)a0 forRemoteRequestWithUniqueIdentifier:(id)a1 error:(id)a2;
- (void)_handleSubscriptionStatusDidChangeDistributedNotification:(id)a0;
- (void)_handlePrivacyAcknowledgementRequirementChanged:(BOOL)a0;
- (void)refreshSubscriptionForUserIdentity:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_handleSubscriptionStatusCacheUnderlyingCachingPropertiesDidChangeNotification:(id)a0;
- (void)getSubscriptionStatusWithCompletionHandler:(id /* block */)a0;
- (void)_cancelRemoteRequestingClientConnectionInvalidationTimer;
- (void)getSubscriptionStatusForUserIdentity:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_handleSubscriptionStatusDidChangeFollowingPrivacyAcknowledgementNotification:(id)a0;
- (void)_scheduleInvalidationOfRemoteRequestingClientConnection;
- (void)invalidateCachedSubscriptionStatusWithCompletionHandler:(id /* block */)a0;
- (void)_didEndRemoteRequestWithUniqueIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)enableSubscriptionWithCompletionHandler:(id /* block */)a0;
- (BOOL)_willPerformSubscriptionStatusRequest:(id)a0 withStatusHandler:(id /* block */)a1;
- (id)_remoteRequestingClientConnection;
- (void)performSubscriptionStatusRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)dealloc;
- (void)_handleSubscriptionStatusCacheDidChangeNotification:(id)a0;
- (void)_cancelPendingRequests;
- (void)refreshSubscriptionWithCompletionHandler:(id /* block */)a0;
- (void)disableSubscriptionForUserIdentity:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)disableSubscriptionWithCompletionHandler:(id /* block */)a0;
- (void)_willBeginRemoteRequestWithUniqueIdentifier:(id)a0 statusHandler:(id /* block */)a1;
- (void)getSubscriptionStatusForUserIdentity:(id)a0 bypassingCache:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)invalidateCachedSubscriptionStatusForUserIdentity:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)refreshSubscriptionUsingRequestContext:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_remoteRequestingClientConnectionInvalidationTimerDidExpire;
- (void)enableSubscriptionForUserIdentity:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)setSubscriptionStatusFromResponsePayload:(id)a0 forUserIdentity:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
