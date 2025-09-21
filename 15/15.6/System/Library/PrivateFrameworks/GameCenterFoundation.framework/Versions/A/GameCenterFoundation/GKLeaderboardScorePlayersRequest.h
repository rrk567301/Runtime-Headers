@class NSArray;

@interface GKLeaderboardScorePlayersRequest : GKLeaderboardScoreRequest

@property (copy, nonatomic) NSArray *playerInternals;

+ (char)supportsSecureCoding;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
