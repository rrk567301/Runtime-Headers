@class NSArray, NSString, NSLocale;

@interface IPLanguageListManager : NSObject

@property (retain, nonatomic) NSArray *preferredLanguages;
@property (retain, nonatomic) NSLocale *preferredLocale;
@property (readonly, nonatomic) NSArray *systemLanguages;
@property (readonly, nonatomic) NSString *deviceLanguage;
@property (readonly, nonatomic) NSString *systemDisplayLanguage;

+ (id)manager;
+ (id)generator;
+ (void)preheat;
+ (char)canRemoveLanguages:(id)a0 fromPreferredLanguages:(id)a1;
+ (id)effectiveSystemLanguagesWithUnsupportedVariant:(char)a0 forPreferredLanguages:(id)a1;
+ (id)regionalVariantLanguagesForBaseLanguage:(id)a0;
+ (id)regionalVariantLanguagesForSystemLanguages;
+ (void)sortByLocalizedLanguage:(id)a0;

- (void).cxx_destruct;
- (id)initWithPreferredLanguages:(id)a0;
- (id)deviceLanguagesForChangingDeviceLanguage:(char)a0;
- (id)initWithPreferredLanguages:(id)a0 preferredLocale:(id)a1;
- (id)initWithPreferredLanguages:(id)a0 preferredLocale:(id)a1 systemLanguages:(id)a2;
- (id)languageVariants;
- (id)otherLanguages;
- (void)setRegion:(id)a0 updateFirstLanguage:(char)a1;

@end
