@class NSMutableDictionary, NSString, UAFAssetSetObserver, NSLock, NSUserDefaults;

@interface MorphunAssets : NSObject

@property (retain, nonatomic) NSUserDefaults *subscriptionCache;
@property (retain, nonatomic) NSMutableDictionary *subscriptionView;
@property (retain) NSLock *subscriptionViewLock;
@property (retain, nonatomic) NSString *subscriptionProcessKey;
@property (retain) NSMutableDictionary *readyLanguages;
@property (retain, nonatomic) UAFAssetSetObserver *subscriptionAssetSetObserver;

+ (void)observeUAFAssetSet;
+ (id)componentArrayForLocale:(id)a0;
+ (id)getUAFAssetName;
+ (id)SupportedLocales;
+ (id)getUAFAssetForLocale:(id)a0;
+ (id)SupportedSiriLanguages;
+ (id)EmbeddedLanguages;
+ (id)getFactorNameForLocale:(id)a0;
+ (id)EmbeddedLocales;
+ (BOOL)isLocaleDownloadSupported:(id)a0;
+ (id)bcpStringForComponentArray:(id)a0;
+ (void)updateUAFAssetSetForUsageValue:(id)a0;
+ (id)getFactorSuffixForLocale:(id)a0;
+ (id)getAssetPathForLocale:(id)a0;
+ (id)get;
+ (id)EmbeddedVersion;
+ (id)getUAFUsageType;
+ (id)subscriptionDbInitializerWithKey:(id)a0;
+ (BOOL)validateLanguageCode:(id)a0;
+ (BOOL)canUpdateExistingAssetSet:(id)a0 withNewAssetSet:(id)a1 forUsageValue:(id)a2;
+ (id)getAssetPathForLocale:(id)a0 withError:(id *)a1;
+ (id)uLocaleToNSLocale:(const void *)a0;
+ (id)getUAFUsageValueForLocale:(id)a0;
+ (id)bcpStringForLocale:(id)a0;
+ (void)initForSiriX:(id /* block */)a0;
+ (void)removeAssetForLocale:(id)a0 withCompletion:(id /* block */)a1;
+ (id)validateLocale:(id)a0;
+ (id)MorphunDomain;
+ (id)getAssetPathForCurrentSiriLanguage;
+ (id)getUAFAssetSetName;
+ (void)onDemandDownloadForLocale:(id)a0 withProgress:(id /* block */)a1 withCompletion:(id /* block */)a2;
+ (BOOL)isLocaleEmbedded:(id)a0;
+ (id)getUAFAssetSets;
+ (id)assetPathDB;
+ (void)MorphunAssetsLazyInitIfNeeded;
+ (long long)deliveryMethodForLocale:(id)a0;
+ (id)blockingOnDemandDownloadForLocale:(id)a0 withTimeout:(unsigned long long)a1 withProgress:(id /* block */)a2;
+ (id)getUAFAssetSetForUsageValue:(id)a0;
+ (id)blockingRemoveAssetForLocale:(id)a0 withTimeout:(unsigned long long)a1;
+ (id)SupportedLanguages;
+ (id)SupportedSiriLocales;

- (void)subscribeToLocale:(id)a0 withCompletion:(id /* block */)a1;
- (id)getMorphunDataPathForLocale:(id)a0 withError:(id *)a1;
- (void)writeSubscriptionView;
- (BOOL)isAssetReadyForLocale:(id)a0;
- (void)removeLanguageIfNeeded:(id)a0;
- (id)getMorphunDataPathForLocale:(id)a0;
- (void)readSubscriptionView;
- (id)referenceCountsFromSubscriptionView;
- (void)unsubscribeFromLocale:(id)a0;
- (id)init;
- (id)processSubscriptions;
- (void)downloadLocaleIfNeeded:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)isSubscribedToLocale:(id)a0;
- (id)listSubscriptions;
- (void).cxx_destruct;

@end
