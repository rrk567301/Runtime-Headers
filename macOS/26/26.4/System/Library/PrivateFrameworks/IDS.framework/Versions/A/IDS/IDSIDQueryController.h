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
- (long long)_refreshIDStatusForDestination:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3;
- (BOOL)requestIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (BOOL)currentRemoteDevicesForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (id)_currentIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3;
- (BOOL)currentRemoteDevicesForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlockWithError:(id /* block */)a4;
- (BOOL)_flushQueryCacheForService:(id)a0;
- (BOOL)idInfoForDestinations:(id)a0 service:(id)a1 infoTypes:(unsigned long long)a2 options:(id)a3 listenerID:(id)a4 queue:(id)a5 completionBlock:(id /* block */)a6;
- (BOOL)currentRemoteDevicesForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlockWithError:(id /* block */)a5;
- (BOOL)refreshIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (BOOL)currentIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (BOOL)_warmupQueryCacheForService:(id)a0;
- (id)_refreshIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3;
- (BOOL)refreshIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (BOOL)currentIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (void)removeDelegate:(id)a0;
- (BOOL)requiredIDStatusForDestination:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (BOOL)currentIDStatusForDestinations:(id)a0 service:(id)a1 respectExpiry:(BOOL)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (BOOL)idInfoForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 infoTypes:(unsigned long long)a3 options:(id)a4 listenerID:(id)a5 queue:(id)a6 completionBlock:(id /* block */)a7;
- (BOOL)requiredIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (BOOL)refreshIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 errorCompletionBlock:(id /* block */)a5;
- (BOOL)currentIDStatusForDestination:(id)a0 service:(id)a1 respectExpiry:(BOOL)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (void)setFromID:(id)a0;
- (id)_currentCachedRemoteDevicesForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2;
- (long long)_currentIDStatusForDestination:(id)a0 service:(id)a1 respectExpiry:(BOOL)a2 listenerID:(id)a3;
- (id)_currentIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2;
- (BOOL)requestIDStatusForDestination:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (long long)_refreshIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2;
- (BOOL)_hasCacheForService:(id)a0;
- (void)addDelegate:(id)a0 forService:(id)a1 listenerID:(id)a2 queue:(id)a3;
- (BOOL)forceRefreshIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (void).cxx_destruct;
- (BOOL)forceRefreshIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (void)removeDelegate:(id)a0 forService:(id)a1 listenerID:(id)a2;
- (BOOL)currentIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 respectExpiry:(BOOL)a3 listenerID:(id)a4 queue:(id)a5 completionBlock:(id /* block */)a6;
- (id)_currentCachedRemoteDevicesForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3;
- (BOOL)removeListenerID:(id)a0 forService:(id)a1;
- (BOOL)requestIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (void)ktPeerVerificationResultsUpdated:(id)a0 forService:(id)a1 timestamp:(id)a2 queryID:(id)a3;
- (BOOL)currentIDStatusForDestination:(id)a0 service:(id)a1 preferredFromID:(id)a2 respectExpiry:(BOOL)a3 listenerID:(id)a4 queue:(id)a5 completionBlock:(id /* block */)a6;
- (void)addListenerID:(id)a0 forService:(id)a1;
- (long long)_currentIDStatusForDestination:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3;
- (id)init;
- (BOOL)refreshIDStatusForDestination:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (void)_setCurrentIDStatus:(long long)a0 forDestination:(id)a1 service:(id)a2;
- (BOOL)currentRemoteDevicesForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (BOOL)participantsForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (id)_currentIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 respectExpiry:(BOOL)a3 listenerID:(id)a4;
- (BOOL)requestIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (long long)_currentCachedIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2;
- (id)_currentIDStatusForDestinations:(id)a0 service:(id)a1 respectExpiry:(BOOL)a2 listenerID:(id)a3;
- (id)_refreshIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2;
- (long long)_currentIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2;
- (BOOL)currentIDStatusForDestination:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (long long)_currentIDStatusForDestination:(id)a0 service:(id)a1 preferredFromID:(id)a2 respectExpiry:(BOOL)a3 listenerID:(id)a4;
- (BOOL)requiredIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (void)flushQueryCache;
- (void)dealloc;
- (BOOL)refreshIDStatusForDestinations:(id)a0 service:(id)a1 preferredFromID:(id)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (BOOL)currentIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (BOOL)participantsForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (BOOL)requiredIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (BOOL)refreshIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 errorCompletionBlock:(id /* block */)a4;

@end
