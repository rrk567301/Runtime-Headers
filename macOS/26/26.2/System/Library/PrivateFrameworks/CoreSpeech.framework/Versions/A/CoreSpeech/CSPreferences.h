@interface CSPreferences : NSObject

+ (id)sharedPreferences;

- (BOOL)voiceTriggerEnabled;
- (BOOL)isFlexibleFollowupsSupported;
- (id)voiceTriggerAudioLogDirectory;
- (BOOL)isGazeSimlModelEnabled;
- (id)dateWhenVoiceTriggerRePrompted;
- (id)trialBaseAssetDirectory;
- (BOOL)isPHSSupported;
- (BOOL)twoShotNotificationEnabled;
- (BOOL)isFlexibleFollowupsUserDisabled;
- (void)disableAdaptiveSiriVolume:(id)a0;
- (id)getStartOfSpeechAudioLogFilePath;
- (BOOL)isAdaptiveSiriVolumeTemporaryIntentValid;
- (float)adaptiveSiriVolumePermanentOffset;
- (BOOL)isAdaptiveSiriVolumePermanentOffsetEnabled;
- (BOOL)enableAudioInjection:(BOOL)a0;
- (BOOL)isAttentiveSiriEnabled;
- (void)setAudioInjectionFilePath:(id)a0;
- (float)getAttendingTimeoutConfig;
- (BOOL)isAttentiveSiriAudioLoggingEnabled;
- (BOOL)isGazeMandatory;
- (BOOL)fileLoggingIsEnabled;
- (BOOL)smartSiriVolumeContextAwareEnabled;
- (int)adaptiveSiriVolumeRecentIntent;
- (void)setFileLoggingIsEnabled:(BOOL)a0;
- (BOOL)useSiriActivationSPIForHomePod;
- (BOOL)isGazeSignalEnabled;

@end
