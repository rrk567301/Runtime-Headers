@interface SRUIFSiriUIFeatureFlag : NSObject

+ (BOOL)isPersistentSiriEnabled;
+ (BOOL)isWindowedLaunchEnabled;
+ (BOOL)isDrivingFocusMessageReadingEnabled;
+ (BOOL)isEyesfreeRedesignEyesfreeDisabled;
+ (BOOL)isEyesfreeRedesignOnlySteeringwheelEnabled;
+ (BOOL)isSiriReadThisV2Enabled;
+ (BOOL)isSpeakerActivationPermissionEnabled;
+ (BOOL)isSpeechSynthesizerV2Enabled;
+ (BOOL)isVisualIntelligenceDirectRoutingEnabled;

@end
