@class MRCroppingSprite;

@interface MREffectJustASlide : MREffect {
    MRCroppingSprite *mSprite;
    BOOL mForceIsOpaque;
    double _panX;
    double _panY;
    double _scale;
    double _rotation;
    struct CGPoint { double x; double y; } _startSlideCenter;
    double _startSlideScale;
    double _startSlideRotation;
    double _x0;
    double _y0;
    BOOL _pzrWasUpdated;
    BOOL _pzrDoRotation;
    BOOL _isInitialized;
    BOOL _isInZoomMode;
}

@property (nonatomic) BOOL isFocuser;

- (id)init;
- (BOOL)isOpaque;
- (void)_cleanup;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (id)retainedByUserRenderedImageAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (id)patchworkAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (BOOL)isNative3D;
- (BOOL)isAlphaFriendly;
- (void)beginMorphingToAspectRatio:(double)a0 withDuration:(double)a1;
- (id)elementHitAtPoint:(struct CGPoint { double x0; double x1; })a0 withInverseMatrix:(float[16])a1 localPoint:(struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)getVerticesCoordinates:(struct CGPoint { double x0; double x1; }[4] *)a0 withMatrix:(float[16])a1 forElement:(id)a2;
- (double)pzrStart:(id)a0;
- (double)pzrUpdate:(id)a0;
- (double)pzrEnd:(id)a0;
- (double)pzrCancel:(id)a0;
- (void)resetPZR;
- (BOOL)canMoveInDirection:(unsigned char)a0 withPZR:(id)a1;

@end
