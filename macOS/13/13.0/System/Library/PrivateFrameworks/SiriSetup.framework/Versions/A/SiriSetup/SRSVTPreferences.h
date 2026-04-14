@class VTPreferences;

@interface SRSVTPreferences : NSObject {
    VTPreferences *_preferences;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)voiceTriggerEnabled;
- (void)setVoiceTriggerEnabled:(BOOL)a0;
- (id)localizedTriggerPhraseForLanguageCode:(id)a0;
- (void)setVoiceTriggerDuringPhoneCallEnabled:(BOOL)a0;
- (BOOL)voiceTriggerDuringPhoneCallEnabled;

@end
