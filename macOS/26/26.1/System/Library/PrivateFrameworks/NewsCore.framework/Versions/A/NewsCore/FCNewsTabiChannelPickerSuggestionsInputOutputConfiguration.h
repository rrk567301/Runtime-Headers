@class NSString;

@interface FCNewsTabiChannelPickerSuggestionsInputOutputConfiguration : NSObject

@property (retain, nonatomic) NSString *contextFeatureKey;
@property (retain, nonatomic) NSString *generalChannelSuggestionsOutputName;
@property (retain, nonatomic) NSString *generalChannelSuggestionsScoreOutputName;
@property (retain, nonatomic) NSString *newsPlusChannelSuggestionsOutputName;
@property (retain, nonatomic) NSString *newsPlusChannelSuggestionsScoreOutputName;

- (id)description;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
