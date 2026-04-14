@class PFParallaxColor;

@interface PIParallaxColorBGStandardStyle : PIParallaxStyle <PIParallaxColorParameterStyle>

@property (class, readonly) double lowKeyTone;
@property (class, readonly) double neutralTone;
@property (class, readonly) double highKeyTone;

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
- (id)initWithBackgroundColor:(id)a0 clockColor:(id)a1 colorSuggestions:(id)a2;

@end
