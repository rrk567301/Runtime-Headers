@class PFParallaxColor;

@interface PIParallaxColorWashSingleStyle : PIParallaxStyle <PIParallaxColorParameterStyle>

@property (retain, nonatomic) PFParallaxColor *color;

+ (id)styleWithColorAnalysis:(id)a0;
+ (id)styleWithParameters:(id)a0 colorSuggestions:(id)a1;

- (void).cxx_destruct;
- (id)kind;
- (id)parameters;
- (id)recipeIdentifier;
- (BOOL)hasColorParameter;
- (BOOL)configureForCategory:(id)a0;
- (id)defaultDominantColorWithAnalysis:(id)a0;
- (id)initWithColor:(id)a0 clockColor:(id)a1 suggestions:(id)a2;

@end
