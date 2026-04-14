@class NSArray, NSString, NSLocale;

@interface IPLanguageListManager : NSObject

@property (retain, nonatomic) NSArray *preferredLanguages;
@property (retain, nonatomic) NSLocale *preferredLocale;
@property (readonly, nonatomic) NSArray *systemLanguages;
@property (readonly, nonatomic) NSString *systemDisplayLanguage;

+ (id)manager;
+ (id)generator;
+ (void)preheat;
+ (id)regionalVariantLanguagesForSystemLanguages;
+ (id)regionalVariantLanguagesForBaseLanguage:(id)a0;
+ (void)sortByLocalizedLanguage:(id)a0;
+ (id)effectiveSystemLanguagesWithUnsupportedVariant:(BOOL)a0 forPreferredLanguages:(id)a1;
+ (BOOL)canRemoveLanguages:(id)a0 fromPreferredLanguages:(id)a1;

- (void).cxx_destruct;
- (id)otherLanguages;
- (id)initWithPreferredLanguages:(id)a0 preferredLocale:(id)a1 systemLanguages:(id)a2;
- (id)deviceLanguagesForChangingDeviceLanguage:(BOOL)a0;
- (id)initWithPreferredLanguages:(id)a0 preferredLocale:(id)a1;
- (void)setRegion:(id)a0 updateFirstLanguage:(BOOL)a1;

@end
