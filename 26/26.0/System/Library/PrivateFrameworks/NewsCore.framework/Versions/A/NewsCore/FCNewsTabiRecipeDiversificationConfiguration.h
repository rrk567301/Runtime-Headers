@class FCNewsTabiRecipeDiversificationInputConfiguration, FCNewsTabiRecipeDiversificationOutputConfiguration, FCNewsTabiRecipeEventAggregationConfiguration;

@interface FCNewsTabiRecipeDiversificationConfiguration : NSObject

@property (readonly, nonatomic) FCNewsTabiRecipeDiversificationOutputConfiguration *bundleOutputConfiguration;
@property (readonly, nonatomic) FCNewsTabiRecipeDiversificationOutputConfiguration *nonBundleOutputConfiguration;
@property (readonly, nonatomic) FCNewsTabiRecipeEventAggregationConfiguration *eventAggregationConfiguration;
@property (readonly, nonatomic) FCNewsTabiRecipeDiversificationInputConfiguration *bundleInputConfiguration;
@property (readonly, nonatomic) FCNewsTabiRecipeDiversificationInputConfiguration *nonBundleInputConfiguration;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
