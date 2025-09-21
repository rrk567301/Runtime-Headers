@interface PXKitSettings : PXSettings

@property (nonatomic) double downGesturesAngularToleranceInDegrees;
@property (nonatomic) double upGesturesAngularToleranceInDegrees;
@property (nonatomic) double horizontalGesturesAngularToleranceInDegrees;
@property (nonatomic) double uncontestedGesturesAngularToleranceInDegrees;
@property (nonatomic) double smallestSignificantScrollVelocity;
@property (nonatomic) BOOL honorSilentMode;
@property (nonatomic) BOOL simulateSilentMode;
@property (nonatomic) BOOL defaultAsyncTextRenderingEnabled;
@property (nonatomic) long long defaultLabelTypesettingMode;
@property (nonatomic) BOOL defaultTextAutoscalingEnabled;
@property (nonatomic) double defaultTextMinimumScaleFactor;
@property (nonatomic) BOOL defaultTextTruncationEnabled;
@property (nonatomic) double defaultTruncatedTextMinimumScaleFactor;
@property (nonatomic) BOOL allowCapitalization;
@property (nonatomic) BOOL useFancyDarkening;
@property (nonatomic) long long deviceGraphicsQuality;
@property (nonatomic) BOOL simulateDroppedFramesDuringPPT;
@property (nonatomic) double simulatedDroppedFramesDurationInMilliseconds;
@property (nonatomic) long long simulatedDroppedFramesPeriod;
@property (nonatomic) double viewResetTimeoutDuration;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
