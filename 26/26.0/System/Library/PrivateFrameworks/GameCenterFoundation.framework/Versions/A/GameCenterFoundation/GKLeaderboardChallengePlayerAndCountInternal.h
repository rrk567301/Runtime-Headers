@class NSString, NSNumber;

@interface GKLeaderboardChallengePlayerAndCountInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *playerID;
@property (retain, nonatomic) NSNumber *count;

+ (id)secureCodedPropertyKeys;
+ (id)initWithServerFragment:(id)a0;

- (void).cxx_destruct;

@end
