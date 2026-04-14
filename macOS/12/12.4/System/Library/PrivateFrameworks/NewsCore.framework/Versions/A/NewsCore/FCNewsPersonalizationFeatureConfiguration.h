@interface FCNewsPersonalizationFeatureConfiguration : NSObject

@property (nonatomic) long long articleLengthMediumThreshold;
@property (nonatomic) long long articleLengthLongThreshold;
@property (nonatomic) long long publisherTopicPairPublisherEventCountThreshold;
@property (nonatomic) long long publisherTopicPairTopicEventCountThreshold;

- (id)initWithDictionary:(id)a0;

@end
