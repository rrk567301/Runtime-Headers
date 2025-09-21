@interface MRTransitionPhaseInOut : MRTransition

- (char)isInfinite;
- (char)isOpaque;
- (char)isSplit;
- (char)isAlphaFriendly;
- (char)controlsLayersTime;
- (char)isNative3D;
- (char)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (id)retainedByUserRenderedImageAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
