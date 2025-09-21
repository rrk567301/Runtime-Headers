@class NSUserDefaults;

@interface VKCInternalSettings : NSObject

@property (class, readonly, nonatomic) NSUserDefaults *defaults;
@property (class, readonly, nonatomic) char isCGImageForMadEnabled;
@property (class, readonly, nonatomic) char disableAllLiveText;
@property (class, readonly, nonatomic) char debugMenuEnabled;
@property (class, readonly, nonatomic) double extraWindowPointTouchOffset;
@property (class, readonly, nonatomic) double visibleTextAreaButtonThreshold;
@property (class, readonly, nonatomic) char overrideDeviceAvailability;
@property (class, readonly, nonatomic) char addRandomArtificalAnalysisDelay;
@property (class, readonly, nonatomic) double randomDelayStartValue;
@property (class, readonly, nonatomic) double randomDelayEndValue;
@property (class, readonly, nonatomic) char isPerformingAutomatedTest;
@property (class, readonly, nonatomic) char addSubjectCropRectToPasteboard;
@property (class, readonly, nonatomic) char alwaysShowTextSelectionBorders;
@property (class, readonly, nonatomic) double subjectAutomaticAnalysisDelay;
@property (class, readonly, nonatomic) double subjectDragCancellationDelay;
@property (class, readonly, nonatomic) double subjectDragLiftDelay;
@property (class, readonly, nonatomic) char isOpticalFlowForTextEnabled;
@property (class, readonly, nonatomic) double scaleMultiplier;
@property (class, readonly, nonatomic) double sharpMinOpacity;
@property (class, readonly, nonatomic) double sharpMaxThickness;
@property (class, readonly, nonatomic) double sharpBlurRadius;
@property (class, readonly, nonatomic) double blurMinOpacity;
@property (class, readonly, nonatomic) double blurMaxThickness;
@property (class, readonly, nonatomic) double blurBlurRadius;
@property (class, readonly, nonatomic) char shareHeicsCalloutEnabled;

+ (char)boolForKey:(id)a0 withDefaultValue:(char)a1;
+ (id)defaultsKeyForKey:(id)a0;
+ (double)floatForKey:(id)a0 withDefaultValue:(double)a1;
+ (id)settingsValueForKey:(id)a0;
+ (id)disableAllLiveTextSettingsValue;
+ (id)addRandomArtificalAnalysisDelaySettingsValue;
+ (id)addSubjectCropRectToPasteboardSettingsValue;
+ (id)alwaysShowTextSelectionBordersSettingsValue;
+ (id)blurBlurRadiusSettingsValue;
+ (id)blurMaxThicknessSettingsValue;
+ (id)blurMinOpacitySettingsValue;
+ (id)debugMenuEnabledSettingsValue;
+ (id)extraWindowPointTouchOffsetSettingsValue;
+ (id)isCGImageForMadEnabledSettingsValue;
+ (id)isOpticalFlowForTextEnabledSettingsValue;
+ (id)isPerformingAutomatedTestSettingsValue;
+ (id)overrideDeviceAvailabilitySettingsValue;
+ (id)randomDelayEndValueSettingsValue;
+ (id)randomDelayStartValueSettingsValue;
+ (id)scaleMultiplierSettingsValue;
+ (id)shareHeicsCalloutEnabledSettingsValue;
+ (id)sharpBlurRadiusSettingsValue;
+ (id)sharpMaxThicknessSettingsValue;
+ (id)sharpMinOpacitySettingsValue;
+ (id)subjectAutomaticAnalysisDelaySettingsValue;
+ (id)subjectDragCancellationDelaySettingsValue;
+ (id)subjectDragLiftDelaySettingsValue;
+ (id)visibleTextAreaButtonThresholdSettingsValue;

@end
