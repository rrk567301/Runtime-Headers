@class NSString;

@interface SRFPreferences : NSObject

@property (nonatomic, getter=assistantIsEnabled) char assistantIsEnabled;
@property (readonly) NSString *languageCode;
@property (nonatomic, getter=isTypeToSiriEnabled) char typeToSiriEnabled;
@property (nonatomic, getter=isLaunchAgentEnabled) char launchAgentEnabled;
@property (nonatomic) char voiceTriggerUserEnabled;

+ (id)sharedPreferences;

- (void)setVoiceTriggerEnabled:(char)a0;
- (char)voiceTriggerEnabled;
- (void)discardAllSATEnrollment;
- (void)discardSATEnrollmentForLanguageCode:(id)a0;
- (char)isSATEnrolledForLanguageCode:(id)a0;
- (char)isVoiceTriggerAvailable;
- (void)_killall:(id)a0;
- (void)isSATEnrolledForLanguageCode:(id)a0 completion:(id /* block */)a1;
- (char)isVoiceTriggerEnabledOnRemoteDarwin;
- (char)remoteDarwinEverConnected;
- (void)setCompactVoiceTriggerDisclosureHasBeenSeen;
- (void)setCompactVoiceTriggerPhraseType:(unsigned long long)a0;
- (void)setVoiceTriggerEnabledOnRemoteDarwin:(char)a0;
- (void)setVoiceTriggerUserEnabled:(char)a0 deviceType:(long long)a1;

@end
