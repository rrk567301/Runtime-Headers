@interface CSPreferences : NSObject

+ (id)sharedPreferences;

- (BOOL)fileLoggingIsEnabled;
- (BOOL)smartSiriVolumeContextAwareEnabled;
- (BOOL)isFlexibleFollowupsSupported;
- (BOOL)isAttentiveSiriAudioLoggingEnabled;
- (BOOL)isAdaptiveSiriVolumePermanentOffsetEnabled;
- (int)adaptiveSiriVolumeRecentIntent;
- (BOOL)useSiriActivationSPIForHomePod;
- (void)setAudioInjectionFilePath:(id)a0;
- (BOOL)isGazeSimlModelEnabled;
- (void)disableAdaptiveSiriVolume:(id)a0;
- (id)getStartOfSpeechAudioLogFilePath;
- (BOOL)isGazeMandatory;
- (BOOL)enableAudioInjection:(BOOL)a0;
- (BOOL)isGazeSignalEnabled;
- (BOOL)isPHSSupported;
- (float)getAttendingTimeoutConfig;
- (float)adaptiveSiriVolumePermanentOffset;
- (BOOL)twoShotNotificationEnabled;
- (BOOL)isAdaptiveSiriVolumeTemporaryIntentValid;
- (BOOL)isAttentiveSiriEnabled;
- (id)dateWhenVoiceTriggerRePrompted;
- (BOOL)voiceTriggerEnabled;
- (BOOL)isFlexibleFollowupsUserDisabled;
- (void)setFileLoggingIsEnabled:(BOOL)a0;
- (id)trialBaseAssetDirectory;
- (id)voiceTriggerAudioLogDirectory;

@end
