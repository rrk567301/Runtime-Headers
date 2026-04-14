@class NSMutableDictionary, NSString, NSLock, NSUserDefaults;

@interface MorphunAssets : NSObject

@property (retain, nonatomic) NSUserDefaults *subscriptionCache;
@property (retain, nonatomic) NSMutableDictionary *subscriptionView;
@property (retain) NSLock *subscriptionViewLock;
@property (retain, nonatomic) NSString *subscriptionProcessKey;
@property (retain) NSMutableDictionary *readyLanguages;

+ (id)get;
+ (void)onDemandDownloadForLocale:(id)a0 withProgress:(id /* block */)a1 withCompletion:(id /* block */)a2;
+ (id)blockingOnDemandDownloadForLocale:(id)a0 withTimeout:(unsigned long long)a1 withProgress:(id /* block */)a2;
+ (BOOL)isLocaleEmbedded:(id)a0;
+ (id)getAssetPathForLocale:(id)a0 withError:(id *)a1;
+ (id)validateLocale:(id)a0;
+ (id)blockingRemoveAssetForLocale:(id)a0 withTimeout:(unsigned long long)a1;
+ (id)getAssetPathForLocale:(id)a0;
+ (id)SupportedLocales;
+ (void)setTrialNamespaceToUse:(long long)a0;
+ (long long)getCurrentNamespace;
+ (id)getCurrentNamespaceName;
+ (id)MorphunDomain;
+ (id)uLocaleToNSLocale:(const void *)a0;
+ (id)SupportedLanguages;
+ (id)EmbeddedLanguages;
+ (id)EmbeddedLocales;
+ (BOOL)isLanguageEmbedded:(id)a0;
+ (BOOL)isLocaleDownloadSupported:(id)a0;
+ (long long)deliveryMethodForLocale:(id)a0;
+ (id)EmbeddedVersion;
+ (id)getAssetPathForLanguageCode:(id)a0;
+ (id)getFactorNameForLanguageCode:(id)a0;
+ (id)getFactorNameForLocale:(id)a0;
+ (id)getAssetPathForCurrentSiriLanguage;
+ (id)blockingRemoveAssetForLanguageCode:(id)a0 withTimeout:(unsigned long long)a1;
+ (void)removeAssetForLanguageCode:(id)a0 withCompletion:(id /* block */)a1;
+ (void)removeAssetForLocale:(id)a0 withCompletion:(id /* block */)a1;
+ (void)downloadFactors:(id)a0 withProgress:(id /* block */)a1 withCompletion:(id /* block */)a2;
+ (void)onDemandDownloadForLanguageCode:(id)a0 withProgress:(id /* block */)a1 withCompletion:(id /* block */)a2;
+ (id)blockingOnDemandDownloadForLanguageCode:(id)a0 withTimeout:(unsigned long long)a1 withProgress:(id /* block */)a2;
+ (void)MorphunAssetsLazyInitIfNeeded;
+ (void)registerForTRINamespaceUpdates;
+ (id)getTRIClient;
+ (id)getTRINamespaceName:(long long)a0;
+ (id)getAssetForFactorName:(id)a0;
+ (id)getAssetForLocale:(id)a0;
+ (id)getAssetForLanguageCode:(id)a0;
+ (BOOL)validateLanguageCode:(id)a0;
+ (id)bcpStringForLocale:(id)a0;
+ (id)bcpStringForComponentArray:(id)a0;
+ (id)componentArrayForLocale:(id)a0;
+ (id)getFactorSuffixForLocale:(id)a0;
+ (id)subscriptionDbInitializerWithKey:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)setLanguageReadinessFromTrial;
- (id)processSubscriptions;
- (void)readSubscriptionView;
- (void)writeSubscriptionView;
- (id)referenceCountsFromSubscriptionView;
- (void)downloadLocaleIfNeeded:(id)a0 withCompletion:(id /* block */)a1;
- (void)removeLanguageIfNeeded:(id)a0;
- (void)subscribeToLocale:(id)a0 withCompletion:(id /* block */)a1;
- (void)unsubscribeFromLocale:(id)a0;
- (BOOL)isSubscribedToLocale:(id)a0;
- (BOOL)isAssetReadyForLocale:(id)a0;
- (id)listSubscriptions;
- (id)getMorphunDataPathForLocale:(id)a0;
- (id)getMorphunDataPathForLocale:(id)a0 withError:(id *)a1;

@end
