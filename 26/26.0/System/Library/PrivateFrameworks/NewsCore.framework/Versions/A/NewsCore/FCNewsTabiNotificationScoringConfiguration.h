@class FCNewsTabiNotificationScoringOutputConfiguration;

@interface FCNewsTabiNotificationScoringConfiguration : NSObject

@property (retain, nonatomic) FCNewsTabiNotificationScoringOutputConfiguration *bundleOutputConfiguration;
@property (nonatomic) long long fullBodyEmbeddingDimension;
@property (nonatomic) long long maxNotabilityScores;
@property (nonatomic) long long maxTopicIds;
@property (retain, nonatomic) FCNewsTabiNotificationScoringOutputConfiguration *nonBundleOutputConfiguration;
@property (nonatomic) long long titleEmbeddingDimension;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
