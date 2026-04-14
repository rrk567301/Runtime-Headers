@class NSString, NSNumber;

@interface GKLeaderboardChallengeBundleAndCountInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSNumber *count;

+ (id)secureCodedPropertyKeys;
+ (id)initWithServerFragment:(id)a0;

- (void).cxx_destruct;

@end
