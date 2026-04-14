@interface IPFormat : NSObject

+ (void)setNumberFormat:(id)a0;
+ (id)localeFromDeviceLocale;
+ (id)localeFromDeviceLanguage;
+ (id)numberFormatterFromLocale;
+ (id)numberFormatterFromLanguage;

@end
