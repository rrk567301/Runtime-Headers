@class NSDictionary, FCNewsTabiFeedPersonalizationOutputConfiguration;

@interface FCNewsTabiFeedPersonalizationConfiguration : FCNewsTabiEndpointConfiguration

@property (retain, nonatomic) NSDictionary *dictionary;
@property (retain, nonatomic) FCNewsTabiFeedPersonalizationOutputConfiguration *bundleOutputConfiguration;
@property (nonatomic) long long fullBodyEmbeddingDimension;
@property (nonatomic) long long maxTopicIds;
@property (retain, nonatomic) FCNewsTabiFeedPersonalizationOutputConfiguration *nonBundleOutputConfiguration;
@property (nonatomic) long long titleEmbeddingDimension;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
