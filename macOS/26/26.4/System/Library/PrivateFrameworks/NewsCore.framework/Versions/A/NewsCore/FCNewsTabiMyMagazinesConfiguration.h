@class NSString;

@interface FCNewsTabiMyMagazinesConfiguration : FCNewsTabiEndpointConfiguration

@property (nonatomic) long long fullBodyEmbeddingDimension;
@property (nonatomic) long long maxTopicIds;
@property (nonatomic) long long titleEmbeddingDimension;
@property (retain, nonatomic) NSString *scoreOutputName;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
