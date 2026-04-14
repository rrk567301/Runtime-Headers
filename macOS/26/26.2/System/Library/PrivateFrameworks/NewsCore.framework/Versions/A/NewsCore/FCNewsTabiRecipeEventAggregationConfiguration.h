@class FCNewsTabiRecipeEventAggregationConditions, NSArray;

@interface FCNewsTabiRecipeEventAggregationConfiguration : NSObject

@property (readonly, nonatomic) long long maxSessionEvents;
@property (readonly, nonatomic) FCNewsTabiRecipeEventAggregationConditions *eventConditions;
@property (readonly, nonatomic) NSArray *inputNames;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)init;

@end
