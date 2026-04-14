@class NSString, NSDictionary;

@interface FCNewsTabiChannelPickerSuggestionsInputOutputConfiguration : NSObject

@property (retain, nonatomic) NSString *contextFeatureKey;
@property (retain, nonatomic) NSString *generalChannelSuggestionsOutputName;
@property (retain, nonatomic) NSString *generalChannelSuggestionsScoreOutputName;
@property (retain, nonatomic) NSString *newsPlusChannelSuggestionsOutputName;
@property (retain, nonatomic) NSString *newsPlusChannelSuggestionsScoreOutputName;
@property (retain, nonatomic) NSDictionary *dictionary;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
