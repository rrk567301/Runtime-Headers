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
+ (void)invalidateAssetMaps;
+ (id)visibleVoicesForLocaleIdentifier:(id)a0 additionalRequiredVoices:(id)a1 allowAllVoices:(BOOL)a2;
+ (id)visibleVoicesTable;
+ (void)setVisibleVoicesTable:(id)a0;
+ (void)rebuildAssetMaps;
+ (BOOL)isSameLanguageFromLocaleIdentifier:(id)a0 secondLocaleIdentifier:(id)a1;
+ (id)assetForVoiceID:(id)a0;
+ (id)normalizedVoiceIdentifier:(id)a0;

- (void)dealloc;
- (id)description;
- (id)localeIdentifier;
- (long long)compare:(id)a0;
- (id)identifier;
- (id)displayName;
- (id)gender;
- (id)languageIdentifier;
- (id)languageDisplayString;
- (id)displayNameRoot;
- (id)countryDisplayString;
- (id)siriLocalizedColorName;
- (id)siriVoiceDisplayNameFromIdentifier;
- (id)voiceAttributes;
- (id)initWithVoiceIdentifier:(id)a0;
- (BOOL)isAppropriateForSystemLanguage;
- (BOOL)doesMatchSystemLocale;
- (BOOL)matchesSearchString:(id)a0;
- (BOOL)showsInFullListOnly;
- (id)_overriddenCompactVoices;
- (id)initWithVoice:(id)a0 identifier:(id)a1;
- (id)_voiceNamesEntryFromSpeechSynthesisFrameworkForVoiceName:(id)a0;
- (BOOL)isSiriVoice;
- (id)_getSiriVoiceNameFromIdentifier;
- (id)_siriVoiceGenderedDisplayName;
- (id)_siriVoiceDisplayName;
- (id)_displayLocalizedVoiceNameForString:(id)a0;
- (id)_siriVoiceDisplayNameRoot;
- (id)_conversionLocale;
- (BOOL)isNeuter;
- (id)genderDisplayString;
- (id)_siriVoiceGenderedDisplayNameRoot;
- (id)countryIdentifier;
- (long long)relativeDesirability;

@end
