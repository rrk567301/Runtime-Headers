@class NSString, FCNewsTabiChannelPickerSuggestionsConfiguration, FCNewsTabiEventAggregationOutputsConfiguration;

@interface FCNewsTabiChannelPickerSuggestionsEndpoint : NSObject

@property (retain, nonatomic) NSString *packageAssetID;
@property (retain, nonatomic) FCNewsTabiChannelPickerSuggestionsConfiguration *configuration;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputsConfiguration *eventAggregationOutputs;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
