@class NSString;

@interface FCNewsTabiMyMagazinesConfiguration : NSObject

@property (nonatomic) long long fullBodyEmbeddingDimension;
@property (nonatomic) long long maxTopicIds;
@property (nonatomic) long long titleEmbeddingDimension;
@property (retain, nonatomic) NSString *scoreOutputName;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
