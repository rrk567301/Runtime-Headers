@interface CSPowerLogger : NSObject

+ (id)sharedPowerLogger;

- (void)powerWithNumFalseWakeup:(unsigned long long)a0 withDuration:(double)a1;
- (void)powerLogSiriConfigWithVoiceTriggerEnabled:(BOOL)a0 withLanguage:(id)a1 withModelVersion:(id)a2;
- (void)powerLogVoiceTriggerStart;
- (void)powerLogVoiceTriggerStop;
- (void)_borealisPowerlog:(id)a0;
- (void)_configPowerlog:(id)a0;

@end
