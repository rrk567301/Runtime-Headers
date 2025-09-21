@class MRCroppingSprite;

@interface MREffectJustASlide : MREffect {
    MRCroppingSprite *mSprite;
    char mForceIsOpaque;
    double _panX;
    double _panY;
    double _scale;
    double _rotation;
    struct CGPoint { double x; double y; } _startSlideCenter;
    double _startSlideScale;
    double _startSlideRotation;
    double _x0;
    double _y0;
    char _pzrWasUpdated;
    char _pzrDoRotation;
    char _isInitialized;
    char _isInZoomMode;
}

@property (nonatomic) char isFocuser;

- (id)init;
- (void)_cleanup;
- (char)isOpaque;
- (char)isAlphaFriendly;
- (double)pzrEnd:(id)a0;
- (void)beginMorphingToAspectRatio:(double)a0 withDuration:(double)a1;
- (char)canMoveInDirection:(unsigned char)a0 withPZR:(id)a1;
- (id)elementHitAtPoint:(struct CGPoint { double x0; double x1; })a0 withInverseMatrix:(float[16])a1 localPoint:(struct CGPoint { double x0; double x1; } *)a2;
- (char)getVerticesCoordinates:(struct CGPoint { double x0; double x1; }[4] *)a0 withMatrix:(float[16])a1 forElement:(id)a2;
- (char)isNative3D;
- (id)patchworkAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (char)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (double)pzrCancel:(id)a0;
- (double)pzrStart:(id)a0;
- (double)pzrUpdate:(id)a0;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)resetPZR;
- (id)retainedByUserRenderedImageAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
