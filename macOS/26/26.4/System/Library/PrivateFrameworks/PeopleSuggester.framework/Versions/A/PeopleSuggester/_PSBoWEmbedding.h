@class NLEmbedding;

@interface _PSBoWEmbedding : NSObject

@property (retain, nonatomic) NLEmbedding *embedding;
@property (readonly, nonatomic) long long embeddingDimension;

- (void).cxx_destruct;
- (id)init;
- (id)initWithLanguage:(id)a0;
- (id)computeEmbeddingsForWordArrays:(id)a0;
- (id)averageEmbeddings:(id)a0;
- (id)computeEmbeddingForText:(id)a0;
- (id)computeEmbeddingForWords:(id)a0;
- (id)computeEmbeddingsForTexts:(id)a0;
- (id)cosineSimilarityBetweenEmbedding:(id)a0 andEmbedding:(id)a1;
- (id)findMostSimilarToQuery:(id)a0 fromCandidates:(id)a1 similarity:(double *)a2;
- (id)initWithEmbedding:(id)a0;
- (id)tokenizeText:(id)a0;

@end
