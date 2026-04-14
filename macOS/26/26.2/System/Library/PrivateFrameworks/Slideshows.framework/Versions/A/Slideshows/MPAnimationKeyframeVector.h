@class MPVector;

@interface MPAnimationKeyframeVector : MPAnimationKeyframe

@property (copy, nonatomic) MPVector *vector;

+ (BOOL)supportsSecureCoding;
+ (id)keyframeVectorWithVector:(id)a0 atTime:(double)a1;
+ (id)keyframeVectorWithVector:(id)a0 atTime:(double)a1 offsetType:(unsigned long long)a2;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)keyframe;
- (void)dealloc;
- (id)initKeyframeVectorWithVector:(id)a0 atTime:(double)a1 offsetType:(unsigned long long)a2;

@end
