@class NSString, NSArray, NSURL, GKLeaderboard;

@interface GKChallengeDefinition : NSObject {
    void /* function */ identifier;
    void /* function */ groupIdentifier;
    void /* function */ title;
    void /* function */ details;
    void /* function */ durationOptions;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *groupIdentifier;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *details;
@property (nonatomic, readonly) BOOL isRepeatable;
@property (nonatomic, readonly) NSArray *durationOptions;
@property (nonatomic, readonly) GKLeaderboard *leaderboard;
@property (nonatomic, readonly) unsigned long long releaseState;
@property (nonatomic, readonly) NSURL *imageUrl;

+ (void)loadChallengeDefinitionsWithCompletionHandler:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (void)loadImageWithCompletionHandler:(id /* block */)a0;
- (void)hasActiveChallengesWithCompletionHandler:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 groupIdentifier:(id)a1 title:(id)a2 details:(id)a3 isRepeatable:(BOOL)a4 durationOptions:(id)a5 leaderboard:(id)a6 imageUrl:(id)a7 releaseState:(unsigned long long)a8;

@end
