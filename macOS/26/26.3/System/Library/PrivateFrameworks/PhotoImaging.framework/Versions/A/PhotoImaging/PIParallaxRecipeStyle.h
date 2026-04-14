@class NSString, PIParallaxStyleRecipe;

@interface PIParallaxRecipeStyle : PIParallaxStyle {
    NSString *_identifier;
    PIParallaxStyleRecipe *_recipe;
}

- (id)filter;
- (id)description;
- (id)kind;
- (id)recipe;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)parameters;
- (id)clockFont;
- (id)inactiveFilter;
- (id)initWithIdentifier:(id)a0 recipe:(id)a1;
- (id)recipeIdentifier;

@end
