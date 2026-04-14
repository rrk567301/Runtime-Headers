@class FCNewsTabiFeedPersonalizationOutputConfiguration;

@interface FCNewsTabiFeedPersonalizationConfiguration : NSObject

@property (nonatomic) long long maxTopicIds;
@property (nonatomic) long long titleEmbeddingDimension;
@property (nonatomic) long long fullBodyEmbeddingDimension;
@property (retain, nonatomic) FCNewsTabiFeedPersonalizationOutputConfiguration *bundleOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiFeedPersonalizationOutputConfiguration *nonBundleOutputConfiguration;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
