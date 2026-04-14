@class NSString, IDSInternalQueueController, _IDSIDQueryController;

@interface IDSIDQueryController : NSObject <IDSDaemonListenerProtocol> {
    _IDSIDQueryController *_internal;
    IDSInternalQueueController *_queueController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)addDelegate:(id)a0 forService:(id)a1 listenerID:(id)a2 queue:(id)a3;
- (void)removeDelegate:(id)a0 forService:(id)a1 listenerID:(id)a2;
- (BOOL)refreshIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (BOOL)currentIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (BOOL)participantsForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (id)_refreshIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2;
- (BOOL)refreshIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 errorCompletionBlock:(id /* block */)a5;
- (id)_refreshIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3;
- (BOOL)refreshIDStatusForDestination:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (BOOL)_hasCacheForService:(id)a0;
- (void)dealloc;
- (long long)_refreshIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2;
- (BOOL)requiredIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (BOOL)_warmupQueryCacheForService:(id)a0;
- (BOOL)requiredIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (BOOL)requestIDStatusForDestination:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (BOOL)forceRefreshIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (id)_currentCachedRemoteDevicesForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2;
- (long long)_currentIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2;
- (BOOL)currentIDStatusForDestination:(id)a0 service:(id)a1 respectExpiry:(BOOL)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (void)removeDelegate:(id)a0;
- (void)flushQueryCache;
- (id)_currentIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 respectExpiry:(BOOL)a3 listenerID:(id)a4;
- (id)init;
- (BOOL)currentIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (BOOL)refreshIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (id)_currentIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3;
- (void)setFromID:(id)a0;
- (BOOL)_flushQueryCacheForService:(id)a0;
- (BOOL)requestIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (BOOL)refreshIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 errorCompletionBlock:(id /* block */)a4;
- (long long)_currentCachedIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2;
- (id)_currentIDStatusForDestinations:(id)a0 service:(id)a1 respectExpiry:(BOOL)a2 listenerID:(id)a3;
- (void)addListenerID:(id)a0 forService:(id)a1;
- (long long)_currentIDStatusForDestination:(id)a0 service:(id)a1 preferredFromID:(id)a2 respectExpiry:(BOOL)a3 listenerID:(id)a4;
- (long long)_refreshIDStatusForDestination:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3;
- (BOOL)removeListenerID:(id)a0 forService:(id)a1;
- (BOOL)idInfoForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 infoTypes:(unsigned long long)a3 options:(id)a4 listenerID:(id)a5 queue:(id)a6 completionBlock:(id /* block */)a7;
- (BOOL)currentIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 respectExpiry:(BOOL)a3 listenerID:(id)a4 queue:(id)a5 completionBlock:(id /* block */)a6;
- (long long)_currentIDStatusForDestination:(id)a0 service:(id)a1 respectExpiry:(BOOL)a2 listenerID:(id)a3;
- (void)ktPeerVerificationResultsUpdated:(id)a0 forService:(id)a1;
- (id)_currentCachedRemoteDevicesForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3;
- (BOOL)currentIDStatusForDestination:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (long long)_currentIDStatusForDestination:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3;
- (BOOL)participantsForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (BOOL)forceRefreshIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (BOOL)refreshIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (BOOL)currentRemoteDevicesForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlockWithError:(id /* block */)a4;
- (BOOL)currentIDStatusForDestination:(id)a0 service:(id)a1 preferredFromID:(id)a2 respectExpiry:(BOOL)a3 listenerID:(id)a4 queue:(id)a5 completionBlock:(id /* block */)a6;
- (BOOL)requiredIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (BOOL)currentRemoteDevicesForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (BOOL)currentRemoteDevicesForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlockWithError:(id /* block */)a5;
- (BOOL)requestIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (void)_setCurrentIDStatus:(long long)a0 forDestination:(id)a1 service:(id)a2;
- (BOOL)currentIDStatusForDestinations:(id)a0 service:(id)a1 respectExpiry:(BOOL)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (BOOL)currentIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (id)_currentIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2;
- (BOOL)requiredIDStatusForDestination:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (BOOL)idInfoForDestinations:(id)a0 service:(id)a1 infoTypes:(unsigned long long)a2 options:(id)a3 listenerID:(id)a4 queue:(id)a5 completionBlock:(id /* block */)a6;
- (BOOL)currentRemoteDevicesForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (void).cxx_destruct;
- (BOOL)requestIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;

@end
