@class NSString, PIParallaxStyleRecipe;

@interface PIParallaxRecipeStyle : PIParallaxStyle {
    NSString *_identifier;
    PIParallaxStyleRecipe *_recipe;
}

- (id)parameters;
- (id)recipe;
- (id)kind;
- (id)filter;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)clockFont;
- (id)inactiveFilter;
- (id)initWithIdentifier:(id)a0 recipe:(id)a1;
- (id)recipeIdentifier;

@end
