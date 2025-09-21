@class IDSInternalQueueController, _IDSIDQueryController;

@interface IDSIDQueryController : NSObject {
    _IDSIDQueryController *_internal;
    IDSInternalQueueController *_queueController;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)flushQueryCache;
- (long long)_currentCachedIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2;
- (id)_currentCachedRemoteDevicesForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2;
- (id)_currentCachedRemoteDevicesForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3;
- (long long)_currentIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2;
- (long long)_currentIDStatusForDestination:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3;
- (long long)_currentIDStatusForDestination:(id)a0 service:(id)a1 preferredFromID:(id)a2 respectExpiry:(char)a3 listenerID:(id)a4;
- (long long)_currentIDStatusForDestination:(id)a0 service:(id)a1 respectExpiry:(char)a2 listenerID:(id)a3;
- (id)_currentIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2;
- (id)_currentIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3;
- (id)_currentIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 respectExpiry:(char)a3 listenerID:(id)a4;
- (id)_currentIDStatusForDestinations:(id)a0 service:(id)a1 respectExpiry:(char)a2 listenerID:(id)a3;
- (char)_flushQueryCacheForService:(id)a0;
- (char)_hasCacheForService:(id)a0;
- (long long)_refreshIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2;
- (long long)_refreshIDStatusForDestination:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3;
- (id)_refreshIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2;
- (id)_refreshIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3;
- (void)_setCurrentIDStatus:(long long)a0 forDestination:(id)a1 service:(id)a2;
- (char)_warmupQueryCacheForService:(id)a0;
- (void)addDelegate:(id)a0 forService:(id)a1 listenerID:(id)a2 queue:(id)a3;
- (void)addListenerID:(id)a0 forService:(id)a1;
- (char)currentIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (char)currentIDStatusForDestination:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (char)currentIDStatusForDestination:(id)a0 service:(id)a1 preferredFromID:(id)a2 respectExpiry:(char)a3 listenerID:(id)a4 queue:(id)a5 completionBlock:(id /* block */)a6;
- (char)currentIDStatusForDestination:(id)a0 service:(id)a1 respectExpiry:(char)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (char)currentIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (char)currentIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (char)currentIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 respectExpiry:(char)a3 listenerID:(id)a4 queue:(id)a5 completionBlock:(id /* block */)a6;
- (char)currentIDStatusForDestinations:(id)a0 service:(id)a1 respectExpiry:(char)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (char)currentRemoteDevicesForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (char)currentRemoteDevicesForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlockWithError:(id /* block */)a4;
- (char)currentRemoteDevicesForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (char)currentRemoteDevicesForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlockWithError:(id /* block */)a5;
- (char)forceRefreshIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (char)forceRefreshIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (char)idInfoForDestinations:(id)a0 service:(id)a1 infoTypes:(unsigned long long)a2 options:(id)a3 listenerID:(id)a4 queue:(id)a5 completionBlock:(id /* block */)a6;
- (char)idInfoForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 infoTypes:(unsigned long long)a3 options:(id)a4 listenerID:(id)a5 queue:(id)a6 completionBlock:(id /* block */)a7;
- (char)participantsForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (char)participantsForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (char)refreshIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (char)refreshIDStatusForDestination:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (char)refreshIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (char)refreshIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 errorCompletionBlock:(id /* block */)a4;
- (char)refreshIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (char)refreshIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 errorCompletionBlock:(id /* block */)a5;
- (void)removeDelegate:(id)a0 forService:(id)a1 listenerID:(id)a2;
- (char)removeListenerID:(id)a0 forService:(id)a1;
- (char)requestIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (char)requestIDStatusForDestination:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (char)requestIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (char)requestIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (char)requiredIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (char)requiredIDStatusForDestination:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (char)requiredIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (char)requiredIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (void)setFromID:(id)a0;

@end
