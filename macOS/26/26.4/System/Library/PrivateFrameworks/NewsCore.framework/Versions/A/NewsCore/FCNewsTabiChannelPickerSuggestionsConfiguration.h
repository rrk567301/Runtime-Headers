@class FCNewsTabiChannelPickerSuggestionsInputOutputConfiguration, FCNewsTabiChannelPickerSuggestionsUserContextConfiguration;

@interface FCNewsTabiChannelPickerSuggestionsConfiguration : FCNewsTabiEndpointConfiguration

@property (retain, nonatomic) FCNewsTabiChannelPickerSuggestionsInputOutputConfiguration *bundleInputOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiChannelPickerSuggestionsInputOutputConfiguration *nonBundleInputOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiChannelPickerSuggestionsUserContextConfiguration *userContextConfiguration;
@property (nonatomic) BOOL filterLocationSuggestionsOnlyToAppleNewsLocal;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
