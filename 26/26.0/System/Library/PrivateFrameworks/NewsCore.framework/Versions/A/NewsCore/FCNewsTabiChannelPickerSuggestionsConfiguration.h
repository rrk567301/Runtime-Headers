@class FCNewsTabiChannelPickerSuggestionsInputOutputConfiguration, FCNewsTabiChannelPickerSuggestionsUserContextConfiguration;

@interface FCNewsTabiChannelPickerSuggestionsConfiguration : NSObject

@property (retain, nonatomic) FCNewsTabiChannelPickerSuggestionsInputOutputConfiguration *bundleInputOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiChannelPickerSuggestionsInputOutputConfiguration *nonBundleInputOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiChannelPickerSuggestionsUserContextConfiguration *userContextConfiguration;
@property (nonatomic) BOOL filterLocationSuggestionsOnlyToAppleNewsLocal;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
