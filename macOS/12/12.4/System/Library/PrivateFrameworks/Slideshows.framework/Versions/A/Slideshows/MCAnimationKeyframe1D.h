@interface MCAnimationKeyframe1D : MCAnimationKeyframe

@property (nonatomic) float value;

+ (id)keyframeWithScalar:(float)a0 atTime:(double)a1 offsetKind:(int)a2;
+ (id)keyframeWithScalar:(float)a0 atTime:(double)a1;

- (id)description;
- (id)xmlElement;
- (id)imprint;
- (id)initWithImprint:(id)a0;
- (void)_copySelfToSnapshot:(id)a0;

@end
