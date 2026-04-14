@interface CSPreferences : NSObject

+ (id)sharedPreferences;

- (BOOL)voiceTriggerEnabled;
- (BOOL)twoShotNotificationEnabled;
- (void)setFileLoggingIsEnabled:(BOOL)a0;
- (BOOL)fileLoggingIsEnabled;
- (id)voiceTriggerAudioLogDirectory;
- (BOOL)isPHSSupported;
- (BOOL)isAttentiveSiriEnabled;
- (BOOL)isAttentiveSiriAudioLoggingEnabled;
- (float)getAttendingTimeoutConfig;
- (id)getStartOfSpeechAudioLogFilePath;
- (void)setAudioInjectionFilePath:(id)a0;
- (BOOL)enableAudioInjection:(BOOL)a0;
- (BOOL)useSiriActivationSPIForHomePod;
- (id)trialBaseAssetDirectory;
- (BOOL)smartSiriVolumeContextAwareEnabled;
- (void)disableAdaptiveSiriVolume:(id)a0;
- (BOOL)isAdaptiveSiriVolumeTemporaryIntentValid;
- (BOOL)isAdaptiveSiriVolumePermanentOffsetEnabled;
- (float)adaptiveSiriVolumePermanentOffset;
- (int)adaptiveSiriVolumeRecentIntent;

@end
