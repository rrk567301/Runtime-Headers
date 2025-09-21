@class NSNumber, VTPreferences;

@interface SRSVTPreferences : NSObject {
    NSNumber *compactVoiceTriggerEnabledOverride;
    VTPreferences *_preferences;
}

- (id)localizedTriggerPhraseForLanguageCode:(id)a0;
- (id)localizedCompactTriggerPhraseForLanguageCode:(id)a0;
- (BOOL)isCompactVoiceTriggerAvailableForLanguageCode:(id)a0;
- (id)init;
- (BOOL)voiceTriggerEnabled;
- (void)setVoiceTriggerEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)compactVoiceTriggerEnabled:(id)a0;
- (void)overrideCompactVoiceTriggerEnabled:(BOOL)a0;

@end
