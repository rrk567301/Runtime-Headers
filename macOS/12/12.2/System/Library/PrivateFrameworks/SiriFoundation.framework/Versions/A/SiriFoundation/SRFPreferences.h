@class NSString;

@interface SRFPreferences : NSObject

@property (nonatomic, getter=assistantIsEnabled) BOOL assistantIsEnabled;
@property (readonly) NSString *languageCode;
@property (nonatomic, getter=isTypeToSiriEnabled) BOOL typeToSiriEnabled;
@property (nonatomic, getter=isLaunchAgentEnabled) BOOL launchAgentEnabled;
@property (nonatomic) BOOL voiceTriggerUserEnabled;

+ (id)sharedPreferences;

- (BOOL)voiceTriggerEnabled;
- (void)setVoiceTriggerEnabled:(BOOL)a0;
- (BOOL)isSATEnrolledForLanguageCode:(id)a0;
- (void)discardSATEnrollmentForLanguageCode:(id)a0;
- (void)discardAllSATEnrollment;
- (BOOL)isVoiceTriggerAvailable;
- (void)_killall:(id)a0;

@end
