@interface VCFeatureFlags : NSObject

+ (BOOL)isVirtualMachine;
+ (BOOL)streamingDictationEnabled;
+ (BOOL)solariumEnabled;
+ (BOOL)glassOverlaysEnabled;
+ (BOOL)inputAudioCoexistenceSupportEnabled;
+ (BOOL)llmCommandHandlingEnabled;
+ (BOOL)speechDetectorEnabled;
+ (BOOL)swiftCodingModeEnabled;
+ (BOOL)useWhatsNewSettingsSegmentedControlEnabled;
+ (BOOL)vocabularySyncEnabled;

- (id)init;

@end
