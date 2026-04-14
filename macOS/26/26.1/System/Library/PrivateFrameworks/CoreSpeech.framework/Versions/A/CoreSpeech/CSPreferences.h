@interface CSPreferences : NSObject

+ (id)sharedPreferences;

- (int)adaptiveSiriVolumeRecentIntent;
- (BOOL)isPHSSupported;
- (id)voiceTriggerAudioLogDirectory;
- (BOOL)isAttentiveSiriEnabled;
- (BOOL)voiceTriggerEnabled;
- (BOOL)isGazeMandatory;
- (BOOL)smartSiriVolumeContextAwareEnabled;
- (BOOL)isGazeSignalEnabled;
- (float)adaptiveSiriVolumePermanentOffset;
- (id)dateWhenVoiceTriggerRePrompted;
- (id)trialBaseAssetDirectory;
- (float)getAttendingTimeoutConfig;
- (BOOL)fileLoggingIsEnabled;
- (void)setAudioInjectionFilePath:(id)a0;
- (BOOL)useSiriActivationSPIForHomePod;
- (BOOL)isFlexibleFollowupsUserDisabled;
- (BOOL)twoShotNotificationEnabled;
- (BOOL)isAttentiveSiriAudioLoggingEnabled;
- (id)getStartOfSpeechAudioLogFilePath;
- (BOOL)isGazeSimlModelEnabled;
- (BOOL)enableAudioInjection:(BOOL)a0;
- (void)setFileLoggingIsEnabled:(BOOL)a0;
- (BOOL)isFlexibleFollowupsSupported;
- (BOOL)isAdaptiveSiriVolumePermanentOffsetEnabled;
- (void)disableAdaptiveSiriVolume:(id)a0;
- (BOOL)isAdaptiveSiriVolumeTemporaryIntentValid;

@end
