@class NSString, NSCharacterSet, NSLocale;

@interface AXFDialectMap : NSObject

@property (retain, nonatomic) NSLocale *locale;
@property (copy, nonatomic) NSString *specificLanguageID;
@property (copy, nonatomic) NSString *voiceName;
@property (copy, nonatomic) NSString *voiceIdentifier;
@property (copy, nonatomic) NSCharacterSet *speakableCharacters;
@property (retain, nonatomic) NSCharacterSet *secondaryLanguageRange;

- (id)description;
- (void).cxx_destruct;
- (BOOL)canSpeakString:(id)a0;
- (BOOL)canSpeakCharacter:(unsigned short)a0;
- (id)_availableVoices;
- (id)basicDescription;
- (id)initWithLocale:(id)a0 voiceName:(id)a1 specificLanguageID:(id)a2 speakableCharacters:(id)a3 secondaryLanguageRange:(id)a4;

@end
