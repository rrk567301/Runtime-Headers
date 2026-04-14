@class NSLocale;

@interface SCRNSLocale : SCRLocaleCommon

@property (nonatomic) unsigned long long characterDirection;
@property (readonly, nonatomic) NSLocale *_locale;

+ (id)currentLocale;
+ (id)autoupdatingCurrentLocale;

- (id)preferredLanguages;
- (id)preferredLanguage;
- (void).cxx_destruct;
- (unsigned long long)characterDirection;
- (id)initWithAutoUpdate:(BOOL)a0;

@end
