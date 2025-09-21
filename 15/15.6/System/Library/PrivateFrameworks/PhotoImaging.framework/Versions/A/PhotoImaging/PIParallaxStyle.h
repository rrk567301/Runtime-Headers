@class NSArray, NSString, PFParallaxColor, NSDictionary, PIParallaxStyleRecipe;

@interface PIParallaxStyle : NSObject

@property (retain, nonatomic) NSArray *colorSuggestions;
@property (readonly, copy, nonatomic) NSString *recipeIdentifier;
@property (readonly, copy, nonatomic) NSString *inactiveRecipeIdentifier;
@property (readonly, nonatomic) PIParallaxStyleRecipe *recipe;
@property (retain, nonatomic) PFParallaxColor *clockColor;
@property (readonly, nonatomic) NSDictionary *parameters;
@property (readonly, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) NSString *clockFont;
@property (readonly, nonatomic) double clockVibrancy;
@property (readonly, nonatomic) char isSegmented;
@property (readonly, nonatomic) char hasTonalityMode;
@property (readonly, nonatomic) char hasHeadroomLook;
@property (readonly, nonatomic) char hasColorParameter;
@property (readonly, nonatomic) char hasBackgroundParameter;

+ (id)_filterForRecipeIdentifier:(id)a0;
+ (id)colorPaletteWithStyleKind:(id)a0;
+ (id)defaultOriginalStyle;
+ (id)defaultStyleForKind:(id)a0 colorAnalysis:(id)a1;
+ (id)styleWithBakedStyle:(id)a0;
+ (id)styleWithColorAnalysis:(id)a0;
+ (id)styleWithParameters:(id)a0 colorSuggestions:(id)a1;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)filter;
- (id)bakedStyle;
- (id)colorSuggestionForCategory:(id)a0;
- (char)configureForCategory:(id)a0;
- (id)defaultDominantColorWithAnalysis:(id)a0;
- (id)inactiveFilter;
- (id)initWithClockColor:(id)a0 colorSuggestions:(id)a1;
- (id)initWithClockColor:(id)a0 vibrancy:(double)a1 colorSuggestions:(id)a2;

@end
