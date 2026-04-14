@class NSString, NLModel;

@interface NLEmbedding : NSObject {
    void *_embedding;
    NLModel *_nlModel;
    BOOL _usesUntokenizedSentences;
}

@property (readonly) unsigned long long dimension;
@property (readonly) unsigned long long vocabularySize;
@property (readonly, copy) NSString *language;
@property (readonly) unsigned long long revision;

+ (id)supportedSentenceEmbeddingRevisionsForLanguage:(id)a0;
+ (id)embeddingWithContentsOfURL:(id)a0 error:(id *)a1;
+ (id)contextualWordEmbeddingForLanguage:(id)a0;
+ (id)sentenceEmbeddingForLanguage:(id)a0 revision:(unsigned long long)a1;
+ (BOOL)writeEmbeddingMLModelForDictionary:(id)a0 language:(id)a1 revision:(unsigned long long)a2 toURL:(id)a3 options:(id)a4 error:(id *)a5;
+ (id)embeddingDataForDictionary:(id)a0 language:(id)a1 revision:(unsigned long long)a2 error:(id *)a3;
+ (id)transformerContextualTokenEmbeddingForLanguage:(id)a0;
+ (id)modelDescriptionForEmbedding:(id)a0;
+ (BOOL)_writeEmbeddingForDictionary:(id)a0 language:(id)a1 revision:(unsigned long long)a2 toURL:(id)a3 orData:(id)a4 error:(id *)a5;
+ (id)embeddingWithMLModel:(id)a0 error:(id *)a1;
+ (id)supportedContextualWordEmbeddingRevisionsForLanguage:(id)a0;
+ (id)sentenceEmbeddingForLanguage:(id)a0;
+ (id)wordEmbeddingForLanguage:(id)a0 revision:(unsigned long long)a1;
+ (unsigned long long)currentSentenceEmbeddingRevisionForLanguage:(id)a0;
+ (unsigned long long)currentRevisionForLanguage:(id)a0;
+ (id)wordEmbeddingForLanguage:(id)a0;
+ (BOOL)assetsAvailableForEmbeddingType:(id)a0 language:(id)a1;
+ (void)requestAssetsForEmbeddingType:(id)a0 language:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (id)supportedRevisionsForLanguage:(id)a0;
+ (id)_embeddingWithContentsOfURL:(id)a0 error:(id *)a1;
+ (unsigned long long)currentRevisionForType:(id)a0 locale:(id)a1;
+ (unsigned long long)currentContextualWordEmbeddingRevisionForLanguage:(id)a0;
+ (id)contextualWordEmbeddingForLanguage:(id)a0 revision:(unsigned long long)a1;
+ (BOOL)writeEmbeddingForDictionary:(id)a0 language:(id)a1 revision:(unsigned long long)a2 toURL:(id)a3 error:(id *)a4;
+ (id)supportedRevisionsForType:(id)a0 locale:(id)a1;
+ (id)_embeddingWithData:(id)a0 error:(id *)a1;
+ (id)embeddingWithData:(id)a0 error:(id *)a1;

- (id)initWithLocale:(struct __CFLocale { } *)a0;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithType:(id)a0 locale:(id)a1 version:(id)a2;
- (id)initWithNLModel:(id)a0 error:(id *)a1;
- (void)dealloc;
- (void)enumerateNeighborsForString:(id)a0 maximumCount:(unsigned long long)a1 maximumDistance:(double)a2 distanceType:(long long)a3 usingBlock:(id /* block */)a4;
- (void)enumerateNeighborsForString:(id)a0 maximumCount:(unsigned long long)a1 distanceType:(long long)a2 usingBlock:(id /* block */)a3;
- (void)setUsesUntokenizedSentences:(BOOL)a0;
- (void)enumerateNeighborsForVector:(id)a0 maximumCount:(unsigned long long)a1 distanceType:(long long)a2 usingBlock:(id /* block */)a3;
- (double)distanceBetweenString:(id)a0 andString:(id)a1 distanceType:(long long)a2;
- (BOOL)containsString:(id)a0;
- (id)initSentenceEmbeddingWithLocale:(struct __CFLocale { } *)a0;
- (id)neighborsForVector:(id)a0 maximumCount:(unsigned long long)a1 distanceType:(long long)a2;
- (id)vectorsForUntokenizedSentences:(id)a0 maxTokens:(unsigned long long)a1;
- (id)neighborsForVector:(id)a0 maximumCount:(unsigned long long)a1 maximumDistance:(double)a2 distanceType:(long long)a3;
- (void *)_createEmbeddingRefWithData:(id)a0;
- (void)enumerateNeighborsForVector:(id)a0 maximumCount:(unsigned long long)a1 maximumDistance:(double)a2 distanceType:(long long)a3 usingBlock:(id /* block */)a4;
- (id)initContextualEmbeddingWithLocale:(struct __CFLocale { } *)a0;
- (id)vectorsForTokenizedSentences:(id)a0 maxTokens:(unsigned long long)a1;
- (id)initWithMLModel:(id)a0 error:(id *)a1;
- (id)_initWithContentsOfURL:(id)a0 error:(id *)a1;
- (void *)_createEmbeddingRefWithContentsOfURL:(id)a0;
- (id)neighborsForString:(id)a0 maximumCount:(unsigned long long)a1 distanceType:(long long)a2;
- (void *)_embeddingRef;
- (id)vectorForString:(id)a0;
- (BOOL)getVector:(float *)a0 forString:(id)a1;
- (BOOL)usesUntokenizedSentences;
- (id)neighborsForString:(id)a0 maximumCount:(unsigned long long)a1 maximumDistance:(double)a2 distanceType:(long long)a3;
- (id)initWithType:(id)a0 architecture:(id)a1 locale:(id)a2 version:(id)a3;
- (id)vectorsForTokenizedSentences:(id)a0 untokenizedSentences:(id)a1 maxTokens:(unsigned long long)a2;
- (id)vectorsForSentences:(id)a0 maxTokens:(unsigned long long)a1;
- (id)_initWithData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;

@end
