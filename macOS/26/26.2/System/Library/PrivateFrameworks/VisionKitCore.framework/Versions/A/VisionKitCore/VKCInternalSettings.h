@class NSUserDefaults;

@interface VKCInternalSettings : NSObject

@property (class, readonly, nonatomic) NSUserDefaults *defaults;
@property (class, readonly, nonatomic) BOOL isCGImageForMadEnabled;
@property (class, readonly, nonatomic) BOOL disableAllLiveText;
@property (class, readonly, nonatomic) BOOL disableVisualIntelligence;
@property (class, readonly, nonatomic) BOOL debugMenuEnabled;
@property (class, readonly, nonatomic) BOOL logNormalizedVisibleRectProgress;
@property (class, readonly, nonatomic) double extraWindowPointTouchOffset;
@property (class, readonly, nonatomic) double visibleTextAreaButtonThreshold;
@property (class, readonly, nonatomic) BOOL overrideDeviceAvailability;
@property (class, readonly, nonatomic) BOOL inhibitVisualBIDI;
@property (class, readonly, nonatomic) BOOL localeFreeQRSupport;
@property (class, readonly, nonatomic) BOOL isPerformingAutomatedTest;
@property (class, readonly, nonatomic) BOOL addSubjectCropRectToPasteboard;
@property (class, readonly, nonatomic) BOOL alwaysShowTextSelectionBorders;
@property (class, readonly, nonatomic) double subjectAutomaticAnalysisDelay;
@property (class, readonly, nonatomic) double subjectDragCancellationDelay;
@property (class, readonly, nonatomic) double subjectDragLiftDelay;
@property (class, readonly, nonatomic) BOOL isOpticalFlowForTextEnabled;
@property (class, readonly, nonatomic) BOOL shareHeicsCalloutEnabled;

+ (BOOL)boolForKey:(id)a0 withDefaultValue:(BOOL)a1;
+ (id)defaultsKeyForKey:(id)a0;
+ (double)floatForKey:(id)a0 withDefaultValue:(double)a1;
+ (id)settingsValueForKey:(id)a0;
+ (id)disableAllLiveTextSettingsValue;
+ (id)addSubjectCropRectToPasteboardSettingsValue;
+ (id)alwaysShowTextSelectionBordersSettingsValue;
+ (BOOL)bypassVIV2MinSizeWorkaround;
+ (id)bypassVIV2MinSizeWorkaroundSettingsValue;
+ (id)debugMenuEnabledSettingsValue;
+ (id)disableVisualIntelligenceSettingsValue;
+ (id)extraWindowPointTouchOffsetSettingsValue;
+ (id)inhibitVisualBIDISettingsValue;
+ (id)isCGImageForMadEnabledSettingsValue;
+ (id)isOpticalFlowForTextEnabledSettingsValue;
+ (id)isPerformingAutomatedTestSettingsValue;
+ (id)localeFreeQRSupportSettingsValue;
+ (id)logNormalizedVisibleRectProgressSettingsValue;
+ (id)overrideDeviceAvailabilitySettingsValue;
+ (id)shareHeicsCalloutEnabledSettingsValue;
+ (id)subjectAutomaticAnalysisDelaySettingsValue;
+ (id)subjectDragCancellationDelaySettingsValue;
+ (id)subjectDragLiftDelaySettingsValue;
+ (id)visibleTextAreaButtonThresholdSettingsValue;

@end
