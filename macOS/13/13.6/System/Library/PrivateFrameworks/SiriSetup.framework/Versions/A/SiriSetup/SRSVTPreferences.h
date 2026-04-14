@class VTPreferences;

@interface SRSVTPreferences : NSObject {
    VTPreferences *_preferences;
}

- (id)init;
- (void).cxx_destruct;
- (void)setVoiceTriggerEnabled:(BOOL)a0;
- (BOOL)voiceTriggerEnabled;
- (id)localizedTriggerPhraseForLanguageCode:(id)a0;
- (void)setVoiceTriggerDuringPhoneCallEnabled:(BOOL)a0;
- (BOOL)voiceTriggerDuringPhoneCallEnabled;

@end
