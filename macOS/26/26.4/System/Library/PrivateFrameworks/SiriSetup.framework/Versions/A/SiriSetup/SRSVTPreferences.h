@class NSNumber, VTPreferences;

@interface SRSVTPreferences : NSObject {
    NSNumber *compactVoiceTriggerEnabledOverride;
    VTPreferences *_preferences;
}

- (BOOL)voiceTriggerEnabled;
- (void).cxx_destruct;
- (id)localizedTriggerPhraseForLanguageCode:(id)a0;
- (id)init;
- (id)localizedCompactTriggerPhraseForLanguageCode:(id)a0;
- (void)setVoiceTriggerEnabled:(BOOL)a0;
- (BOOL)isCompactVoiceTriggerAvailableForLanguageCode:(id)a0;
- (BOOL)compactVoiceTriggerEnabled:(id)a0;
- (void)overrideCompactVoiceTriggerEnabled:(BOOL)a0;

@end
