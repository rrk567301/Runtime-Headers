@class AFPreferences, ASFApplicationSupplier;

@interface ASFController : NSObject

@property (readonly, nonatomic) AFPreferences *afPreferences;
@property (readonly, nonatomic) ASFApplicationSupplier *applicationSupplier;

+ (id)sharedController;

- (id)init;
- (void).cxx_destruct;
- (char)assistantIsEnabled;
- (long long)useDeviceSpeakerForTTS;
- (char)alwaysShowRecognizedSpeech;
- (void)setAlwaysShowRecognizedSpeech:(char)a0;
- (void)setAssistantIsEnabled:(char)a0;
- (void)setSiriResponseShouldAlwaysPrint:(char)a0;
- (void)setUseDeviceSpeakerForTTS:(long long)a0;
- (char)siriResponseShouldAlwaysPrint;
- (char)isVoiceTriggerEnabled;
- (void)setTypeToSiriEnabled:(char)a0;
- (void)setAnnounceNotificationEnabled:(char)a0;
- (id)getAllNotificationAppIds;
- (id)getAllNotificationApps;
- (char)hardwareButtonAssistantIsEnabled;
- (char)isAnnounceNotificationEnabled;
- (char)isAnnounceNotificationEnabledForApp:(id)a0;
- (char)isAnnounceNotificationEnabledForPlatform:(long long)a0;
- (char)isCallHangUpEnabled;
- (char)isLearningEnabledForApp:(id)a0;
- (char)isShowSuggestionsEnabledInApp:(id)a0;
- (char)isSpokenNotificationSkipTriggerlessReplyConfirmationEnabled;
- (void)setAnnounceNotificationEnabledForApp:(id)a0 annouceNotificationEnabled:(char)a1;
- (void)setAnnounceNotificationEnabledForPlatform:(long long)a0 annouceNotificationEnabled:(char)a1;
- (void)setCallHangUpEnabled:(char)a0;
- (void)setHardwareButtonAssistant:(char)a0;
- (void)setLearningForApp:(id)a0 enabled:(char)a1;
- (void)setShowSuggestionsInApp:(id)a0 enabled:(char)a1;
- (void)setSpokenNotificationSkipTriggerlessReplyConfirmationEnabled:(char)a0;
- (id)siriSuggestionClients;
- (char)typeToSiriIsEnabled;

@end
