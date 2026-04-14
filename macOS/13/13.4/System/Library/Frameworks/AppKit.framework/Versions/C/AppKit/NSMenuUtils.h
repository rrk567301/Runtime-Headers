@interface NSMenuUtils : NSObject

+ (unsigned long long)getActiveSpace:(unsigned int *)a0;
+ (struct __CFString { } *)_preferredLocalizationNameForBundle:(struct __CFBundle { } *)a0;
+ (unsigned int)_systemUIModeFromProcessAttributes:(void *)a0;
+ (unsigned int)_systemUIOptionsFromProcessAttributes:(void *)a0;
+ (id)applicationUILocale;
+ (id)defaultLanguageString:(id)a0 inTable:(id)a1;
+ (unsigned int)displayForSpace:(unsigned long long)a0;
+ (unsigned int)displayFromUUIDString:(const struct __CFString **)a0;
+ (BOOL)isCurrentProcessMenuBarOwner;
+ (id)preferredLanguageString:(id)a0 inTable:(id)a1;

@end
