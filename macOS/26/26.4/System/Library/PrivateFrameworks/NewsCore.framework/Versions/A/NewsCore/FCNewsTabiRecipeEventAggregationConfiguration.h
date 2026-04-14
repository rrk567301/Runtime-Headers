@class FCNewsTabiRecipeEventAggregationConditions, NSArray;

@interface FCNewsTabiRecipeEventAggregationConfiguration : NSObject

@property (readonly, nonatomic) long long maxSessionEvents;
@property (readonly, nonatomic) FCNewsTabiRecipeEventAggregationConditions *eventConditions;
@property (readonly, nonatomic) NSArray *inputNames;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
