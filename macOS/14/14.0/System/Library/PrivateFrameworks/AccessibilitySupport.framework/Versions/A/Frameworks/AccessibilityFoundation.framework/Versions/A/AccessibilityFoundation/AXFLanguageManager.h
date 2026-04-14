@class NSArray, AXFDialectMap, NSString, NSLocale, NSCharacterSet;

@interface AXFLanguageManager : NSObject

@property (retain, nonatomic) NSArray *languageMaps;
@property (copy, nonatomic) NSLocale *userLocale;
@property (retain, nonatomic) NSCharacterSet *commonCharacters;
@property (retain, nonatomic) AXFDialectMap *dialectForSystemLanguage;
@property (retain, nonatomic) AXFDialectMap *dialectForCurrentLocale;
@property (retain, nonatomic) AXFDialectMap *dialectForCurrentRegion;
@property (readonly, nonatomic) NSString *systemLanguageID;
@property (readonly, nonatomic) AXFDialectMap *dialectForUserLocale;

+ (id)shared;
+ (id)commonPunctuationCharacters;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)dialectForLanguageID:(id)a0;
- (void)_handleUserLocaleDidChange:(id)a0;
- (id)dialectForSpeechSynthesisVoiceID:(id)a0;
- (BOOL)isCharacterCommon:(unsigned short)a0;
- (void)updateCachedDialects;
- (id)basicDescription;

@end
