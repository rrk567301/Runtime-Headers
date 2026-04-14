@class FCNewsTabiTagSuggestionsOutputConfiguration, FCNewsTabiRecipeEventAggregationConfiguration;

@interface FCNewsTabiTagSuggestionsConfiguration : NSObject

@property (retain, nonatomic) FCNewsTabiTagSuggestionsOutputConfiguration *bundleOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiTagSuggestionsOutputConfiguration *nonBundleOutputConfiguration;
@property (readonly, nonatomic) FCNewsTabiRecipeEventAggregationConfiguration *recipeEventAggregationConfiguration;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
