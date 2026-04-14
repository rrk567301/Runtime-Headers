@class NSString, PIParallaxStyleRecipe;

@interface PIParallaxRecipeStyle : PIParallaxStyle {
    NSString *_identifier;
    PIParallaxStyleRecipe *_recipe;
}

- (id)parameters;
- (id)kind;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)filter;
- (id)description;
- (id)recipe;
- (id)clockFont;
- (id)inactiveFilter;
- (id)initWithIdentifier:(id)a0 recipe:(id)a1;
- (id)recipeIdentifier;

@end
