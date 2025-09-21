@class PFParallaxColor;

@interface PIParallaxColorWashSingleStyle : PIParallaxStyle <PIParallaxColorParameterStyle, PIParallaxBackgroundParameterStyle>

@property (retain, nonatomic) PFParallaxColor *color;
@property (nonatomic) char showsBackground;

+ (id)styleWithColorAnalysis:(id)a0;
+ (id)styleWithParameters:(id)a0 colorSuggestions:(id)a1;

- (void).cxx_destruct;
- (id)kind;
- (id)parameters;
- (char)configureForCategory:(id)a0;
- (id)defaultDominantColorWithAnalysis:(id)a0;
- (char)hasBackgroundParameter;
- (char)hasColorParameter;
- (id)initWithColor:(id)a0 background:(char)a1 clockColor:(id)a2 suggestions:(id)a3;
- (id)recipeIdentifier;

@end
