@class NSMutableDictionary, NSString, NSLock, NSUserDefaults;

@interface MorphunAssets : NSObject

@property (retain, nonatomic) NSUserDefaults *subscriptionCache;
@property (retain, nonatomic) NSMutableDictionary *subscriptionView;
@property (retain) NSLock *subscriptionViewLock;
@property (retain, nonatomic) NSString *subscriptionProcessKey;
@property (retain) NSMutableDictionary *readyLanguages;

+ (id)get;
+ (id)getAssetPathForLocale:(id)a0;
+ (BOOL)isLocaleEmbedded:(id)a0;
+ (id)blockingOnDemandDownloadForLocale:(id)a0 withTimeout:(unsigned long long)a1 withProgress:(id /* block */)a2;
+ (void)onDemandDownloadForLocale:(id)a0 withProgress:(id /* block */)a1 withCompletion:(id /* block */)a2;
+ (id)blockingRemoveAssetForLocale:(id)a0 withTimeout:(unsigned long long)a1;
+ (id)SupportedLocales;
+ (void)setTrialNamespaceToUse:(long long)a0;
+ (id)getTRINamespaceName:(long long)a0;
+ (id)EmbeddedLanguages;
+ (BOOL)validateLanguageCode:(id)a0;
+ (BOOL)isLanguageEmbedded:(id)a0;
+ (id)getAssetPathForLanguageCode:(id)a0;
+ (void)MorphunAssetsLazyInitIfNeeded;
+ (id)getTRIClient;
+ (id)getAssetForLanguageCode:(id)a0;
+ (id)getFactorNameForLanguageCode:(id)a0;
+ (id)getCurrentNamespaceName;
+ (id)blockingRemoveAssetForLanguageCode:(id)a0 withTimeout:(unsigned long long)a1;
+ (void)removeAssetForLanguageCode:(id)a0 withCompletion:(id /* block */)a1;
+ (void)onDemandDownloadForLanguageCode:(id)a0 withProgress:(id /* block */)a1 withCompletion:(id /* block */)a2;
+ (id)blockingOnDemandDownloadForLanguageCode:(id)a0 withTimeout:(unsigned long long)a1 withProgress:(id /* block */)a2;
+ (long long)getCurrentNamespace;
+ (id)MorphunDomain;
+ (id)SupportedLanguages;
+ (id)EmbeddedLocales;
+ (id)EmbeddedVersion;
+ (id)getFactorNameForLocale:(id)a0;
+ (id)getAssetPathForCurrentSiriLanguage;
+ (void)removeAssetForLocale:(id)a0 withCompletion:(id /* block */)a1;
+ (void)registerForTRINamespaceUpdates;
+ (id)subscriptionDbInitializerWithKey:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)validateLocale:(id)a0;
- (void)writeSubscriptionView;
- (void)readSubscriptionView;
- (id)processSubscriptions;
- (void)setLanguageReadinessFromTrial;
- (id)referenceCountsFromSubscriptionView;
- (void)downloadLanguageIfNeeded:(id)a0 withCompletion:(id /* block */)a1;
- (void)removeLanguageIfNeeded:(id)a0;
- (void)subscribeToLocale:(id)a0 withCompletion:(id /* block */)a1;
- (void)unsubscribeFromLocale:(id)a0;
- (BOOL)isSubscribedToLocale:(id)a0;
- (BOOL)isAssetReadyForLocale:(id)a0;
- (id)listSubscriptions;
- (id)getMorphunDataPathForLocale:(id)a0;

@end
