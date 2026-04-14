@class FCNewsTabiEventAggregationDurationEventConditions, FCNewsTabiEventAggregationBaseEventConditions;

@interface FCNewsTabiRecipeEventAggregationConditions : NSObject

@property (readonly, nonatomic) FCNewsTabiEventAggregationDurationEventConditions *cookModeViewed;
@property (readonly, nonatomic) FCNewsTabiEventAggregationBaseEventConditions *recipeSaved;
@property (readonly, nonatomic) FCNewsTabiEventAggregationDurationEventConditions *recipeViewed;

- (id)description;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
