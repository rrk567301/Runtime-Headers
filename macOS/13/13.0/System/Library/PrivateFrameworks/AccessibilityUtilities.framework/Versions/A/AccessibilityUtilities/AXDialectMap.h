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

+ (id)_hanjaToHangulMap;
+ (id)_hanjaCharacterSet;

- (id)description;
- (id)debugDescription;
- (void).cxx_destruct;
- (BOOL)canSpeakCharacter:(unsigned short)a0;
- (BOOL)canSpeakString:(id)a0;
- (BOOL)isDialectSecondaryForCharacter:(unsigned short)a0;
- (id)basicDescription;
- (id)initWithLocale:(id)a0 specificLanguageID:(id)a1 speakableCharacters:(id)a2 secondaryLanguageRange:(id)a3;
- (BOOL)hasSpeakableCharacters;
- (BOOL)canSpeakCharacter:(unsigned short)a0 allowTransliteration:(BOOL)a1;
- (BOOL)canSpeakLongCharacter:(unsigned int)a0;
- (BOOL)canSpeakString:(id)a0 allowsTransliteration:(BOOL)a1;
- (BOOL)_languageIsKorean;
- (BOOL)speakingRequiresTransliteration;
- (id)transliteratedStringForString:(id)a0;
- (id)_transliteratedSpeechCharacters;
- (id)_stringByTransliterationHanjaToHangul:(id)a0;

@end
