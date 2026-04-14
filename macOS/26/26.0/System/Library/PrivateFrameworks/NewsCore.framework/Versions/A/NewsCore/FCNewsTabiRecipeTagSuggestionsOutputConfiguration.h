@class NSString;

@interface FCNewsTabiRecipeTagSuggestionsOutputConfiguration : NSObject

@property (readonly, nonatomic) NSString *channelIDsOutputName;
@property (readonly, nonatomic) NSString *topicIDsOutputName;
@property (readonly, nonatomic) NSString *channelScoresOutputName;
@property (readonly, nonatomic) NSString *topicScoresOutputName;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
