@class MRCAMLBezierData, NSMutableDictionary, NSDictionary, NSMutableArray;

@interface MREffectHyperGrid : MREffect <MZEffectTiming> {
    NSMutableDictionary *mSprites;
    NSMutableArray *mLayouts;
    long long mSlideStartIndex;
    long long mIterationStartIndex;
    long long mLastSlideIndex;
    long long mLastIteration;
    MRCAMLBezierData *mCurves[2];
    MRCAMLBezierData *mBreakCurves[2];
    char mNeedsToRecalculateIterations;
    double mAspectRatio;
    NSDictionary *mBreakInformation;
    long long mLastUsableIteration;
    long long mLastIterationsAdded[2];
    char mCanAddSlides;
    long long mIdealSlideCount;
    char mAspectRatioDidChange;
    char mSyncsToMusic;
    long long _currentIterationIndex;
}

@property (readonly, nonatomic) double phaseInDuration;
@property (readonly, nonatomic) double mainDuration;
@property (readonly, nonatomic) double phaseOutDuration;

+ (char)hasCustomTiming;
+ (id)customTimingWithEffectID:(id)a0 effectAttributes:(id)a1 slideInformation:(id)a2 textInformation:(id)a3 inAspectRatio:(double)a4;

- (void)setAttributes:(id)a0;
- (void)_cleanup;
- (char)isOpaque;
- (void)_unload;
- (void)_updateSizeScripts:(long long)a0 aspectRatio:(double)a1;
- (void)_applyLayoutsFromEffectAttributes;
- (void)_applyTimingToSlideProviders:(long long)a0;
- (double)_aspectRatioForSlideIndex:(long long)a0;
- (double)_calculateMainDuration;
- (void)_drawSlideAtIndex:(long long)a0 size:(struct CGSize { double x0; double x1; })a1 position:(struct CGPoint { double x0; double x1; })a2 atTime:(double)a3 iterationTime:(double)a4 iterationDuration:(double)a5 inContext:(id)a6 withArguments:(id)a7;
- (char)_isMovieForSlideAtIndex:(long long)a0 slideInformation:(id)a1;
- (long long)_iterationForTime:(double)a0;
- (char)_layoutAtIndexHasBreak:(long long)a0;
- (double)_movieDurationForSlideAtIndex:(long long)a0 slideInformation:(id)a1;
- (struct CGPoint { double x0; double x1; })_relativePointForLayout:(unsigned char)a0 andDirection:(unsigned char)a1 atIndex:(long long)a2 landscape:(char)a3;
- (struct CGSize { double x0; double x1; })_relativeSizeForLayout:(unsigned char)a0 atIndex:(long long)a1 landscape:(char)a2;
- (void)_renderIterationAtIndex:(long long)a0 firstIteration:(long long)a1 atTime:(double)a2 relativeTime:(double)a3 inContext:(id)a4 withArguments:(id)a5;
- (void)_setupLayoutsWithSlideInfo:(id)a0 aspectRatio:(double)a1;
- (id)_slideProviderWithAspectRatio:(char)a0 nearest:(long long)a1 actual:(long long *)a2;
- (void)_updateIterationTiming:(id)a0 slideInformation:(id)a1 aspectRatio:(double)a2 startTime:(double *)a3;
- (void)_updateIterationTimingsWithSlideInformation:(id)a0 aspectRatio:(double)a1;
- (void)beginMorphingToAspectRatio:(double)a0 withDuration:(double)a1;
- (double)displayTimeForSlideAtIndex:(unsigned long long)a0;
- (double)displayTimeForTextAtIndex:(unsigned long long)a0;
- (id)effectAuthoredAttributes;
- (unsigned long long)effectAuthoredSlideCount;
- (id)elementHitAtPoint:(struct CGPoint { double x0; double x1; })a0 withInverseMatrix:(float[16])a1 localPoint:(struct CGPoint { double x0; double x1; } *)a2;
- (char)getCurrentCenter:(struct CGPoint { double x0; double x1; } *)a0 scale:(double *)a1 rotation:(double *)a2 isMain:(char *)a3 forElement:(id)a4;
- (void)getLazyDuration:(double *)a0 lazyFactor:(double *)a1 animationDuration:(double *)a2 fromInterestingTime:(double)a3;
- (char)getVerticesCoordinates:(struct CGPoint { double x0; double x1; }[4] *)a0 withMatrix:(float[16])a1 forElement:(id)a2;
- (char)hasMoreSlidesFromTime:(double)a0 backwards:(char)a1 startTime:(double *)a2 duration:(double *)a3;
- (id)initWithEffectID:(id)a0;
- (double)interestingTimeForElement:(id)a0;
- (double)interestingTimeForTime:(double)a0;
- (void)iterationTime:(double *)a0 duration:(double *)a1 forIndex:(long long)a2 atTime:(double)a3 inIteration:(id)a4 firstIterationIndex:(long long)a5 currentIterationIndex:(long long)a6;
- (id)layoutForSlideIndex:(long long)a0 forIterations:(id)a1 atIndex:(long long *)a2;
- (double)lowestDisplayTime;
- (char)needsMoreSlidesAtTime:(double)a0;
- (char)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (double)showDurationForSlideAtIndex:(unsigned long long)a0;
- (double)showTimeForSlideAtIndex:(unsigned long long)a0;
- (char)slideIndex:(long long)a0 isInIteration:(id)a1;

@end
