@class NSString, NSMutableDictionary;

@interface INFPartOfSpeech : INFSentenceToken {
    NSString *_identifier;
}

@property (retain, nonatomic) NSMutableDictionary *variants;
@property (copy, nonatomic) NSString *language;
@property (nonatomic) unsigned long long partOfSpeechType;
@property (nonatomic) unsigned long long gender;

+ (id)nounWithIdentifier:(id)a0 language:(id)a1;
+ (id)nounWithGender:(unsigned long long)a0 identifier:(id)a1 language:(id)a2;
+ (id)adjectiveWithIdentifier:(id)a0 language:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)identifier;
- (id)dictionaryRepresentation;
- (id)stringForContext:(id)a0;
- (id)contributingSentenceContext;
- (id)initWithDictionary:(id)a0 identifier:(id)a1;
- (id)initWithPartOfSpeechType:(unsigned long long)a0 identifier:(id)a1 language:(id)a2;
- (void)validateSelf;
- (void)setString:(id)a0 forVariantsDescriptor:(id)a1;
- (id)stringForVariantsDescriptor:(id)a0;
- (void)setString:(id)a0 forVariants:(unsigned long long)a1;
- (id)stringForVariants:(unsigned long long)a0;

@end
