@class NSString;

@interface FCNewsTabiRecipeTagSuggestionsOutputConfiguration : NSObject

@property (readonly, nonatomic) NSString *channelIDsOutputName;
@property (readonly, nonatomic) NSString *topicIDsOutputName;
@property (readonly, nonatomic) NSString *channelScoresOutputName;
@property (readonly, nonatomic) NSString *topicScoresOutputName;

- (id)description;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
