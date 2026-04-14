@class NSMutableSet;

@interface MPAnimationPathKeyframed : MPAnimationPath {
    NSMutableSet *_keyframes;
}

+ (BOOL)supportsSecureCoding;
+ (id)animationPath;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)cleanup;
- (id)parent;
- (void)dump;
- (id)keyframes;
- (id)orderedKeyframes;
- (id)createKeyframeWithPoint:(struct CGPoint { double x0; double x1; })a0 atTime:(double)a1 offsetType:(unsigned long long)a2;
- (id)createKeyframeWithScalar:(double)a0 atTime:(double)a1 offsetType:(unsigned long long)a2;
- (double)relativeTimeForKeyframe:(id)a0;
- (id)fullDebugLog;
- (void)setAnimationPath:(id)a0;
- (void)copyKeyframes:(id)a0;
- (void)addKeyframes:(id)a0;
- (void)removeKeyframe:(id)a0;
- (void)addKeyframe:(id)a0;
- (id)createKeyframeWithScalar:(double)a0 atTime:(double)a1;
- (id)createKeyframeWithPoint:(struct CGPoint { double x0; double x1; })a0 atTime:(double)a1;
- (double)parentPhaseInDuration;
- (double)parentPhaseOutDuration;
- (double)parentMainDuration;
- (void)removeKeyframes:(id)a0;
- (void)removeAllKeyframes;
- (id)newKeyframeWithScalar:(double)a0 atTime:(double)a1;
- (id)newKeyframeWithPoint:(struct CGPoint { double x0; double x1; })a0 atTime:(double)a1;
- (id)createKeyframeWithVector:(id)a0 atTime:(double)a1;
- (id)createKeyframeWithVector:(id)a0 atTime:(double)a1 offsetType:(unsigned long long)a2;
- (id)createKeyframeWithFunction:(id)a0 atTime:(double)a1 forDuration:(double)a2;
- (id)createKeyframeWithFunction:(id)a0 atTime:(double)a1 offsetType:(unsigned long long)a2 forDuration:(double)a3;

@end
