@interface CSPowerLogger : NSObject

+ (id)sharedPowerLogger;

- (void)powerLogSiriConfigWithVoiceTriggerEnabled:(BOOL)a0 withLanguage:(id)a1 withModelVersion:(id)a2;
- (void)powerLogVoiceTriggerStart;
- (void)powerLogVoiceTriggerStop;
- (void)powerWithNumFalseWakeup:(unsigned long long)a0 withDuration:(double)a1 withPhraseDict:(id)a2;
- (void)_borealisPowerlog:(id)a0;
- (void)_configPowerlog:(id)a0;
- (void)_updateConfigToPreferencesWithLanguage:(id)a0 withModelVersion:(id)a1;

@end
