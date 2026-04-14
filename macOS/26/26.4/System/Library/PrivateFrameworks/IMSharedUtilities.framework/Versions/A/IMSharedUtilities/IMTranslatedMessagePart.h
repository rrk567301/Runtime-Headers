@class NSString, NSAttributedString;

@interface IMTranslatedMessagePart : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *sourceLanguage;
@property (copy, nonatomic) NSString *translationLanguage;
@property (copy, nonatomic) NSAttributedString *translatedText;

- (void)encodeWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSourceLanguage:(id)a0 translationLanguage:(id)a1 translatedText:(id)a2;
- (BOOL)languagePairsAreIdenticalTo:(id)a0;

@end
