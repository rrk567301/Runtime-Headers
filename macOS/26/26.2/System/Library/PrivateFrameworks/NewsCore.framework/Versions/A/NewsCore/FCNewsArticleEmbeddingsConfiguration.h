@class FCNewsArticleEmbeddingConfiguration, FCNewsPersonalizationArticleEmbeddingsFittingConfiguration;

@interface FCNewsArticleEmbeddingsConfiguration : NSObject

@property (retain, nonatomic) FCNewsArticleEmbeddingConfiguration *titleEmbeddingConfiguration;
@property (retain, nonatomic) FCNewsArticleEmbeddingConfiguration *bodyEmbeddingConfiguration;
@property (retain, nonatomic) FCNewsPersonalizationArticleEmbeddingsFittingConfiguration *fittingConfiguration;
@property (nonatomic) long long requiredDimensions;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)init;

@end
