@class NSArray, NSBundle, NSLocale;

@interface Localize : NSObject

@property (class, readonly, nonatomic) NSLocale *systemLocale;
@property (class, readonly, nonatomic) NSArray *systemLocales;
@property (class, readonly, nonatomic) NSBundle *mainBundle;
@property (class, readonly, nonatomic) NSArray *availableLocaleNames;

+ (id)localizedStringForKey:(id)a0 value:(id)a1 table:(id)a2 localization:(id)a3;
+ (id)localizedStringsForTable:(id)a0 localization:(id)a1;
+ (id)cachedLocalizedStringForKey:(id)a0 value:(id)a1 table:(id)a2 localization:(id)a3;
+ (void)enumerateLocales:(id)a0 withBlock:(id /* block */)a1;
+ (void)initNumberingSystems:(id)a0;
+ (id)keyForLocales:(id)a0;
+ (id)locales:(id)a0 withDefault:(id)a1;
+ (id)localizationForLocale:(id)a0;
+ (id)localizeString:(id)a0 withNumberingSystem:(id)a1 locale:(id)a2;
+ (id)numberingSystemCharacterSet;
+ (id)numberingSystemForDigit:(id)a0;
+ (id)numberingSystemOutputCharacterSet;
+ (id)numberingSystems;

@end
