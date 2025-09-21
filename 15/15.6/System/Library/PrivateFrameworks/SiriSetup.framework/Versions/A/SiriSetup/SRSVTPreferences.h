@class NSNumber, VTPreferences;

@interface SRSVTPreferences : NSObject {
    NSNumber *compactVoiceTriggerEnabledOverride;
    VTPreferences *_preferences;
}

- (id)init;
- (void).cxx_destruct;
- (void)setVoiceTriggerEnabled:(char)a0;
- (char)voiceTriggerEnabled;
- (char)isCompactVoiceTriggerAvailableForLanguageCode:(id)a0;
- (id)localizedCompactTriggerPhraseForLanguageCode:(id)a0;
- (id)localizedTriggerPhraseForLanguageCode:(id)a0;
- (char)compactVoiceTriggerEnabled:(id)a0;
- (void)overrideCompactVoiceTriggerEnabled:(char)a0;

@end
