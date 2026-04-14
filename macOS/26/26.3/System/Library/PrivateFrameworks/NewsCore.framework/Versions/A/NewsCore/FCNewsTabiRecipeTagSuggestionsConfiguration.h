@class FCNewsTabiRecipeTagSuggestionsOutputConfiguration, FCNewsTabiRecipeEventAggregationConfiguration;

@interface FCNewsTabiRecipeTagSuggestionsConfiguration : NSObject

@property (readonly, nonatomic) FCNewsTabiRecipeTagSuggestionsOutputConfiguration *bundleOutputConfiguration;
@property (readonly, nonatomic) FCNewsTabiRecipeTagSuggestionsOutputConfiguration *nonBundleOutputConfiguration;
@property (readonly, nonatomic) FCNewsTabiRecipeEventAggregationConfiguration *eventAggregationConfiguration;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
