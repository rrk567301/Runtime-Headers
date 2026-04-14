@class MROrigamiAnimationPath;

@interface MRTransitionOrigamiFold : MRTransition {
    MROrigamiAnimationPath *mBigSwing;
    MROrigamiAnimationPath *mSideSwing;
}

- (void)cleanup;
- (id)initWithTransitionID:(id)a0;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)_setupSwingTimings;
- (void)_cleanupSwingTimings;
- (BOOL)controlsLayersTime;

@end
