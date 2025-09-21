@interface PEGlobalSettings : NSObject

@property (nonatomic) char smartCopyPasteReviewUIEnabled;
@property (nonatomic) double smartCopyPasteSimilarityGatingThreshold;
@property (nonatomic) char smartCopyPasteGateOnCaptureTime;
@property (nonatomic) char affectManuallyEditedSlidersOnly;
@property (nonatomic) char fetchAndSendScenePrintsForSliderNet;
@property (nonatomic) char synchronousStylesCopyPaste;
@property (nonatomic) char synchronousLivePhotoStylesCopyPaste;
@property (nonatomic) char shouldUseFlipAnimationForValuePlatter;
@property (nonatomic) long long targetPointsFillStrategy;
@property (nonatomic) double retouchTargetPointCoverageThreshold;
@property (nonatomic) double cleanupLassoDistance;
@property (nonatomic) double cleanupLassoHeadTailFraction;
@property (nonatomic) double cleanupLassoHeadTailMaxLength;
@property (nonatomic) double cleanupFilledCoverageRatio;
@property (nonatomic) double cleanupShortStrokeLengthThreshold;
@property (nonatomic) double cleanupShortStrokeAngleThreshold;
@property (nonatomic) char skipOnDemandSegmentationOnFaces;
@property (nonatomic) double retouchStrokeIntersectionPercentage;
@property (nonatomic) double subjectExclusionMaskHitRadius;

+ (id)globalSettings;

- (id)init;
- (void)_setInitialValues;
- (char)existingBoolValueForKey:(id)a0 withDefaultValue:(char)a1;
- (double)existingFloatValueForKey:(id)a0 withDefaultValue:(double)a1;
- (long long)existingIntegerValueForKey:(id)a0 withDefaultValue:(long long)a1;

@end
