@interface PXKitSettings : PXSettings

@property (nonatomic) double downGesturesAngularToleranceInDegrees;
@property (nonatomic) double upGesturesAngularToleranceInDegrees;
@property (nonatomic) double horizontalGesturesAngularToleranceInDegrees;
@property (nonatomic) double uncontestedGesturesAngularToleranceInDegrees;
@property (nonatomic) double smallestSignificantScrollVelocity;
@property (nonatomic) char honorSilentMode;
@property (nonatomic) char simulateSilentMode;
@property (nonatomic) char defaultAsyncTextRenderingEnabled;
@property (nonatomic) long long defaultLabelTypesettingMode;
@property (nonatomic) char defaultUseShapeLayerForText;
@property (nonatomic) char defaultTextAutoscalingEnabled;
@property (nonatomic) double defaultTextMinimumScaleFactor;
@property (nonatomic) char defaultTextTruncationEnabled;
@property (nonatomic) double defaultTruncatedTextMinimumScaleFactor;
@property (nonatomic) double textAutoscalingPrecision;
@property (nonatomic) char allowCapitalization;
@property (nonatomic) char allowFontFallback;
@property (nonatomic) char simulateSlowTextTypesetting;
@property (nonatomic) char drawTypographicGuidelines;
@property (nonatomic) char useFancyDarkening;
@property (nonatomic) long long deviceGraphicsQuality;
@property (nonatomic) double simulatedSafeAreaHorizontalInsets;
@property (nonatomic) double simulatedPeripheryExtraTopInset;
@property (nonatomic) double simulatedPeripheryExtraLeftInset;
@property (nonatomic) double simulatedPeripheryExtraBottomInset;
@property (nonatomic) double simulatedPeripheryExtraRightInset;
@property (nonatomic) char simulateDroppedFramesDuringPPT;
@property (nonatomic) double simulatedDroppedFramesDurationInMilliseconds;
@property (nonatomic) long long simulatedDroppedFramesPeriod;
@property (nonatomic) double viewResetTimeoutDuration;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
