@class FCNewsArticleEmbeddingConfiguration;

@interface FCNewsArticleEmbeddingsConfiguration : NSObject

@property (retain, nonatomic) FCNewsArticleEmbeddingConfiguration *titleEmbeddingConfiguration;
@property (retain, nonatomic) FCNewsArticleEmbeddingConfiguration *bodyEmbeddingConfiguration;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
