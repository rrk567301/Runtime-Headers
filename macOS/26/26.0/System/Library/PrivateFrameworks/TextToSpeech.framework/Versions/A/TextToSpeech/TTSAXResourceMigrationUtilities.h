@interface TTSAXResourceMigrationUtilities : NSObject

+ (id)sharedInstance;

- (id)attributesForLegacyVoiceSpec:(struct VoiceSpec { unsigned int x0; unsigned int x1; })a0;
- (id)updatedIdentifierForLegacyIdentifier:(id)a0 withLanguageCode:(id)a1;
- (id)getIdentifierForLegacyVoiceSpec:(struct VoiceSpec { unsigned int x0; unsigned int x1; })a0;
- (id)_ttsAssetForSpec:(struct VoiceSpec { unsigned int x0; unsigned int x1; })a0;
- (id)ttsIdentifierForLegacyMacIdentifier:(id)a0;

@end
