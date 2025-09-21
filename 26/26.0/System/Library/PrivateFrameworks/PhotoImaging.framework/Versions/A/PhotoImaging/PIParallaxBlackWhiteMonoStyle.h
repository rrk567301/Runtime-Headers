@interface PIParallaxBlackWhiteMonoStyle : PIParallaxStyle <PIParallaxHeadroomLookStyle>

@property (nonatomic) long long headroomLook;

+ (id)styleWithColorAnalysis:(id)a0;
+ (id)styleWithParameters:(id)a0 colorSuggestions:(id)a1;

- (id)parameters;
- (id)kind;
- (BOOL)hasHeadroomLook;
- (BOOL)configureForCategory:(id)a0;
- (id)defaultDominantColorWithAnalysis:(id)a0;
- (id)recipeIdentifier;

@end
