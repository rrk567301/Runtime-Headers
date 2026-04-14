@class FCNewsTabiRecipeEventAggregationConditions, NSArray;

@interface FCNewsTabiRecipeEventAggregationConfiguration : NSObject

@property (readonly, nonatomic) long long maxSessionEvents;
@property (readonly, nonatomic) FCNewsTabiRecipeEventAggregationConditions *eventConditions;
@property (readonly, nonatomic) NSArray *inputNames;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
