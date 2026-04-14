@interface AFFeatureFlags : NSObject

+ (id)sharedInstance;
+ (void)dump;
+ (BOOL)isThemisABEnabled;
+ (id)featureFlags;
+ (BOOL)isTVPushToTalkEnabled;
+ (BOOL)isDictationVoiceTriggerEnabled;
+ (BOOL)isSiriUODAvailableForLanguage:(id)a0;
+ (BOOL)isSiriXEnabled;
+ (BOOL)isSiriDataSharingRepromptEnabled;
+ (BOOL)isAnnounceEnabled;
+ (BOOL)isAnnounceTelephonyEnabled;
+ (BOOL)isLocationSearchContinuityEnabled;
+ (void)setLocationSearchContinuityEnabled:(BOOL)a0;
+ (BOOL)isTrialDictationAssetDeliveryEnabled;
+ (BOOL)isHintsEnabled;
+ (BOOL)isAudioSessionCoordinationEnabled;
+ (BOOL)isRemoraEnabled;
+ (BOOL)isMyriadNonSpeakerRawScoreThresholdEnabled;
+ (BOOL)isLassoEnabled;
+ (BOOL)isAnnounceGroupFaceTimeInviteEnabled;
+ (BOOL)isTimerAlarmCoordinationEnabled;
+ (BOOL)isListeningOnBothStereoPairUnitsEnabled;
+ (BOOL)isHomeAutomationBackgroundRequestEnabled;
+ (BOOL)isSiriRequestDispatcherEnabled;
+ (BOOL)isAnnounceNotificationsEnabled;
+ (BOOL)isCrossDeviceTVControlEnabled;
+ (BOOL)isAnnounceMessagesInCarPlayEnabled;
+ (BOOL)isCrossDeviceVoiceFollowUpEnabled;
+ (BOOL)isCDAFaceDetectionEnabled;
+ (BOOL)isMyriadSelfMetricsEnabled;

@end
