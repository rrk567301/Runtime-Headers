@class GKLeaderboardSummaryInternal;

@interface GKLeaderboardSummary : NSObject

@property (retain, nonatomic) GKLeaderboardSummaryInternal *internal;
@property (nonatomic) unsigned long long scoreValue;
@property (nonatomic) unsigned long long rank;
@property (nonatomic) unsigned long long totalEntries;
@property (nonatomic) unsigned long long friendRank;
@property (nonatomic) unsigned long long totalFriendEntries;

- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithInternalRepresentation:(id)a0;

@end
