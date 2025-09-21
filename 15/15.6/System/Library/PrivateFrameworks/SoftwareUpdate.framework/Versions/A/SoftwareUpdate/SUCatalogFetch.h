@class NSString, NSDictionary, NSURL, NSError;

@interface SUCatalogFetch : NSObject {
    NSDictionary *_catalogDictionary;
    NSURL *_finalURL;
    NSURL *_setCatalogURL;
    NSString *_previousEntityTag;
    char _skipIfUnchanged;
    NSString *_currentEntityTag;
    char _didUseDefaultURL;
    NSError *_error;
}

+ (id)catalogURL;
+ (id)defaultAppleCatalogURL;
+ (id)preferredCatalogURLsWithExtendedValidationEnforcement:(id *)a0;
+ (id)priorProductionCatalogURLs;

- (void)dealloc;
- (id)init;
- (id)error;
- (id)finalURL;
- (id)_fetchAppleCatalogDictionaryReturningError:(id *)a0 finalURL:(id *)a1 setURL:(id *)a2;
- (id)_fetchCatalogDictionaryReturningError:(id *)a0 finalURL:(id *)a1 setURL:(id *)a2 isAppleDefault:(char *)a3 usingURL:(id)a4;
- (id)_fetchDictionaryFromURL:(id)a0 returningError:(id *)a1;
- (id)catalogDictionary;
- (id)catalogEntityTag;
- (id)initWithURL:(id)a0 previousEntityTag:(id)a1 skipIfUnchanged:(char)a2;
- (char)isCatalogChanged;
- (char)isDefaultAppleCatalogURL;
- (char)isEVProtected;
- (id)systemConfiguredCatalogURL;

@end
