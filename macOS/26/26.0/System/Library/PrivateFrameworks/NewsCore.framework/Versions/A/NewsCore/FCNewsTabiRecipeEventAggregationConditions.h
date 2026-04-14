@class FCNewsTabiEventAggregationDurationEventConditions, FCNewsTabiEventAggregationBaseEventConditions;

@interface FCNewsTabiRecipeEventAggregationConditions : NSObject

@property (readonly, nonatomic) FCNewsTabiEventAggregationDurationEventConditions *cookModeViewed;
@property (readonly, nonatomic) FCNewsTabiEventAggregationBaseEventConditions *recipeSaved;
@property (readonly, nonatomic) FCNewsTabiEventAggregationDurationEventConditions *recipeViewed;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
