@interface BMPersonaUtilities : NSObject

+ (id)allProfilesWithError:(id *)a0;
+ (id)currentPersonaIdentifier;
+ (id)currentPersonaIdentifierLoggingDescription;
+ (char)currentPersonaIsDefault;
+ (char)isUserPersonaIdentifier:(id)a0;
+ (void)runAsPersonaIdentifier:(id)a0 block:(id /* block */)a1;

@end
