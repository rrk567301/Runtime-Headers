@class MRCroppingSprite;

@interface MREffectFramedSlide : MREffect {
    MRCroppingSprite *mSprite;
    char mHasInnerRect;
    char mHasOuterRect;
    char mIsPlayable;
    char mIsPlaying;
    char mIsPressed;
}

+ (void)initialize;

- (id)init;
- (void)setAttributes:(id)a0;
- (void)_cleanup;
- (char)isOpaque;
- (void)_renderImage:(id)a0 withFrame:(id)a1 atTime:(double)a2 inContext:(id)a3 withArguments:(id)a4;
- (id)elementHitAtPoint:(struct CGPoint { double x0; double x1; })a0 withInverseMatrix:(float[16])a1 localPoint:(struct CGPoint { double x0; double x1; } *)a2;
- (char)getVerticesCoordinates:(struct CGPoint { double x0; double x1; }[4] *)a0 withMatrix:(float[16])a1 forElement:(id)a2;
- (char)isNative3D;
- (char)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)setLiveAttributes:(id)a0;

@end
