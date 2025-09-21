@class NSSet, NSNumber;

@interface SCDAGoodnessScoreContext : NSObject

@property (copy, nonatomic) NSSet *reasons;
@property (nonatomic) double mediaPlaybackInterruptedTime;
@property (nonatomic) BOOL recentlyWonBySmallAmount;
@property (retain, nonatomic) NSNumber *adjustedScoreOverride;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
