@class NSDictionary, NSArray;

@interface PIParallaxStyleRecipe : NSObject

@property (readonly, copy, nonatomic) NSDictionary *parameters;
@property (readonly, copy, nonatomic) NSArray *foregroundFilters;
@property (readonly, copy, nonatomic) NSArray *backgroundFilters;
@property (readonly, copy, nonatomic) NSArray *matteFilters;

- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithParameters:(id)a0 foregroundFilters:(id)a1 backgroundFilters:(id)a2 matteFilters:(id)a3;
- (char)isEqualToParallaxStyleRecipe:(id)a0;

@end
