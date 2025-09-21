@interface SMCT.MotionFeature : NSObject

@property (nonatomic) float mean;
@property (nonatomic) float std;

- (id)init;
- (id)initWithMean:(float)a0 std:(float)a1;

@end
