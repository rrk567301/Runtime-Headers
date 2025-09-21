@interface PXAssetVariationsSettings : PXSettings

@property (nonatomic) double selectionDetailsDismissalDelay;
@property (nonatomic) char addSimulatedProgressComponent;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) char simulateLoadingFailure;
@property (nonatomic) char simulateSavingFailure;
@property (nonatomic) char useNeutrinoRendering;
@property (nonatomic) char showStatusInDisclosureLabel;
@property (nonatomic) char showLoopBadges;
@property (nonatomic) char invalidateCachedPreviews;
@property (nonatomic) char useLiveRenderedPreviews;

+ (id)sharedInstance;

- (void)setDefaultValues;
- (id)parentSettings;

@end
