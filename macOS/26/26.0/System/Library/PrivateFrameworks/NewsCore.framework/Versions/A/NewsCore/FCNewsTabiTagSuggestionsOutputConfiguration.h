@class NSString;

@interface FCNewsTabiTagSuggestionsOutputConfiguration : NSObject

@property (retain, nonatomic) NSString *channelIDsOutputName;
@property (retain, nonatomic) NSString *topicIDsOutputName;
@property (retain, nonatomic) NSString *channelScoresOutputName;
@property (retain, nonatomic) NSString *topicScoresOutputName;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
