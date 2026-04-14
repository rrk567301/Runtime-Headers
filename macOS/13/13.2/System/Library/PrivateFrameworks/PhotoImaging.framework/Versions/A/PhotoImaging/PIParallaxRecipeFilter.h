@class NSDictionary, PIParallaxStyleRecipe;

@interface PIParallaxRecipeFilter : PIParallaxFilter

@property (retain, nonatomic) PIParallaxStyleRecipe *recipe;
@property (copy, nonatomic) NSDictionary *parameters;
@property (readonly, nonatomic) NSDictionary *resolvedParameters;

- (void).cxx_destruct;
- (id)initWithRecipe:(id)a0;
- (id)outputForegroundImage;
- (id)outputBackgroundImage;
- (id)outputMatteImage;
- (id)_evaluateImageWithFilterDefinitions:(id)a0 inputImage:(id)a1;

@end
