@interface SLPreferences : NSObject

+ (id)backedUpPreferencesValueForKey:(struct __CFString { } *)a0;
+ (id)allSupportedLocales;
+ (id)internalLocales;
+ (id)builtInHorsemanLanguages;
+ (id)builtInMultiUserLanguages;
+ (id)builtInLocales;
+ (id)builtInVisionLanguages;
+ (id)builtInZeusLanguages;
+ (id)builtIniOSLanguages;
+ (id)configValueForKey:(id)a0;
+ (id)valueForKeyWithContext:(struct __CFString { } *)a0 withDomain:(struct __CFString { } *)a1;

@end
