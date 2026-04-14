@class NSString, NSDictionary, NSURL, NSError;

@interface SUCatalogFetch : NSObject {
    NSDictionary *_catalogDictionary;
    NSURL *_finalURL;
    NSURL *_setCatalogURL;
    NSString *_previousEntityTag;
    BOOL _skipIfUnchanged;
    NSString *_currentEntityTag;
    BOOL _didUseDefaultURL;
    NSError *_error;
}

+ (id)catalogURL;
+ (id)defaultAppleCatalogURL;
+ (BOOL)_isAppleSeedCatalogURL;
+ (id)priorProductionCatalogURLs;
+ (BOOL)isUsingAppleSeedCatalogURL;
+ (id)preferredCatalogURLsWithExtendedValidationEnforcement:(id *)a0;

- (void)dealloc;
- (id)init;
- (id)error;
- (id)finalURL;
- (id)_fetchDictionaryFromURL:(id)a0 returningError:(id *)a1;
- (BOOL)isCatalogChanged;
- (id)_fetchAppleCatalogDictionaryReturningError:(id *)a0 finalURL:(id *)a1 setURL:(id *)a2;
- (id)_fetchCatalogDictionaryReturningError:(id *)a0 finalURL:(id *)a1 setURL:(id *)a2 isAppleDefault:(BOOL *)a3 usingURL:(id)a4;
- (id)initWithURL:(id)a0 previousEntityTag:(id)a1 skipIfUnchanged:(BOOL)a2;
- (id)catalogDictionary;
- (id)systemConfiguredCatalogURL;
- (BOOL)isDefaultAppleCatalogURL;
- (BOOL)isEVProtected;
- (BOOL)isAppleSeedCatalogURL;
- (id)catalogEntityTag;

@end
