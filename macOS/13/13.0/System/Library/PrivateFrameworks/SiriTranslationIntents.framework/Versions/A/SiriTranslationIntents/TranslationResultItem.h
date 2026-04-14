@class NSString;

@interface TranslationResultItem : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *wordType;
@property (nonatomic, copy) NSString *translatedText;
@property (nonatomic, copy) NSString *definition;
@property (nonatomic, copy) NSString *translatedSantitizedText;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
