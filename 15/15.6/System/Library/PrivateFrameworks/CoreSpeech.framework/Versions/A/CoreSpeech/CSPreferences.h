@interface CSPreferences : NSObject

+ (id)sharedPreferences;

- (char)isFlexibleFollowupsUserDisabled;
- (char)isGazeMandatory;
- (float)adaptiveSiriVolumePermanentOffset;
- (int)adaptiveSiriVolumeRecentIntent;
- (id)dateWhenVoiceTriggerRePrompted;
- (void)disableAdaptiveSiriVolume:(id)a0;
- (char)enableAudioInjection:(char)a0;
- (char)fileLoggingIsEnabled;
- (float)getAttendingTimeoutConfig;
- (id)getStartOfSpeechAudioLogFilePath;
- (char)isAdaptiveSiriVolumePermanentOffsetEnabled;
- (char)isAdaptiveSiriVolumeTemporaryIntentValid;
- (char)isAttentiveSiriAudioLoggingEnabled;
- (char)isAttentiveSiriEnabled;
- (char)isFlexibleFollowupsSupported;
- (char)isGazeSignalEnabled;
- (char)isGazeSimlModelEnabled;
- (char)isPHSSupported;
- (void)setAudioInjectionFilePath:(id)a0;
- (void)setFileLoggingIsEnabled:(char)a0;
- (char)smartSiriVolumeContextAwareEnabled;
- (id)trialBaseAssetDirectory;
- (char)twoShotNotificationEnabled;
- (char)useSiriActivationSPIForHomePod;
- (id)voiceTriggerAudioLogDirectory;
- (char)voiceTriggerEnabled;

@end
