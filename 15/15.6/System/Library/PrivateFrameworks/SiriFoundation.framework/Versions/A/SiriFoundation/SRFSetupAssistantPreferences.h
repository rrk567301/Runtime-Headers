@interface SRFSetupAssistantPreferences : NSObject

+ (id)sharedPreferences;

- (void)setLanguageCode:(id)a0;
- (void)setSiriEnabled:(char)a0;
- (char)shouldSkipBuddy;
- (char)shouldOfferSiriForSetupState:(char)a0;
- (char)shouldPresentDisclosureForCompactVoiceTriggerUsingSiriState:(char)a0;
- (char)suitableMicrophoneExists;

@end
