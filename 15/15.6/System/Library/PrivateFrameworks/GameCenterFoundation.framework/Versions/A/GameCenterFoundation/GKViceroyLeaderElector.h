@class NSString, NSMutableDictionary, NSDictionary;
@protocol GKTransportMatchDataDelegate;

@interface GKViceroyLeaderElector : NSObject

@property (copy, nonatomic) id /* block */ chooseHostCompletion;
@property (retain, nonatomic) NSMutableDictionary *hostScores;
@property (nonatomic) char hostScoreForQuery;
@property (nonatomic) NSString *localPlayerPeerID;
@property (nonatomic) char needHostScore;
@property (retain, nonatomic) NSDictionary *networkStatistics;
@property (weak, nonatomic) id<GKTransportMatchDataDelegate> matchDataDelegate;

- (void).cxx_destruct;
- (void)addHostScore:(int)a0 forPlayer:(id)a1;
- (void)calculateHostScore;
- (void)chooseBestHostingPlayerWithCompletionHandler:(id /* block */)a0;
- (char)haveAllHostScores;
- (id)initWithMatchDataDelegate:(id)a0;
- (void)networkStatisticsDidChange:(id)a0 localPlayerPeerID:(id)a1;
- (void)receivedChooseHostData:(id)a0 fromPlayerID:(id)a1;
- (char)selectHostIfRequestedAndAllScored;
- (void)sendHostScoreAsQuery:(char)a0;

@end
