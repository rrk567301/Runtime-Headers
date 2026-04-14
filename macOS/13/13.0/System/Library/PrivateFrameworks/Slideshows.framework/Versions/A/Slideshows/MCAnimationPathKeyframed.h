@class NSSet, NSMutableSet, NSArray;

@interface MCAnimationPathKeyframed : MCAnimationPath {
    NSMutableSet *mKeyframes;
    NSArray *mCachedOrderedKeyframes;
}

@property (readonly) NSSet *keyframes;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)animationPathWithKey:(id)a0;
+ (double)timeForKeyframe:(id)a0 withPlugTiming:(id)a1;

- (id)description;
- (id)init;
- (id)xmlElement;
- (id)imprint;
- (void)addKeyframe:(id)a0;
- (void)removeKeyframe:(id)a0;
- (void)removeAllKeyframes;
- (id)createKeyframeWithScalar:(float)a0 atTime:(double)a1;
- (id)createKeyframeWithPoint:(struct CGPoint { double x0; double x1; })a0 atTime:(double)a1;
- (id)createKeyframeWithVector:(struct { unsigned char x0; float x1[4]; })a0 atTime:(double)a1;
- (id)initWithImprint:(id)a0;
- (void)demolish;
- (void)_copySelfToSnapshot:(id)a0;
- (unsigned long long)countOfKeyframes;
- (id)orderedKeyframesWithPlugTiming:(id)a0;
- (id)createKeyframeWithScalar:(float)a0 atTime:(double)a1 offsetKind:(int)a2;
- (id)createKeyframeWithFunction:(id)a0 atTime:(double)a1 offsetKind:(int)a2 forDuration:(double)a3;
- (id)createKeyframeWithPoint:(struct CGPoint { double x0; double x1; })a0 atTime:(double)a1 offsetKind:(int)a2;
- (id)createKeyframeWithVector:(struct { unsigned char x0; float x1[4]; })a0 atTime:(double)a1 offsetKind:(int)a2;

@end
