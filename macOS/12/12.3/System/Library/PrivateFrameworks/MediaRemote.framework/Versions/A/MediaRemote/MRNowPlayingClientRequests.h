@class MRClient, NSArray, NSMutableArray;

@interface MRNowPlayingClientRequests : NSObject <MRNowPlayingClientState> {
    NSMutableArray *_playerClients;
}

@property (readonly, nonatomic) MRClient *client;
@property (readonly, nonatomic) NSArray *nowPlayingClients;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithClient:(id)a0;
- (void)removePlayer:(id)a0;
- (void)restoreNowPlayingClientState;
- (id)nowPlayingPlayerClientRequestsForPlayerPath:(id)a0;
- (id)existingNowPlayingPlayerClientRequestsForPlayerPath:(id)a0;

@end
