@interface MRTransitionPhaseInOut : MRTransition

- (BOOL)isOpaque;
- (BOOL)isInfinite;
- (BOOL)isSplit;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (id)retainedByUserRenderedImageAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (BOOL)isNative3D;
- (BOOL)isAlphaFriendly;
- (BOOL)controlsLayersTime;

@end
