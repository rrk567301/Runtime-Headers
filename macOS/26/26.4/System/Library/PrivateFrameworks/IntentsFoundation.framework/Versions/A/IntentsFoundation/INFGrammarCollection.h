@class NSArray, NSMutableDictionary;

@interface INFGrammarCollection : NSObject

@property (retain, nonatomic) NSMutableDictionary *tokensDictionary;
@property (retain, nonatomic) NSMutableDictionary *sentencesDictionary;
@property (readonly, nonatomic) NSArray *sentences;
@property (readonly, nonatomic) NSArray *tokens;

+ (id)grammarCollectionNamed:(id)a0 bundle:(id)a1 language:(id)a2;
+ (id)grammarCollectionNamed:(id)a0 bundle:(id)a1;
+ (id)grammarCollection;

- (id)createNounWithGender:(unsigned long long)a0 identifier:(id)a1 language:(id)a2;
- (id)createNounWithIdentifier:(id)a0 language:(id)a1;
- (id)tokenWithIdentifier:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)sentenceWithIdentifier:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)init;
- (id)createSentenceWithIdentifier:(id)a0;
- (void)addSentence:(id)a0;
- (void)addToken:(id)a0;
- (id)initWithGrammarCollectionNamed:(id)a0 bundle:(id)a1 language:(id)a2;
- (id)createAdjectiveWithIdentifier:(id)a0 language:(id)a1;
- (void)writeToFileAtPath:(id)a0;

@end
