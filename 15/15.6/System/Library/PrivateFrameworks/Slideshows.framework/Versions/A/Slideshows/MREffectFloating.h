@class MRContext, NSMutableArray, NSMutableDictionary;

@interface MREffectFloating : MREffect <MZEffectTiming> {
    NSMutableArray *mFrontSlideOrder;
    NSMutableArray *mMiddleSlideOrder;
    NSMutableArray *mBackSlideOrder;
    char mNeedsUpdate;
    char mNeedsMoreSlides;
    long long mIterationOffset;
    NSMutableDictionary *mSlideTimes;
    float *mVBOData;
    unsigned int mVBO;
    MRContext *mHackContext;
}

@property (nonatomic) long long totalImages;
@property (readonly, nonatomic) double phaseInDuration;
@property (readonly, nonatomic) double mainDuration;
@property (readonly, nonatomic) double phaseOutDuration;

+ (char)hasCustomTiming;
+ (id)customTimingWithEffectID:(id)a0 effectAttributes:(id)a1 slideInformation:(id)a2 textInformation:(id)a3 inAspectRatio:(double)a4;
+ (char)supportsDynamicExpansionForEffectID:(id)a0;
+ (unsigned long long)typicalSlideBatchSizeForEffectID:(id)a0;

- (void)_cleanup;
- (char)isOpaque;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })a0;
- (void)_unload;
- (void)_applySizeScript;
- (void)_applyTimingToSlideProviders;
- (void)_bestTimeInfoFor:(id)a0 time:(double)a1 start:(double *)a2 end:(double *)a3;
- (double)_mainDurationForImageCount:(long long)a0;
- (void)_orderImages;
- (double)_rotationForRelative:(double)a0 directionFactor:(double)a1;
- (double)_zTranslationForRelativeTime:(double)a0;
- (void)appendSlideInformation:(id)a0 andTextInformation:(id)a1;
- (double)displayTimeForSlideAtIndex:(unsigned long long)a0;
- (double)displayTimeForTextAtIndex:(unsigned long long)a0;
- (unsigned long long)firstSlideIndexStillNeededAtTime:(double)a0;
- (id)initWithEffectID:(id)a0;
- (double)lowestDisplayTime;
- (char)needsMoreSlidesAtTime:(double)a0;
- (char)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)setMultiImageSlideRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setPhaseInDuration:(double)a0 mainDuration:(double)a1 phaseOutDuration:(double)a2;
- (double)showDurationForSlideAtIndex:(unsigned long long)a0;
- (double)showTimeForSlideAtIndex:(unsigned long long)a0;
- (char)supportsDynamicExpansion;
- (long long)typicalSlideBatchSize;

@end
