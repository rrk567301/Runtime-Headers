@class FCNewsArticleEmbeddingConfiguration, FCNewsPersonalizationArticleEmbeddingsFittingConfiguration;

@interface FCNewsArticleEmbeddingsConfiguration : NSObject

@property (retain, nonatomic) FCNewsArticleEmbeddingConfiguration *titleEmbeddingConfiguration;
@property (retain, nonatomic) FCNewsArticleEmbeddingConfiguration *bodyEmbeddingConfiguration;
@property (retain, nonatomic) FCNewsPersonalizationArticleEmbeddingsFittingConfiguration *fittingConfiguration;
@property (nonatomic) long long requiredDimensions;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
