@class NSString, NSMutableDictionary, NSMapTable, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface _IDSIDQueryController : NSObject {
    NSString *_listenerGUID;
    NSMutableDictionary *_listeners;
    NSMutableDictionary *_idStatusCache;
    NSMutableDictionary *_transactionIDToBlockMap;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_serviceToken;
    NSMapTable *_delegateToInfo;
    NSMutableDictionary *_listenerIDToServicesMap;
    id _delegateContext;
}

+ (void)initialize;
+ (id)_createXPCConnectionOnQueue:(id)a0;

- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)addDelegate:(id)a0 forService:(id)a1 listenerID:(id)a2 queue:(id)a3;
- (void)removeDelegate:(id)a0 forService:(id)a1 listenerID:(id)a2;
- (id)__sendMessage:(id)a0 queue:(id)a1 reply:(id /* block */)a2 failBlock:(id /* block */)a3 waitForReply:(BOOL)a4;
- (void)_requestCachedStatusForDestinations:(id)a0 fromID:(id)a1 service:(id)a2 waitForReply:(BOOL)a3 respectExpiry:(BOOL)a4 listenerID:(id)a5 completionBlock:(id /* block */)a6;
- (void)IDQueryCompletedWithFromURI:(id)a0 idStatusUpdates:(id)a1 service:(id)a2 success:(BOOL)a3 error:(id)a4;
- (BOOL)_sync_refreshIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 completionBlock:(id /* block */)a4;
- (void)___oldDealloc;
- (BOOL)refreshIDStatusForDestination:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (BOOL)_hasCacheForService:(id)a0;
- (void)dealloc;
- (void)_callDelegatesWithBlock:(id /* block */)a0 delegateMap:(id)a1;
- (BOOL)_warmupQueryCacheForService:(id)a0;
- (void)_requestCacheForService:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)requiredIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (BOOL)_currentRemoteDevicesForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 waitForReply:(BOOL)a5 completionBlock:(id /* block */)a6 completionBlockWithError:(id /* block */)a7;
- (void)_purgeIDStatusCacheAfter:(double)a0;
- (void)removeDelegate:(id)a0;
- (void)flushQueryCache;
- (BOOL)refreshIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 forceRefresh:(BOOL)a4 queue:(id)a5 completionBlock:(id /* block */)a6;
- (id)init;
- (void)setFromID:(id)a0;
- (void)_purgeIDStatusCache;
- (BOOL)_flushQueryCacheForService:(id)a0;
- (void)_callDelegatesForService:(id)a0 destinationToVerifierResult:(id)a1;
- (void)daemonDisconnected;
- (long long)_currentCachedIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2;
- (id)_cacheForService:(id)a0;
- (void)_disconnectFromQueryService;
- (void)_requestRemoteDevicesForDestination:(id)a0 fromID:(id)a1 service:(id)a2 listenerID:(id)a3 waitForReply:(BOOL)a4 completionBlock:(id /* block */)a5;
- (void)_requestIDInfoForDestinations:(id)a0 fromID:(id)a1 service:(id)a2 infoTypes:(unsigned long long)a3 options:(id)a4 listenerID:(id)a5 queue:(id)a6 completionBlock:(id /* block */)a7;
- (void)_connect;
- (void)addListenerID:(id)a0 forService:(id)a1;
- (BOOL)_sync_currentIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 respectExpiry:(BOOL)a3 listenerID:(id)a4 completionBlock:(id /* block */)a5;
- (void)_updateCacheWithDictionary:(id)a0 service:(id)a1;
- (id)_cachedStatusForDestination:(id)a0 service:(id)a1;
- (BOOL)removeListenerID:(id)a0 forService:(id)a1;
- (void)_callDelegatesWithBlock:(id /* block */)a0;
- (BOOL)idInfoForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 infoTypes:(unsigned long long)a3 options:(id)a4 listenerID:(id)a5 queue:(id)a6 completionBlock:(id /* block */)a7;
- (BOOL)currentIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 respectExpiry:(BOOL)a3 listenerID:(id)a4 queue:(id)a5 completionBlock:(id /* block */)a6;
- (id)_delegateMapForListenerID:(id)a0 service:(id)a1;
- (BOOL)currentIDStatusForDestination:(id)a0 service:(id)a1 preferredFromID:(id)a2 respectExpiry:(BOOL)a3 listenerID:(id)a4 queue:(id)a5 completionBlock:(id /* block */)a6;
- (BOOL)_sync_currentRemoteDevicesForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 completionBlock:(id /* block */)a4;
- (BOOL)currentRemoteDevicesForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (BOOL)currentRemoteDevicesForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlockWithError:(id /* block */)a5;
- (void)_idStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 allowRenew:(BOOL)a4 respectExpiry:(BOOL)a5 waitForReply:(BOOL)a6 forceRefresh:(BOOL)a7 bypassLimit:(BOOL)a8 completionBlock:(id /* block */)a9;
- (void)_setCurrentIDStatus:(long long)a0 forDestination:(id)a1 service:(id)a2;
- (void)_requestStatusForDestinations:(id)a0 fromID:(id)a1 service:(id)a2 waitForReply:(BOOL)a3 forceRefresh:(BOOL)a4 bypassLimit:(BOOL)a5 listenerID:(id)a6 completionBlock:(id /* block */)a7;
- (BOOL)requiredIDStatusForDestination:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (void).cxx_destruct;
- (BOOL)_refreshIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 allowRefresh:(BOOL)a4 respectExpiry:(BOOL)a5 waitForReply:(BOOL)a6 forceRefresh:(BOOL)a7 bypassLimit:(BOOL)a8 queue:(id)a9 completionBlock:(id /* block */)a10;
- (id)initWithDelegateContext:(id)a0 queueController:(id)a1;

@end
