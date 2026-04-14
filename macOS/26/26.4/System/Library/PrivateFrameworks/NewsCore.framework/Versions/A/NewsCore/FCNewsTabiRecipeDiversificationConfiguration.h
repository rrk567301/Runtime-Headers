@class FCNewsTabiRecipeDiversificationInputConfiguration, FCNewsTabiRecipeDiversificationOutputConfiguration, FCNewsTabiRecipeEventAggregationConfiguration;

@interface FCNewsTabiRecipeDiversificationConfiguration : FCNewsTabiEndpointConfiguration

@property (readonly, nonatomic) FCNewsTabiRecipeDiversificationOutputConfiguration *bundleOutputConfiguration;
@property (readonly, nonatomic) FCNewsTabiRecipeDiversificationOutputConfiguration *nonBundleOutputConfiguration;
@property (readonly, nonatomic) FCNewsTabiRecipeEventAggregationConfiguration *eventAggregationConfiguration;
@property (readonly, nonatomic) FCNewsTabiRecipeDiversificationInputConfiguration *bundleInputConfiguration;
@property (readonly, nonatomic) FCNewsTabiRecipeDiversificationInputConfiguration *nonBundleInputConfiguration;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
