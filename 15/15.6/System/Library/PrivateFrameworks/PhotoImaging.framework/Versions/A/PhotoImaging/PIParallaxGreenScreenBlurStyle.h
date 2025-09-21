@class PFParallaxColor;

@interface PIParallaxGreenScreenBlurStyle : PIParallaxStyle <PIParallaxColorParameterStyle>

@property (retain, nonatomic) PFParallaxColor *color;

+ (id)styleWithColorAnalysis:(id)a0;
+ (id)styleWithParameters:(id)a0 colorSuggestions:(id)a1;

- (void).cxx_destruct;
- (id)kind;
- (id)parameters;
- (char)configureForCategory:(id)a0;
- (id)defaultDominantColorWithAnalysis:(id)a0;
- (char)hasColorParameter;
- (id)initWithColor:(id)a0 clockColor:(id)a1 colorSuggestions:(id)a2;
- (id)recipeIdentifier;

@end
