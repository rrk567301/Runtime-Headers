@class NSString;

@interface FCTabiTagScoringEndpointConfiguration : NSObject

@property (retain, nonatomic) NSString *inputTopicIDsKey;
@property (retain, nonatomic) NSString *outputKey;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
