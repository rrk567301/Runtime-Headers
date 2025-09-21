@class MPVector;

@interface MPAnimationKeyframeVector : MPAnimationKeyframe

@property (copy, nonatomic) MPVector *vector;

+ (BOOL)supportsSecureCoding;
+ (id)keyframeVectorWithVector:(id)a0 atTime:(double)a1;
+ (id)keyframeVectorWithVector:(id)a0 atTime:(double)a1 offsetType:(unsigned long long)a2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)keyframe;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initKeyframeVectorWithVector:(id)a0 atTime:(double)a1 offsetType:(unsigned long long)a2;

@end
