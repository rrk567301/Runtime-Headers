@interface SMCT.MotionAssessorScore : NSObject

@property (nonatomic) float perp;
@property (nonatomic) float rot;
@property (nonatomic) float hPan;
@property (nonatomic) float vPan;

- (id)init;
- (float)getMax;
- (id)initWithPerp:(float)a0 rot:(float)a1 hPan:(float)a2 vPan:(float)a3;

@end
