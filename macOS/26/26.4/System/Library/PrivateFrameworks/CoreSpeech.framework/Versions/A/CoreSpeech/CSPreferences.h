@interface CSPreferences : NSObject

+ (id)sharedPreferences;

- (BOOL)voiceTriggerEnabled;
- (float)getAttendingTimeoutConfig;
- (BOOL)enableAudioInjection:(BOOL)a0;
- (float)adaptiveSiriVolumePermanentOffset;
- (int)adaptiveSiriVolumeRecentIntent;
- (void)setFileLoggingIsEnabled:(BOOL)a0;
- (BOOL)useSiriActivationSPIForHomePod;
- (BOOL)fileLoggingIsEnabled;
- (BOOL)isAttentiveSiriEnabled;
- (void)disableAdaptiveSiriVolume:(id)a0;
- (BOOL)isGazeSimlModelEnabled;
- (BOOL)smartSiriVolumeContextAwareEnabled;
- (BOOL)isFlexibleFollowupsUserDisabled;
- (id)dateWhenVoiceTriggerRePrompted;
- (id)getStartOfSpeechAudioLogFilePath;
- (BOOL)isPHSSupported;
- (BOOL)twoShotNotificationEnabled;
- (BOOL)isAttentiveSiriAudioLoggingEnabled;
- (void)setAudioInjectionFilePath:(id)a0;
- (id)trialBaseAssetDirectory;
- (BOOL)isAdaptiveSiriVolumePermanentOffsetEnabled;
- (BOOL)isGazeMandatory;
- (BOOL)isAdaptiveSiriVolumeTemporaryIntentValid;
- (BOOL)isGazeSignalEnabled;
- (BOOL)isFlexibleFollowupsSupported;
- (id)voiceTriggerAudioLogDirectory;

@end
