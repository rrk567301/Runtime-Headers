@interface HazeProperties : NSObject

@property (nonatomic) float ispRes;
@property (nonatomic) float evmExpRatio;
@property (nonatomic) float evtBkt;
@property (nonatomic) float reluC1;
@property (nonatomic) float reluC2;
@property (nonatomic) float reluC3;
@property (nonatomic) float reluC4;
@property (nonatomic) float reluC5;
@property (nonatomic) float min_display_black;
@property (nonatomic) float sr_min;
@property (nonatomic) float sr_var;
@property (nonatomic) float sr_pow;
@property (nonatomic) float sr_sat;
@property (nonatomic) float maxHazePercentile;

- (id)init;
- (void)reset;

@end
