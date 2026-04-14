@interface CSPreferences : NSObject

+ (id)sharedPreferences;

- (BOOL)voiceTriggerEnabled;
- (BOOL)enableAudioInjection:(BOOL)a0;
- (int)adaptiveSiriVolumeRecentIntent;
- (BOOL)isGazeMandatory;
- (BOOL)isFlexibleFollowupsSupported;
- (id)voiceTriggerAudioLogDirectory;
- (BOOL)isAttentiveSiriAudioLoggingEnabled;
- (id)getStartOfSpeechAudioLogFilePath;
- (BOOL)twoShotNotificationEnabled;
- (void)setAudioInjectionFilePath:(id)a0;
- (BOOL)isGazeSignalEnabled;
- (BOOL)fileLoggingIsEnabled;
- (BOOL)isAttentiveSiriEnabled;
- (id)dateWhenVoiceTriggerRePrompted;
- (float)getAttendingTimeoutConfig;
- (BOOL)isAdaptiveSiriVolumeTemporaryIntentValid;
- (BOOL)smartSiriVolumeContextAwareEnabled;
- (BOOL)useSiriActivationSPIForHomePod;
- (void)setFileLoggingIsEnabled:(BOOL)a0;
- (BOOL)isFlexibleFollowupsUserDisabled;
- (float)adaptiveSiriVolumePermanentOffset;
- (BOOL)isAdaptiveSiriVolumePermanentOffsetEnabled;
- (BOOL)isGazeSimlModelEnabled;
- (id)trialBaseAssetDirectory;
- (void)disableAdaptiveSiriVolume:(id)a0;
- (BOOL)isPHSSupported;

@end
