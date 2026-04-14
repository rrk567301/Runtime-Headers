@class FCNewsPersonalizationArticleEmbeddingsFittingRequirements, NSNumber, FCNewsPersonalizationLogisticRegressionClassifierConfiguration;

@interface FCNewsPersonalizationArticleEmbeddingsFittingConfiguration : NSObject

@property (retain, nonatomic) FCNewsPersonalizationArticleEmbeddingsFittingRequirements *articleReadRequirements;
@property (retain, nonatomic) FCNewsPersonalizationArticleEmbeddingsFittingRequirements *articleSeenRequirements;
@property (retain, nonatomic) FCNewsPersonalizationLogisticRegressionClassifierConfiguration *logisticRegressionClassifierConfiguration;
@property (readonly, nonatomic) NSNumber *maximumRatioOfArticleSeenEmbeddingsToArticleReadEmbeddings;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
