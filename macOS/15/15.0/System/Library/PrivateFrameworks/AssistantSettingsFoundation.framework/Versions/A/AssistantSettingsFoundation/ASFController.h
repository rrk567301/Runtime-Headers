@interface ASFController : NSObject

+ (id)sharedController;

- (BOOL)assistantIsEnabled;
- (long long)useDeviceSpeakerForTTS;
- (BOOL)alwaysShowRecognizedSpeech;
- (void)setAlwaysShowRecognizedSpeech:(BOOL)a0;
- (void)setAssistantIsEnabled:(BOOL)a0;
- (void)setSiriResponseShouldAlwaysPrint:(BOOL)a0;
- (void)setUseDeviceSpeakerForTTS:(long long)a0;
- (BOOL)siriResponseShouldAlwaysPrint;
- (BOOL)isVoiceTriggerEnabled;
- (void)setAnnounceNotificationEnabled:(BOOL)a0;
- (id)getAllNotificationApps;
- (BOOL)hardwareButtonAssistantIsEnabled;
- (BOOL)isAnnounceNotificationEnabled;
- (BOOL)isAnnounceNotificationEnabledForApp:(id)a0;
- (BOOL)isAnnounceNotificationEnabledForPlatform:(long long)a0;
- (BOOL)isCallHangUpEnabled;
- (BOOL)isSpokenNotificationSkipTriggerlessReplyConfirmationEnabled;
- (void)setAnnounceNotificationEnabledForApp:(id)a0 annouceNotificationEnabled:(BOOL)a1;
- (void)setAnnounceNotificationEnabledForPlatform:(long long)a0 annouceNotificationEnabled:(BOOL)a1;
- (void)setCallHangUpEnabled:(BOOL)a0;
- (void)setHardwareButtonAssistant:(BOOL)a0;
- (void)setSpokenNotificationSkipTriggerlessReplyConfirmationEnabled:(BOOL)a0;

@end
