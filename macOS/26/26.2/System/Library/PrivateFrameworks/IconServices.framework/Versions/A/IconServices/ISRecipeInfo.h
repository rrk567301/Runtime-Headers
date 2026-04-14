@interface ISRecipeInfo : NSObject

+ (id)appRecipeForPlatform:(unsigned long long)a0 descriptor:(id)a1 preferRichRecipe:(BOOL)a2;
+ (id)appRecipeForPlatformStyle:(unsigned long long)a0 descriptor:(id)a1 resourcePlatform:(unsigned long long)a2 preferRichRecipe:(BOOL)a3;
+ (id)documentRecipeForPlatform:(unsigned long long)a0 descriptor:(id)a1;
+ (id)genericRecipeWithAppliedDescriptorRecipeAttributes:(id)a0;

@end
