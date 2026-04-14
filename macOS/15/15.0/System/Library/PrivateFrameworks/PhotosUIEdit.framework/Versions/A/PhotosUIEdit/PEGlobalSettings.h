@interface PEGlobalSettings : NSObject

@property (nonatomic) BOOL smartCopyPasteReviewUIEnabled;
@property (nonatomic) double smartCopyPasteSimilarityGatingThreshold;
@property (nonatomic) BOOL smartCopyPasteGateOnCaptureTime;
@property (nonatomic) BOOL affectManuallyEditedSlidersOnly;
@property (nonatomic) BOOL fetchAndSendScenePrintsForSliderNet;
@property (nonatomic) BOOL useEngPlaceholderNames;
@property (nonatomic) BOOL synchronousStylesCopyPaste;
@property (nonatomic) BOOL shouldUseFlipAnimationForValuePlatter;

+ (id)globalSettings;

- (id)init;
- (void)_setInitialValues;
- (BOOL)existingBoolValueForKey:(id)a0 withDefaultValue:(BOOL)a1;
- (BOOL)existingFloatValueForKey:(id)a0 withDefaultValue:(double)a1;

@end
