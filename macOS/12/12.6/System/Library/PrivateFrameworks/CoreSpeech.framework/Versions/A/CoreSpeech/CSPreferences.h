@interface CSPreferences : NSObject

+ (id)sharedPreferences;

- (BOOL)voiceTriggerEnabled;
- (BOOL)fileLoggingIsEnabled;
- (id)voiceTriggerAudioLogDirectory;
- (BOOL)twoShotNotificationEnabled;
- (BOOL)isAttentiveSiriEnabled;
- (BOOL)smartSiriVolumeContextAwareEnabled;
- (BOOL)useSiriActivationSPIForHomePod;
- (void)setFileLoggingIsEnabled:(BOOL)a0;
- (BOOL)isPHSSupported;
- (BOOL)isAttentiveSiriAudioLoggingEnabled;
- (float)getAttendingTimeoutConfig;
- (id)getStartOfSpeechAudioLogFilePath;
- (void)setAudioInjectionFilePath:(id)a0;
- (BOOL)enableAudioInjection:(BOOL)a0;
- (id)trialBaseAssetDirectory;
- (void)disableAdaptiveSiriVolume:(id)a0;
- (BOOL)isAdaptiveSiriVolumeTemporaryIntentValid;
- (BOOL)isAdaptiveSiriVolumePermanentOffsetEnabled;
- (float)adaptiveSiriVolumePermanentOffset;
- (int)adaptiveSiriVolumeRecentIntent;

@end
