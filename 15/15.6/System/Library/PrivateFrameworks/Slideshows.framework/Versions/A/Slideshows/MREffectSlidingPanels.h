@class MRCroppingSprite, NSMutableDictionary, NSDictionary, NSArray, MRImage, MRCAMLBezierData, MRTextRenderer;

@interface MREffectSlidingPanels : MREffect {
    MRTextRenderer *mTextRenderer;
    MRImage *mTextImage;
    struct CGContext { } *mCachedRenderedText;
    NSMutableDictionary *mSprites;
    NSDictionary *mBreakInformation;
    MRCroppingSprite *mTextSprite;
    struct CGSize { double width; double height; } mMaxTextSize;
    char mIsLoaded;
    NSArray *mCurrentInfo;
    char mHasBreak;
    struct CGSize { double width; double height; } mTextSize;
    char mFitMovies;
    MRCAMLBezierData *mEnterCurve;
    MRCAMLBezierData *mExitCurve;
    double _interactiveModeStartTime;
}

- (id)init;
- (void)setAttributes:(id)a0;
- (void)_cleanup;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })a0;
- (void)_unload;
- (void)_applySizeScripts:(id)a0;
- (void)_loadForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (long long)_maxLinesForTextElement:(id)a0;
- (struct CGSize { double x0; double x1; })_maxSizeForTextElement:(id)a0;
- (struct CGSize { double x0; double x1; })_sizeForBreakAspectRatio:(double)a0 size:(struct CGSize { double x0; double x1; })a1 inContext:(id)a2;
- (void)beginMorphingToAspectRatio:(double)a0 withDuration:(double)a1;
- (void)computeAnimationForTime:(double)a0 direction:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 justification:(struct CGPoint { double x0; double x1; } *)a3;
- (id)elementHitAtPoint:(struct CGPoint { double x0; double x1; })a0 withInverseMatrix:(float[16])a1 localPoint:(struct CGPoint { double x0; double x1; } *)a2;
- (void)enterInteractiveModeAtTime:(double)a0;
- (void)exitInteractiveMode;
- (void)getLazyDuration:(double *)a0 lazyFactor:(double *)a1 animationDuration:(double *)a2 fromInterestingTime:(double)a3;
- (char)getStartTime:(double *)a0 andDuration:(double *)a1 forMovingToElementID:(id)a2 backwards:(char)a3;
- (char)getVerticesCoordinates:(struct CGPoint { double x0; double x1; }[4] *)a0 withMatrix:(float[16])a1 forElement:(id)a2;
- (char)hasMoreSlidesFromTime:(double)a0 backwards:(char)a1 startTime:(double *)a2 duration:(double *)a3;
- (double)interestingTimeForElement:(id)a0;
- (double)interestingTimeForTime:(double)a0;
- (char)isLoadedForTime:(double)a0;
- (char)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
