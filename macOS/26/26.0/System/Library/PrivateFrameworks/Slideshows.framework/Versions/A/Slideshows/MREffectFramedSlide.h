@class MRCroppingSprite;

@interface MREffectFramedSlide : MREffect {
    MRCroppingSprite *mSprite;
    BOOL mHasInnerRect;
    BOOL mHasOuterRect;
    BOOL mIsPlayable;
    BOOL mIsPlaying;
    BOOL mIsPressed;
}

+ (void)initialize;

- (void)_cleanup;
- (BOOL)isOpaque;
- (void)setAttributes:(id)a0;
- (id)init;
- (void)_renderImage:(id)a0 withFrame:(id)a1 atTime:(double)a2 inContext:(id)a3 withArguments:(id)a4;
- (id)elementHitAtPoint:(struct CGPoint { double x0; double x1; })a0 withInverseMatrix:(float[16])a1 localPoint:(struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)getVerticesCoordinates:(struct CGPoint { double x0; double x1; }[4] *)a0 withMatrix:(float[16])a1 forElement:(id)a2;
- (BOOL)isNative3D;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)setLiveAttributes:(id)a0;

@end
