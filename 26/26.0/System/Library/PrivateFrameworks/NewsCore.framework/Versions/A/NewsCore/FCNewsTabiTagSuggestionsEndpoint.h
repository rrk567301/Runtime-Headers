@class NSString, FCNewsTabiTagSuggestionsConfiguration, FCNewsTabiEventAggregationOutputsConfiguration;

@interface FCNewsTabiTagSuggestionsEndpoint : NSObject

@property (retain, nonatomic) NSString *packageAssetID;
@property (retain, nonatomic) FCNewsTabiTagSuggestionsConfiguration *configuration;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputsConfiguration *eventAggregationOutputs;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
