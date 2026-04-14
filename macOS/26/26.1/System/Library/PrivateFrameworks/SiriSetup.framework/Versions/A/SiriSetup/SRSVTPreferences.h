@class NSNumber, VTPreferences;

@interface SRSVTPreferences : NSObject {
    NSNumber *compactVoiceTriggerEnabledOverride;
    VTPreferences *_preferences;
}

- (BOOL)isCompactVoiceTriggerAvailableForLanguageCode:(id)a0;
- (id)localizedTriggerPhraseForLanguageCode:(id)a0;
- (BOOL)voiceTriggerEnabled;
- (void)setVoiceTriggerEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (id)localizedCompactTriggerPhraseForLanguageCode:(id)a0;
- (id)init;
- (BOOL)compactVoiceTriggerEnabled:(id)a0;
- (void)overrideCompactVoiceTriggerEnabled:(BOOL)a0;

@end
