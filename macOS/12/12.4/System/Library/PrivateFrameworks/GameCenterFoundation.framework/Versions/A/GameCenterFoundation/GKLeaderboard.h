@class NSArray, NSString, GKLeaderboardInternal, GKScore, NSDate;
@protocol GKLeaderboardDelegate;

@interface GKLeaderboard : NSObject

@property (retain, nonatomic) NSArray *players;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (copy, nonatomic) NSString *category;
@property (retain) NSArray *scores;
@property long long timeScope;
@property long long playerScope;
@property (copy) NSString *identifier;
@property struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly) unsigned long long maxRange;
@property (readonly, getter=isLoading) BOOL loading;
@property (retain) GKLeaderboardInternal *internal;
@property (weak, nonatomic) id<GKLeaderboardDelegate> delegate;
@property (retain) GKScore *localPlayerScore;
@property (nonatomic) int loadingCount;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) long long overallRank;
@property (readonly, nonatomic) long long overallRankCount;
@property (readonly, nonatomic) long long friendRank;
@property (readonly, nonatomic) long long friendRankCount;
@property (readonly, copy) NSString *title;
@property (readonly, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic) NSString *baseLeaderboardID;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *nextStartDate;
@property (readonly, nonatomic) double duration;

+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (void)loadLeaderboardsForGame:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)loadLeaderboardsForGame:(id)a0 forSet:(id)a1 withPlayer:(id)a2 withCompletionHandler:(id /* block */)a3;
+ (void)loadLeaderboardsForGame:(id)a0 withPlayer:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (void)loadLeaderboardsWithIDs:(id)a0 setIdentifier:(id)a1 completionHandler:(id /* block */)a2;
+ (void)submitScore:(long long)a0 context:(unsigned long long)a1 player:(id)a2 leaderboardIDs:(id)a3 completionHandler:(id /* block */)a4;
+ (void)loadLeaderboardsWithIDs:(id)a0 completionHandler:(id /* block */)a1;
+ (void)loadCategoriesWithCompletionHandler:(id /* block */)a0;
+ (void)loadLeaderboardsWithCompletionHandler:(id /* block */)a0;
+ (void)loadLeaderboardWithIdentifier:(id)a0 forGame:(id)a1 withPlayer:(id)a2 withCompletionHandler:(id /* block */)a3;
+ (void)setDefaultLeaderboard:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)loadHighlightsWithPlayerScope:(long long)a0 timeScope:(long long)a1 handler:(id /* block */)a2;

- (BOOL)isEqual:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)startWithHandler:(id /* block */)a0;
- (id)initWithInternalRepresentation:(id)a0;
- (id)creator;
- (void)loadScoresWithCompletionHandler:(id /* block */)a0;
- (id)initWithPlayers:(id)a0;
- (void)loadScoresForGame:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)incrementLoadingCountAtomically;
- (id)scoreRequestForGame:(id)a0;
- (void)loadScoresForRequest:(id)a0 handler:(id /* block */)a1;
- (void)decrementLoadingCountAtomically;
- (void)loadEntriesWithGameDescriptor:(id)a0 playerScope:(long long)a1 timeScope:(long long)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 completionHandler:(id /* block */)a4;
- (id)initWithPlayerIDs:(id)a0;
- (void)loadPreviousOccurrenceWithCompletionHandler:(id /* block */)a0;
- (void)submitScore:(long long)a0 context:(unsigned long long)a1 player:(id)a2 completionHandler:(id /* block */)a3;
- (void)loadEntriesForPlayerScope:(long long)a0 timeScope:(long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 completionHandler:(id /* block */)a3;
- (void)loadEntriesForPlayers:(id)a0 timeScope:(long long)a1 completionHandler:(id /* block */)a2;
- (void)loadSummaryWithTimeScope:(long long)a0 completionHandler:(id /* block */)a1;
- (void)endWithHandler:(id /* block */)a0;
- (void)deleteWithHandler:(id /* block */)a0;

@end
