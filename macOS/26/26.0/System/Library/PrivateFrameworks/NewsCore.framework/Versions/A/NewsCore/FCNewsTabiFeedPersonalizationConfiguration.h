@class NSDictionary, FCNewsTabiFeedPersonalizationOutputConfiguration;

@interface FCNewsTabiFeedPersonalizationConfiguration : NSObject

@property (retain, nonatomic) NSDictionary *dictionary;
@property (retain, nonatomic) FCNewsTabiFeedPersonalizationOutputConfiguration *bundleOutputConfiguration;
@property (nonatomic) long long fullBodyEmbeddingDimension;
@property (nonatomic) long long maxTopicIds;
@property (retain, nonatomic) FCNewsTabiFeedPersonalizationOutputConfiguration *nonBundleOutputConfiguration;
@property (nonatomic) long long titleEmbeddingDimension;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
