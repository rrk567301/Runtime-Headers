@interface PIParallaxBlackWhiteMonoStyle : PIParallaxStyle

+ (id)styleWithColorAnalysis:(id)a0;
+ (id)styleWithParameters:(id)a0 colorSuggestions:(id)a1;

- (id)kind;
- (id)parameters;
- (id)recipeIdentifier;
- (void)updateClockPropertiesWithClockAreaLuminance:(double)a0;
- (BOOL)configureForCategory:(id)a0;
- (id)defaultDominantColorWithAnalysis:(id)a0;

@end
