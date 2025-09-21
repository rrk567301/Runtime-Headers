@class FCNewsTabiRecipeTagSuggestionsOutputConfiguration, FCNewsTabiRecipeEventAggregationConfiguration;

@interface FCNewsTabiRecipeTagSuggestionsConfiguration : NSObject

@property (readonly, nonatomic) FCNewsTabiRecipeTagSuggestionsOutputConfiguration *bundleOutputConfiguration;
@property (readonly, nonatomic) FCNewsTabiRecipeTagSuggestionsOutputConfiguration *nonBundleOutputConfiguration;
@property (readonly, nonatomic) FCNewsTabiRecipeEventAggregationConfiguration *eventAggregationConfiguration;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
