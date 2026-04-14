@class NSString;

@interface FCNewsTabiChannelPickerSuggestionsInputOutputConfiguration : NSObject

@property (retain, nonatomic) NSString *contextFeatureKey;
@property (retain, nonatomic) NSString *generalChannelSuggestionsOutputName;
@property (retain, nonatomic) NSString *generalChannelSuggestionsScoreOutputName;
@property (retain, nonatomic) NSString *newsPlusChannelSuggestionsOutputName;
@property (retain, nonatomic) NSString *newsPlusChannelSuggestionsScoreOutputName;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
