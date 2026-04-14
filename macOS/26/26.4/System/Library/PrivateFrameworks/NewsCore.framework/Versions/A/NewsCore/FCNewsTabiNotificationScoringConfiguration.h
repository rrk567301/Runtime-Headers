@class FCNewsTabiNotificationScoringOutputConfiguration;

@interface FCNewsTabiNotificationScoringConfiguration : FCNewsTabiEndpointConfiguration

@property (retain, nonatomic) FCNewsTabiNotificationScoringOutputConfiguration *bundleOutputConfiguration;
@property (nonatomic) long long fullBodyEmbeddingDimension;
@property (nonatomic) long long maxNotabilityScores;
@property (nonatomic) long long maxTopicIds;
@property (retain, nonatomic) FCNewsTabiNotificationScoringOutputConfiguration *nonBundleOutputConfiguration;
@property (nonatomic) long long titleEmbeddingDimension;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
