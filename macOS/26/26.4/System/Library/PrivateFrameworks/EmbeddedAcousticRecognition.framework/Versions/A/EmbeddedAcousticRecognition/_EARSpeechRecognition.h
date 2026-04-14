@class NSArray, NSNumber, NSSet;

@interface _EARSpeechRecognition : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *tokenSausage;
@property (copy, nonatomic) NSArray *nBest;
@property (readonly, copy, nonatomic) NSNumber *utteranceLengthSamples;
@property (readonly, copy, nonatomic) NSArray *interpretationIndices;
@property (readonly, copy, nonatomic) NSSet *endsOfSentencePunctuations;
@property (readonly, copy, nonatomic) NSArray *personalEntities;

+ (id)reconstructNBestFromSausage:(id)a0 interpretationIndices:(id)a1;
+ (id)tokens:(id)a0 alignedToTokens:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)oneBest;
- (id)_initWithNBestList:(const void *)a0 useHatText:(BOOL)a1 endsOfSentencePunctuations:(id)a2 formattingInfo:(const void *)a3 personalEntities:(const void *)a4;
- (id)_initWithTokenPhraseChoiceList:(const void *)a0 earNbest:(id)a1 endsOfSentencePunctuations:(id)a2 earPersonalEntities:(id)a3;
- (id)_initWithTokenPhraseChoiceList:(const void *)a0 nBestList:(const void *)a1 endsOfSentencePunctuations:(id)a2 personalEntities:(const void *)a3;
- (id)_initWithTokenSausage:(id)a0 interpretationIndices:(id)a1 nBest:(id)a2 endsOfSentencePunctuations:(id)a3 personalEntities:(id)a4;
- (struct pair<std::vector<std::vector<unsigned int>>, std::vector<std::vector<std::vector<quasar::Token>>>> { struct vector<std::vector<unsigned int>, std::allocator<std::vector<unsigned int>>> { void *x0; void *x1; struct { void *x0; } x2; } x0; struct vector<std::vector<std::vector<quasar::Token>>, std::allocator<std::vector<std::vector<quasar::Token>>>> { void *x0; void *x1; struct { void *x0; } x2; } x1; })_tokenPhraseChoiceList;
- (id)adjustSpaceForTokens:(id)a0 currTokenIndex:(unsigned long long)a1 endsOfSentencePunctuations:(id)a2 isPotentialCommandRecognition:(BOOL)a3;
- (id)granularizedRecognition;
- (id)oneBestAlignedToTokens:(id)a0;
- (id)potentialCommandRecognition;
- (id)potentialPrecedingRecognition;
- (id)splitRecognitionWithPotentialCommandRecognition:(BOOL)a0;

@end
