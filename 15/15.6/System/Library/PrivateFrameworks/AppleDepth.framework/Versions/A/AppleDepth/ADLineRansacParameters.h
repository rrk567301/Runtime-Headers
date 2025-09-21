@interface ADLineRansacParameters : NSObject

@property (nonatomic) char constantSlope;
@property (nonatomic) int maxIterations;
@property (nonatomic) float threshold;
@property (nonatomic) float minInlinersRatio;
@property (nonatomic) unsigned int seed;
@property (nonatomic) char errorByY;

- (id)init;

@end
