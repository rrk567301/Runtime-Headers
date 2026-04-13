@interface AFFeatureFlags : NSObject

+ (id)sharedInstance;
+ (void)dump;
+ (BOOL)isThemisABEnabled;
+ (id)featureFlags;
+ (BOOL)isDictationVoiceTriggerEnabled;
+ (BOOL)isSiriUODAvailableForLanguage:(id)a0;
+ (BOOL)isSiriXEnabled;
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

@end
