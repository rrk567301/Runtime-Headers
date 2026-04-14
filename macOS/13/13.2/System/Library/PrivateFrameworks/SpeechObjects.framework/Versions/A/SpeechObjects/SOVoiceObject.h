@class NSMutableDictionary, TTSAsset;

@interface SOVoiceObject : NSObject {
    NSMutableDictionary *_voiceAttributes;
}

@property unsigned long long visibility;
@property unsigned long long downloadStatus;
@property double downloadPercentComplete;
@property (readonly) TTSAsset *voice;

+ (BOOL)isSameLocaleIdentifier:(id)a0 secondLocaleIdentifier:(id)a1;
+ (id)systemLocaleIdentifier;
+ (BOOL)isSameLanguageFromLocaleIdentifier:(id)a0 secondLocaleIdentifier:(id)a1;
+ (id)visibleVoicesTable;
+ (void)setVisibleVoicesTable:(id)a0;
+ (void)rebuildAssetMaps;
+ (void)invalidateAssetMaps;
+ (id)normalizedVoiceIdentifier:(id)a0;
+ (id)assetForVoiceID:(id)a0;
+ (id)visibleVoicesForLocaleIdentifier:(id)a0 additionalRequiredVoices:(id)a1 allowAllVoices:(BOOL)a2;

- (void)dealloc;
- (id)description;
- (long long)compare:(id)a0;
- (id)localeIdentifier;
- (id)identifier;
- (id)displayName;
- (id)languageIdentifier;
- (id)gender;
- (id)initWithVoiceIdentifier:(id)a0;
- (id)_overriddenCompactVoices;
- (id)initWithVoice:(id)a0 identifier:(id)a1;
- (id)voiceAttributes;
- (id)_displayLocalizedVoiceNameForString:(id)a0;
- (id)_getSiriVoiceNameFromIdentifier;
- (id)siriVoiceDisplayNameFromIdentifier;
- (BOOL)isSiriVoice;
- (id)siriLocalizedColorName;
- (id)_siriVoiceGenderedDisplayName;
- (id)_siriVoiceGenderedDisplayNameRoot;
- (id)_siriVoiceDisplayName;
- (id)_siriVoiceDisplayNameRoot;
- (id)displayNameRoot;
- (id)countryIdentifier;
- (id)languageDisplayString;
- (id)countryDisplayString;
- (long long)relativeDesirability;
- (BOOL)showsInFullListOnly;
- (id)genderDisplayString;
- (BOOL)doesMatchSystemLocale;
- (BOOL)isAppropriateForSystemLanguage;
- (BOOL)isNeuter;
- (BOOL)matchesSearchString:(id)a0;
- (id)_conversionLocale;
- (id)_voiceNamesEntryFromSpeechSynthesisFrameworkForVoiceName:(id)a0;

@end
