@class FCNewsTabiRecipeTagSuggestionsOutputConfiguration, FCNewsTabiRecipeEventAggregationConfiguration;

@interface FCNewsTabiRecipeTagSuggestionsConfiguration : FCNewsTabiEndpointConfiguration

@property (readonly, nonatomic) FCNewsTabiRecipeTagSuggestionsOutputConfiguration *bundleOutputConfiguration;
@property (readonly, nonatomic) FCNewsTabiRecipeTagSuggestionsOutputConfiguration *nonBundleOutputConfiguration;
@property (readonly, nonatomic) FCNewsTabiRecipeEventAggregationConfiguration *eventAggregationConfiguration;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
