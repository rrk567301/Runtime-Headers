@interface NSMenuUtils : NSObject

+ (unsigned int)displayFromUUIDString:(const struct __CFString **)a0;
+ (unsigned int)displayForSpace:(unsigned long long)a0;
+ (unsigned int)_systemUIModeFromProcessAttributes:(void *)a0;
+ (unsigned int)_systemUIOptionsFromProcessAttributes:(void *)a0;
+ (unsigned long long)getActiveSpace:(unsigned int *)a0;
+ (id)defaultLanguageString:(id)a0 inTable:(id)a1;
+ (struct __CFString { } *)_preferredLocalizationNameForBundle:(struct __CFBundle { } *)a0;
+ (id)preferredLanguageString:(id)a0 inTable:(id)a1;
+ (id)applicationUILocale;
+ (BOOL)isCurrentProcessMenuBarOwner;

@end
