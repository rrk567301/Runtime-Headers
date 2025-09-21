@class MRTextRenderer, MRImage, MRCroppingSprite;

@interface MREffectJustATitle : MREffect {
    MRTextRenderer *mTextRenderer0;
    MRTextRenderer *mTextRenderer1;
    MRImage *mImage0;
    MRImage *mImage1;
    MRCroppingSprite *mTextSprite0;
    MRCroppingSprite *mTextSprite1;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mText0Rect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mText1Rect;
    char mTextWasUpdatedSinceLastRendering;
}

- (id)init;
- (void)setAttributes:(id)a0;
- (void)_unload;
- (void)_loadForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (long long)_maxLinesForTextElement:(id)a0;
- (struct CGSize { double x0; double x1; })_maxSizeForTextElement:(id)a0;
- (id)elementHitAtPoint:(struct CGPoint { double x0; double x1; })a0 withInverseMatrix:(float[16])a1 localPoint:(struct CGPoint { double x0; double x1; } *)a2;
- (char)getVerticesCoordinates:(struct CGPoint { double x0; double x1; }[4] *)a0 withMatrix:(float[16])a1 forElement:(id)a2;
- (char)isLoadedForTime:(double)a0;
- (char)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
