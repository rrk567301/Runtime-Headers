@class NSMutableDictionary, NSString, NSLock, NSUserDefaults;

@interface MorphunAssets : NSObject

@property (retain, nonatomic) NSUserDefaults *subscriptionCache;
@property (retain, nonatomic) NSMutableDictionary *subscriptionView;
@property (retain) NSLock *subscriptionViewLock;
@property (retain, nonatomic) NSString *subscriptionProcessKey;
@property (retain) NSMutableDictionary *readyLanguages;

+ (id)get;
+ (id)blockingOnDemandDownloadForLocale:(id)a0 withTimeout:(unsigned long long)a1 withProgress:(id /* block */)a2;
+ (id)getAssetPathForLocale:(id)a0 withError:(id *)a1;
+ (BOOL)isLocaleEmbedded:(id)a0;
+ (void)onDemandDownloadForLocale:(id)a0 withProgress:(id /* block */)a1 withCompletion:(id /* block */)a2;
+ (id)validateLocale:(id)a0;
+ (id)SupportedLocales;
+ (id)blockingRemoveAssetForLocale:(id)a0 withTimeout:(unsigned long long)a1;
+ (id)getAssetPathForLocale:(id)a0;
+ (id)EmbeddedLocales;
+ (id)EmbeddedLanguages;
+ (id)MorphunDomain;
+ (id)EmbeddedVersion;
+ (void)MorphunAssetsLazyInitIfNeeded;
+ (id)SupportedLanguages;
+ (id)bcpStringForComponentArray:(id)a0;
+ (id)bcpStringForLocale:(id)a0;
+ (id)blockingOnDemandDownloadForLanguageCode:(id)a0 withTimeout:(unsigned long long)a1 withProgress:(id /* block */)a2;
+ (id)blockingRemoveAssetForLanguageCode:(id)a0 withTimeout:(unsigned long long)a1;
+ (id)componentArrayForLocale:(id)a0;
+ (long long)deliveryMethodForLocale:(id)a0;
+ (void)downloadFactors:(id)a0 withProgress:(id /* block */)a1 withCompletion:(id /* block */)a2;
+ (id)getAssetForFactorName:(id)a0;
+ (id)getAssetForLanguageCode:(id)a0;
+ (id)getAssetForLocale:(id)a0;
+ (id)getAssetPathForCurrentSiriLanguage;
+ (id)getAssetPathForLanguageCode:(id)a0;
+ (long long)getCurrentNamespace;
+ (id)getCurrentNamespaceName;
+ (id)getFactorNameForLanguageCode:(id)a0;
+ (id)getFactorNameForLocale:(id)a0;
+ (id)getFactorSuffixForLocale:(id)a0;
+ (id)getTRIClient;
+ (id)getTRINamespaceName;
+ (void)initForSiriX:(id /* block */)a0;
+ (BOOL)isLanguageEmbedded:(id)a0;
+ (BOOL)isLocaleDownloadSupported:(id)a0;
+ (void)onDemandDownloadForLanguageCode:(id)a0 withProgress:(id /* block */)a1 withCompletion:(id /* block */)a2;
+ (void)registerForTRINamespaceUpdates;
+ (void)removeAssetForLanguageCode:(id)a0 withCompletion:(id /* block */)a1;
+ (void)removeAssetForLocale:(id)a0 withCompletion:(id /* block */)a1;
+ (void)setTrialNamespaceToUse:(long long)a0;
+ (id)subscriptionDbInitializerWithKey:(id)a0;
+ (id)uLocaleToNSLocale:(const void *)a0;
+ (BOOL)validateLanguageCode:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)downloadLocaleIfNeeded:(id)a0 withCompletion:(id /* block */)a1;
- (id)getMorphunDataPathForLocale:(id)a0;
- (id)getMorphunDataPathForLocale:(id)a0 withError:(id *)a1;
- (BOOL)isAssetReadyForLocale:(id)a0;
- (BOOL)isSubscribedToLocale:(id)a0;
- (id)listSubscriptions;
- (id)processSubscriptions;
- (void)readSubscriptionView;
- (id)referenceCountsFromSubscriptionView;
- (void)removeLanguageIfNeeded:(id)a0;
- (void)setLanguageReadinessFromTrial;
- (void)subscribeToLocale:(id)a0 withCompletion:(id /* block */)a1;
- (void)unsubscribeFromLocale:(id)a0;
- (void)writeSubscriptionView;

@end
