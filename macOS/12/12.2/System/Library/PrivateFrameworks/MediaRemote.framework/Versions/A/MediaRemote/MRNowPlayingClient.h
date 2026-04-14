@class NSObject, NSArray, MRPlayerPath, MRClient, NSMutableArray, MRPlayer;
@protocol OS_dispatch_queue;

@interface MRNowPlayingClient : NSObject <MRNowPlayingClientState> {
    MRPlayer *_activePlayer;
    NSMutableArray *_playerClients;
    BOOL _isForeground;
    BOOL _canBeNowPlaying;
    double _canBeNowPlayingTimestamp;
    BOOL _perPlayerCanBeNowPlaying;
    NSObject<OS_dispatch_queue> *_replayQueue;
    NSMutableArray *_commandQueue;
}

@property (nonatomic) BOOL canBeNowPlaying;
@property (nonatomic) BOOL perPlayerCanBeNowPlaying;
@property (retain, nonatomic) MRPlayerPath *playerPath;
@property (retain, nonatomic) MRClient *client;
@property (readonly, nonatomic) MRPlayerPath *activePlayerPath;
@property (readonly, nonatomic) NSArray *playerClients;
@property (nonatomic) BOOL useMediaRemoteActivePlayerHeuristic;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithPlayerPath:(id)a0;
- (void)updateActivePlayerPath:(id)a0 completion:(id /* block */)a1;
- (void)requestActiveForPlayerPath:(id)a0 completion:(id /* block */)a1;
- (void)reevaluateActivePlayerWithReason:(id)a0 completion:(id /* block */)a1;
- (void)removePlayer:(id)a0;
- (void)mergeClient:(id)a0;
- (BOOL)canBeNowPlayingForPlayer:(id)a0;
- (void)restoreNowPlayingClientState;
- (void)enqueueCommand:(unsigned int)a0 options:(id)a1 playerPath:(id)a2 commandCompletion:(id /* block */)a3;
- (void)sendQueuedCommandsWithReason:(id)a0;
- (id)nowPlayingPlayerClientForPlayerPath:(id)a0;
- (void)setActivePlayerPath:(id)a0 reason:(id)a1 completion:(id /* block */)a2;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)_avSessionMediaServicesResetNotification:(id)a0;

@end
