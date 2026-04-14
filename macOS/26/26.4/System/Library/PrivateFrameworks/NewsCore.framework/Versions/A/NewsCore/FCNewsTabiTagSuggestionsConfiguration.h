@class FCNewsTabiTagSuggestionsOutputConfiguration, FCNewsTabiRecipeEventAggregationConfiguration;

@interface FCNewsTabiTagSuggestionsConfiguration : FCNewsTabiEndpointConfiguration

@property (retain, nonatomic) FCNewsTabiTagSuggestionsOutputConfiguration *bundleOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiTagSuggestionsOutputConfiguration *nonBundleOutputConfiguration;
@property (readonly, nonatomic) FCNewsTabiRecipeEventAggregationConfiguration *recipeEventAggregationConfiguration;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
