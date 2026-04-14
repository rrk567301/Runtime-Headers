@class FCTabiHeadlineScoringEndpointConfiguration, NSString, FCTabiUserEventAggregateEndpointConfiguration, FCTabiTagScoringEndpointConfiguration;

@interface FCTabiPersonalizationConfiguration : NSObject

@property (retain, nonatomic) NSString *modelPackageAssetID;
@property (nonatomic) long long maxTopicIds;
@property (nonatomic) long long titleEmbeddingDimension;
@property (nonatomic) long long fullBodyEmbeddingDimension;
@property (retain, nonatomic) FCTabiUserEventAggregateEndpointConfiguration *userEventAggregateEndpointConfiguration;
@property (retain, nonatomic) FCTabiTagScoringEndpointConfiguration *tagScoringEndpointConfiguration;
@property (retain, nonatomic) FCTabiHeadlineScoringEndpointConfiguration *headlineScoringEndpointConfiguration;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
