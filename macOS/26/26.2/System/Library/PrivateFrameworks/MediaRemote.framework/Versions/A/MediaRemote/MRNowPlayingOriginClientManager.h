@class NSArray, NSOperationQueue, NSMutableDictionary;

@interface MRNowPlayingOriginClientManager : NSObject <MRNowPlayingClientState> {
    NSMutableDictionary *_originClients;
    NSMutableDictionary *_originClientRequests;
    id /* block */ _createPlayerCallback;
    id /* block */ _destroyPlayerCallback;
    id /* block */ _generatePlayerIDCallback;
    NSMutableDictionary *_activeSystemEndpointUIDs;
    NSMutableDictionary *_activeSystemEndpointUIDCompletions;
    NSMutableDictionary *_resolveActiveSystemEndpointCompletions;
}

@property (copy, nonatomic) id /* block */ createNewPlayerCallback;
@property (copy, nonatomic) id /* block */ destroyPlayerCallback;
@property (copy, nonatomic) id /* block */ generatePlayerIDCallback;
@property (readonly, nonatomic) NSArray *originClients;
@property (readonly, nonatomic) NSArray *originClientRequests;
@property (readonly, nonatomic) NSOperationQueue *playbackQueueDataSourceOperationQueue;

+ (id)sharedManager;

- (void)restoreNowPlayingClientState;
- (void)resolveActiveSystemEndpointWithType:(long long)a0 timeout:(double)a1 queue:(id)a2 completion:(id /* block */)a3;
- (id)playerClientForPlayerPath:(id)a0;
- (id)existingClientRequestsForPlayerPath:(id)a0;
- (id)originClientForOrigin:(id)a0;
- (id)debugDescription;
- (id)existingPlayerClientRequestsForPlayerPath:(id)a0;
- (void).cxx_destruct;
- (id)existingOriginClientRequestsForPlayerPath:(id)a0;
- (void)handleActiveSystemEndpointOutputDeviceUIDForType:(long long)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)removeOrigin:(id)a0;
- (void)removeOriginRequests:(id)a0;
- (id)clientRequestsForPlayerPath:(id)a0;
- (id)createCustomOriginClientForOrigin:(id)a0 routingContextID:(id)a1;
- (id)localOriginClient;
- (id)playerClientRequestsForPlayerPath:(id)a0;
- (id)activeSystemEndpointOutputDeviceUIDForType:(long long)a0;
- (void)clearActiveSystemEndpointsWithReason:(id)a0;
- (id)clientForPlayerPath:(id)a0;
- (id)init;
- (id)originClientRequestsForPlayerPath:(id)a0;
- (id)originClientForPlayerPath:(id)a0;
- (void)updateActiveSystemEndpointOutputDeviceUID:(id)a0 forType:(long long)a1 reason:(id)a2;

@end
