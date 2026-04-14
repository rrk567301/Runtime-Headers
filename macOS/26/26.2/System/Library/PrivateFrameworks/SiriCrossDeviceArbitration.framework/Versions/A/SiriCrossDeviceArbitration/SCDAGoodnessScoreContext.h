@class NSSet, NSNumber;

@interface SCDAGoodnessScoreContext : NSObject

@property (copy, nonatomic) NSSet *reasons;
@property (nonatomic) double mediaPlaybackInterruptedTime;
@property (nonatomic) BOOL recentlyWonBySmallAmount;
@property (retain, nonatomic) NSNumber *adjustedScoreOverride;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
