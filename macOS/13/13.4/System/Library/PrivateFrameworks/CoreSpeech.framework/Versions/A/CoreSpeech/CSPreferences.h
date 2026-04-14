@interface CSPreferences : NSObject

+ (id)sharedPreferences;

- (float)adaptiveSiriVolumePermanentOffset;
- (int)adaptiveSiriVolumeRecentIntent;
- (void)disableAdaptiveSiriVolume:(id)a0;
- (BOOL)enableAudioInjection:(BOOL)a0;
- (BOOL)fileLoggingIsEnabled;
- (float)getAttendingTimeoutConfig;
- (id)getStartOfSpeechAudioLogFilePath;
- (BOOL)isAdaptiveSiriVolumePermanentOffsetEnabled;
- (BOOL)isAdaptiveSiriVolumeTemporaryIntentValid;
- (BOOL)isAttentiveSiriAudioLoggingEnabled;
- (BOOL)isAttentiveSiriEnabled;
- (BOOL)isPHSSupported;
- (void)setAudioInjectionFilePath:(id)a0;
- (void)setFileLoggingIsEnabled:(BOOL)a0;
- (BOOL)smartSiriVolumeContextAwareEnabled;
- (id)trialBaseAssetDirectory;
- (BOOL)twoShotNotificationEnabled;
- (BOOL)useSiriActivationSPIForHomePod;
- (id)voiceTriggerAudioLogDirectory;
- (BOOL)voiceTriggerEnabled;

@end
