@class FCNewsTabiEventAggregationDurationEventConditions, FCNewsTabiEventAggregationBaseEventConditions;

@interface FCNewsTabiRecipeEventAggregationConditions : NSObject

@property (readonly, nonatomic) FCNewsTabiEventAggregationDurationEventConditions *cookModeViewed;
@property (readonly, nonatomic) FCNewsTabiEventAggregationBaseEventConditions *recipeSaved;
@property (readonly, nonatomic) FCNewsTabiEventAggregationDurationEventConditions *recipeViewed;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
