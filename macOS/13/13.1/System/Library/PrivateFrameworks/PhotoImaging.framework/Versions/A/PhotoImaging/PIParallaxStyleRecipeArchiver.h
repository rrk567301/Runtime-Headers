@interface PIParallaxStyleRecipeArchiver : NSObject

+ (BOOL)writeRecipe:(id)a0 toURL:(id)a1 error:(out id *)a2;
+ (id)serializeRecipe:(id)a0;
+ (id)unarchivedStyleRecipeWithURL:(id)a0 error:(out id *)a1;
+ (id)deserializeRecipe:(id)a0 error:(out id *)a1;
+ (id)_serializeParameters:(id)a0;
+ (id)_serializeParameter:(id)a0;
+ (id)_deserializeParameters:(id)a0 version:(unsigned long long)a1 error:(out id *)a2;
+ (id)_deserializeParameter:(id)a0 version:(unsigned long long)a1 error:(out id *)a2;
+ (id)_serializeFilters:(id)a0;
+ (id)_serializeDefinition:(id)a0;
+ (id)_deserializeFilterDefinitions:(id)a0 version:(unsigned long long)a1 error:(out id *)a2;
+ (id)_deserializeFilterDefinition:(id)a0 version:(unsigned long long)a1 error:(out id *)a2;

@end
