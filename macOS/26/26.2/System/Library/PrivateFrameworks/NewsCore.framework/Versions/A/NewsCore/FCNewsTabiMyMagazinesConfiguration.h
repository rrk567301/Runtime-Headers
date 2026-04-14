@class NSString;

@interface FCNewsTabiMyMagazinesConfiguration : NSObject

@property (nonatomic) long long fullBodyEmbeddingDimension;
@property (nonatomic) long long maxTopicIds;
@property (nonatomic) long long titleEmbeddingDimension;
@property (retain, nonatomic) NSString *scoreOutputName;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
