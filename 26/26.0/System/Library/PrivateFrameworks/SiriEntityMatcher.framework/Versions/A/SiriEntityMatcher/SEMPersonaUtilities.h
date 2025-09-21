@interface SEMPersonaUtilities : NSObject

+ (id)currentPersonaIdentifier;
+ (BOOL)currentPersonaIsDefault;
+ (BOOL)isUserPersonaIdentifier:(id)a0;
+ (void)runAsPersonaIdentifier:(id)a0 block:(id /* block */)a1;
+ (id)allProfilesWithError:(id *)a0;
+ (BOOL)enumerateAndAssumeAllUserPersonas:(id *)a0 usingBlock:(id /* block */)a1;

@end
