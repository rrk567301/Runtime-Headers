@class PFParallaxColor;

@interface PIParallaxColorWashDuotoneStyle : PIParallaxStyle <PIParallaxColorParameterStyle, PIParallaxBackgroundParameterStyle>

@property (retain, nonatomic) PFParallaxColor *primaryColor;
@property (retain, nonatomic) PFParallaxColor *secondaryColor;
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
- (id)initWithPrimaryColor:(id)a0 secondaryColor:(id)a1 background:(char)a2 clockColor:(id)a3 colorSuggestions:(id)a4;
- (id)recipeIdentifier;

@end
