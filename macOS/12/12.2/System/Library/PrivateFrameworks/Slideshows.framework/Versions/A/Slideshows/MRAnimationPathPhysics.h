@interface MRAnimationPathPhysics : MCAnimationPathPhysics {
    float mDeltaValue;
    double mTime;
}

@property (nonatomic) float baseValue;
@property (nonatomic) float velocity;

- (id)initWithMCAnimationPath:(id)a0;
- (float)computeValueForTime:(double)a0 withContext:(id)a1;

@end
