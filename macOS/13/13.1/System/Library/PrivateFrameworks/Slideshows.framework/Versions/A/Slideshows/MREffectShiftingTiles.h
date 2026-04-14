@class NSMutableDictionary, NSMutableArray;

@interface MREffectShiftingTiles : MREffect <MZEffectTiming> {
    NSMutableDictionary *mSprites;
    NSMutableArray *mTiming;
    NSMutableArray *mFirstLayout;
    NSMutableArray *mLastLayout;
    long long mLastCol;
    long long mLastSlideIndex;
    long long mSlideStartIndex;
    BOOL mNeedsToBeRebuilt;
    BOOL mNeedsToRecalculateIterations;
    long long mIterationStartIndex;
    double mIterationStartTime;
    double mAspectRatio;
    NSMutableArray *mSlideAspectRatios;
    double mFirstLayoutDuration;
}

@property (readonly, nonatomic) double phaseInDuration;
@property (readonly, nonatomic) double mainDuration;
@property (readonly, nonatomic) double phaseOutDuration;

+ (BOOL)hasCustomTiming;
+ (id)customTimingWithEffectID:(id)a0 effectAttributes:(id)a1 slideInformation:(id)a2 textInformation:(id)a3 inAspectRatio:(double)a4;
+ (BOOL)supportsDynamicExpansionForEffectID:(id)a0;
+ (unsigned long long)typicalSlideBatchSizeForEffectID:(id)a0;

- (void)_cleanup;
- (void)_unload;
- (void)appendSlideInformation:(id)a0 andTextInformation:(id)a1;
- (id)initWithEffectID:(id)a0;
- (double)lowestDisplayTime;
- (double)showTimeForSlideAtIndex:(unsigned long long)a0;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)setPhaseInDuration:(double)a0 mainDuration:(double)a1 phaseOutDuration:(double)a2;
- (id)elementHitAtPoint:(struct CGPoint { double x0; double x1; })a0 withInverseMatrix:(float[16])a1 localPoint:(struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)getVerticesCoordinates:(struct CGPoint { double x0; double x1; }[4] *)a0 withMatrix:(float[16])a1 forElement:(id)a2;
- (void)setMultiImageSlideRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)supportsDynamicExpansion;
- (long long)typicalSlideBatchSize;
- (unsigned long long)firstSlideIndexStillNeededAtTime:(double)a0;
- (double)showDurationForSlideAtIndex:(unsigned long long)a0;
- (double)displayTimeForSlideAtIndex:(unsigned long long)a0;
- (double)displayTimeForTextAtIndex:(unsigned long long)a0;
- (void)_applyTimingToSlideProviders;
- (double)_aspectRatioForSlideIndex:(long long)a0;
- (long long)_lowestDisplayIteration;
- (void)_addSlideAspectRatios:(id)a0;
- (void)_updateSizeScripts;
- (double)_calculateMainDuration;
- (id)_setupFirstLayout;
- (double)_timeForIteration:(long long)a0;
- (long long)_displaySlideCountForLayout:(long long)a0;
- (long long)_slideCountForLayout:(long long)a0;
- (long long)_displayWidthForLayout:(long long)a0;
- (long long)_widthForLayout:(long long)a0;
- (void)_setupLayoutsWithSlideInfo:(id)a0 append:(BOOL)a1 aspectRatio:(double)a2;
- (double)_durationForAspectRatio:(double)a0 inLayout:(long long)a1 withScreenRatio:(double)a2;
- (long long)_iterationForTime:(double)a0 startTime:(double *)a1 duration:(double *)a2;
- (id)_slideProviderWithAspectRatio:(BOOL)a0 nearest:(long long)a1 actual:(long long *)a2;
- (id)_infoForTime:(double)a0;
- (id)_layoutForTime:(double)a0;
- (id)_layoutForIteration:(long long)a0;

@end
