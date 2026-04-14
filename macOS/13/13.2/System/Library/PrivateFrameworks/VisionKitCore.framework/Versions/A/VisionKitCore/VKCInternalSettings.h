@class NSUserDefaults;

@interface VKCInternalSettings : NSObject

@property (class, readonly, nonatomic) NSUserDefaults *defaults;
@property (class, readonly, nonatomic) BOOL isCGImageForMadEnabled;
@property (class, readonly, nonatomic) BOOL debugMenuEnabled;
@property (class, readonly, nonatomic) double extraWindowPointTouchOffset;
@property (class, readonly, nonatomic) double visibleTextAreaButtonThreshold;
@property (class, readonly, nonatomic) BOOL overrideDeviceAvailability;
@property (class, readonly, nonatomic) BOOL addRandomArtificalAnalysisDelay;
@property (class, readonly, nonatomic) double randomDelayStartValue;
@property (class, readonly, nonatomic) double randomDelayEndValue;
@property (class, readonly, nonatomic) BOOL isPerformingAutomatedTest;
@property (class, readonly, nonatomic) BOOL addSubjectCropRectToPasteboard;
@property (class, readonly, nonatomic) BOOL alwaysShowTextSelectionBorders;
@property (class, readonly, nonatomic) double subjectAutomaticAnalysisDelay;
@property (class, readonly, nonatomic) double subjectDragCancellationDelay;
@property (class, readonly, nonatomic) double subjectDragLiftDelay;
@property (class, readonly, nonatomic) double scaleMultiplier;
@property (class, readonly, nonatomic) double sharpMinOpacity;
@property (class, readonly, nonatomic) double sharpMaxThickness;
@property (class, readonly, nonatomic) double sharpBlurRadius;
@property (class, readonly, nonatomic) double blurMinOpacity;
@property (class, readonly, nonatomic) double blurMaxThickness;
@property (class, readonly, nonatomic) double blurBlurRadius;

+ (BOOL)boolForKey:(id)a0 withDefaultValue:(BOOL)a1;
+ (id)settingsValueForKey:(id)a0;
+ (id)scaleMultiplierSettingsValue;
+ (id)sharpMinOpacitySettingsValue;
+ (id)sharpMaxThicknessSettingsValue;
+ (id)sharpBlurRadiusSettingsValue;
+ (id)blurMinOpacitySettingsValue;
+ (id)blurMaxThicknessSettingsValue;
+ (id)blurBlurRadiusSettingsValue;
+ (id)isCGImageForMadEnabledSettingsValue;
+ (id)addRandomArtificalAnalysisDelaySettingsValue;
+ (id)randomDelayStartValueSettingsValue;
+ (id)randomDelayEndValueSettingsValue;
+ (id)extraWindowPointTouchOffsetSettingsValue;
+ (id)debugMenuEnabledSettingsValue;
+ (id)visibleTextAreaButtonThresholdSettingsValue;
+ (id)alwaysShowTextSelectionBordersSettingsValue;
+ (id)overrideDeviceAvailabilitySettingsValue;
+ (id)isPerformingAutomatedTestSettingsValue;
+ (id)subjectDragLiftDelaySettingsValue;
+ (id)subjectDragCancellationDelaySettingsValue;
+ (id)subjectAutomaticAnalysisDelaySettingsValue;
+ (id)addSubjectCropRectToPasteboardSettingsValue;
+ (id)defaultsKeyForKey:(id)a0;
+ (double)floatForKey:(id)a0 withDefaultValue:(double)a1;

@end
