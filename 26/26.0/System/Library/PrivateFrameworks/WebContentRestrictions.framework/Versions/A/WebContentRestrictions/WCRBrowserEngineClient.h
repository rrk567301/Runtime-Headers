@class WCRURLList, NSString, NSDictionary, NSObject, WCRBloomFilter;
@protocol OS_dispatch_queue;

@interface WCRBrowserEngineClient : NSObject <WCRPINEntryViewControllerProtocol>

@property (retain) WCRBloomFilter *bloomFilter;
@property (retain) WCRURLList *allowList;
@property (retain) WCRURLList *denyList;
@property (retain) WCRURLList *allowedWebsitesOnlyList;
@property (retain, nonatomic) WCRURLList *macOSExemptURLList;
@property (retain) NSDictionary *userSettings;
@property (retain) NSString *language;
@property unsigned long long mode;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *evaluationQueue;
@property (retain, nonatomic) NSString *configurationPath;
@property (copy, nonatomic) id /* block */ allowURLCompletion;

+ (BOOL)shouldEvaluateURLs;
+ (id)_allowList:(id)a0;
+ (id)_allowedWebsitesOnly:(id)a0;
+ (id)_allowedWebsitesOnlyList:(id)a0;
+ (id)_blockPageForURL:(id)a0 forUser:(id)a1 inLanguage:(id)a2 isAllowedWebsitesOnlyBlock:(BOOL)a3 withAllowedWebsites:(id)a4 withAllowButton:(BOOL)a5;
+ (id)_defaultUserSettingsPath;
+ (id)_denyList:(id)a0;
+ (void)_evaluateURL:(id)a0 inMode:(unsigned long long)a1 usingBloomFilter:(id)a2 userSettings:(id)a3 language:(id)a4 allowList:(id)a5 denyList:(id)a6 allowedWebsitesOnlyList:(id)a7 macOSExemptURLList:(id)a8 withCompletion:(id /* block */)a9 onCompletionQueue:(id)a10;
+ (unsigned long long)_mode:(id)a0;
+ (id)_preferredLanguageForUserName:(id)a0;
+ (BOOL)_shouldEvaluateURLsForConfigurationAtPath:(id)a0;
+ (BOOL)_shouldShowAllowButton:(id)a0;
+ (void)allowURLWithFamilyControls:(id)a0 withCompletion:(id /* block */)a1;
+ (id)base64StringFromString:(id)a0;
+ (id)generateMacOSExemptURLList;
+ (BOOL)isLegacyExemptURL:(id)a0;
+ (BOOL)shouldEvaluateURLsForConfigurationAtPath:(id)a0;
+ (id)urlToFormattedString:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)allowURL:(id)a0 withCompletion:(id /* block */)a1;
- (void)evaluateURL:(id)a0 withCompletion:(id /* block */)a1 onCompletionQueue:(id)a2;
- (void)userDidCancel;
- (id)initWithConfigurationAtPath:(id)a0;
- (void)_performLazyInitialization;
- (void)_reloadConfiguration;
- (void)evaluateURL:(id)a0 withCompletion:(id /* block */)a1;
- (void)userEnteredCorrectPIN;

@end
