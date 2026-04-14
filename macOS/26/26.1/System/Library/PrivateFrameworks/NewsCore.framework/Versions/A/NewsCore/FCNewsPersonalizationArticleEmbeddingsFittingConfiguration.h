@class FCNewsPersonalizationArticleEmbeddingsFittingRequirements, NSNumber, FCNewsPersonalizationLogisticRegressionClassifierConfiguration;

@interface FCNewsPersonalizationArticleEmbeddingsFittingConfiguration : NSObject

@property (retain, nonatomic) FCNewsPersonalizationArticleEmbeddingsFittingRequirements *articleReadRequirements;
@property (retain, nonatomic) FCNewsPersonalizationArticleEmbeddingsFittingRequirements *articleSeenRequirements;
@property (nonatomic) long long embeddingType;
@property (retain, nonatomic) FCNewsPersonalizationLogisticRegressionClassifierConfiguration *logisticRegressionClassifierConfiguration;
@property (nonatomic) double earliestAllowedEmbeddingEventTimestamp;
@property (nonatomic) BOOL haltEmbeddingProcessingAfterEncounteringNonMatchingEmbeddingsInSession;
@property (readonly, nonatomic) NSNumber *maximumRatioOfArticleSeenEmbeddingsToArticleReadEmbeddings;

- (id)description;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
