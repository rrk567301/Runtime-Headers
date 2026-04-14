@class NSDictionary;

@interface FCNewsTabiEventAggregationBaseEventConditions : NSObject

@property (readonly, nonatomic) double probability;
@property (readonly, nonatomic) NSDictionary *dictionary;

+ (id)noConditions;

- (id)description;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)initWithProbability:(double)a0;

@end
