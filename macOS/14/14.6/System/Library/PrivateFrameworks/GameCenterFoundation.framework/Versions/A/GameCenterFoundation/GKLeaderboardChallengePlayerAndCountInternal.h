@class NSString, NSNumber;

@interface GKLeaderboardChallengePlayerAndCountInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *playerID;
@property (retain, nonatomic) NSNumber *count;

+ (BOOL)supportsSecureCoding;
+ (id)initWithServerFragment:(id)a0;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;

@end
