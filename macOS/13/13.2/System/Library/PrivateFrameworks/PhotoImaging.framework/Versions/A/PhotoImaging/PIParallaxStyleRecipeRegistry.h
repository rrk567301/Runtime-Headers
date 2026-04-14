@class NSArray;

@interface PIParallaxStyleRecipeRegistry : NSObject

@property (class, readonly, nonatomic) NSArray *supportedIdentifiers;

+ (id)recipeForIdentifier:(id)a0;
+ (id)_recipesForIdentifiers:(id)a0 withURLProvider:(id)a1;

@end
