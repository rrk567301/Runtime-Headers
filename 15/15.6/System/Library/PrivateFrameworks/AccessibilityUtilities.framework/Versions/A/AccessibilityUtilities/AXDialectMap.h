@class AXLangMap, NSString, AXLanguageManager, NSLocale, NSCharacterSet;

@interface AXDialectMap : NSObject

@property (weak, nonatomic) AXLangMap *langMap;
@property (retain, nonatomic) NSLocale *locale;
@property (copy, nonatomic) NSString *voiceName;
@property (retain, nonatomic) NSCharacterSet *speakableCharacters;
@property (copy, nonatomic) NSString *specificLanguageID;
@property (readonly, nonatomic) AXLanguageManager *langManager;
@property (retain, nonatomic) NSCharacterSet *secondaryLanguageRange;
@property (readonly, nonatomic) NSString *languageNameInCurrentLocale;
@property (readonly, nonatomic) NSString *languageNameInNativeLocale;
@property (readonly, nonatomic) NSString *languageNameAndLocaleInCurrentLocale;
@property (readonly, nonatomic) NSString *localeNameInCurrentLocale;
@property (readonly, nonatomic) NSString *languageNameAndLocaleInNativeLocale;
@property (readonly, nonatomic) NSString *regionID;

+ (id)_hanjaCharacterSet;
+ (id)_hanjaToHangulMap;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (char)isDialectSecondaryForCharacter:(unsigned short)a0;
- (char)canSpeakString:(id)a0;
- (char)canSpeakCharacter:(unsigned short)a0;
- (id)_transliteratedSpeechCharacters;
- (char)speakingRequiresTransliteration;
- (char)_languageIsKorean;
- (id)_stringByTransliterationHanjaToHangul:(id)a0;
- (id)basicDescription;
- (char)canSpeakCharacter:(unsigned short)a0 allowTransliteration:(char)a1;
- (char)canSpeakLongCharacter:(unsigned int)a0;
- (char)canSpeakString:(id)a0 allowsTransliteration:(char)a1;
- (char)hasSpeakableCharacters;
- (id)initWithLocale:(id)a0 specificLanguageID:(id)a1 speakableCharacters:(id)a2 secondaryLanguageRange:(id)a3;
- (id)transliteratedStringForString:(id)a0;

@end
