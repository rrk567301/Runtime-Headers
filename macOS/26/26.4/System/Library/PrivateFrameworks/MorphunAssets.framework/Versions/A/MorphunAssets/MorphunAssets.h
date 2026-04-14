@class NSMutableDictionary, NSString, UAFAssetSetObserver, NSLock, NSUserDefaults;

@interface MorphunAssets : NSObject

@property (retain, nonatomic) NSUserDefaults *subscriptionCache;
@property (retain, nonatomic) NSMutableDictionary *subscriptionView;
@property (retain) NSLock *subscriptionViewLock;
@property (retain, nonatomic) NSString *subscriptionProcessKey;
@property (retain) NSMutableDictionary *readyLanguages;
@property (retain, nonatomic) UAFAssetSetObserver *subscriptionAssetSetObserver;

+ (void)initForSiriX:(id /* block */)a0;
+ (id)getAssetPathForCurrentSiriLanguage;
+ (void)updateUAFAssetSetForUsageValue:(id)a0;
+ (id)getFactorSuffixForLocale:(id)a0;
+ (id)get;
+ (id)getUAFAssetForLocale:(id)a0;
+ (id)getUAFAssetName;
+ (id)componentArrayForLocale:(id)a0;
+ (id)bcpStringForLocale:(id)a0;
+ (id)getAssetPathForLocale:(id)a0 withError:(id *)a1;
+ (id)blockingRemoveAssetForLocale:(id)a0 withTimeout:(unsigned long long)a1;
+ (void)removeAssetForLocale:(id)a0 withCompletion:(id /* block */)a1;
+ (BOOL)validateLanguageCode:(id)a0;
+ (id)SupportedSiriLanguages;
+ (id)getUAFAssetSets;
+ (id)getUAFAssetSetName;
+ (id)getUAFAssetSetForUsageValue:(id)a0;
+ (id)getUAFUsageType;
+ (id)bcpStringForComponentArray:(id)a0;
+ (BOOL)isLocaleEmbedded:(id)a0;
+ (id)getUAFUsageValueForLocale:(id)a0;
+ (BOOL)isLocaleDownloadSupported:(id)a0;
+ (void)MorphunAssetsLazyInitIfNeeded;
+ (id)validateLocale:(id)a0;
+ (id)assetPathDB;
+ (BOOL)canUpdateExistingAssetSet:(id)a0 withNewAssetSet:(id)a1 forUsageValue:(id)a2;
+ (void)onDemandDownloadForLocale:(id)a0 withProgress:(id /* block */)a1 withCompletion:(id /* block */)a2;
+ (id)EmbeddedLanguages;
+ (long long)deliveryMethodForLocale:(id)a0;
+ (id)MorphunDomain;
+ (id)EmbeddedLocales;
+ (id)SupportedSiriLocales;
+ (id)SupportedLanguages;
+ (id)subscriptionDbInitializerWithKey:(id)a0;
+ (id)blockingOnDemandDownloadForLocale:(id)a0 withTimeout:(unsigned long long)a1 withProgress:(id /* block */)a2;
+ (void)observeUAFAssetSet;
+ (id)uLocaleToNSLocale:(const void *)a0;
+ (id)getAssetPathForLocale:(id)a0;
+ (id)SupportedLocales;
+ (id)EmbeddedVersion;
+ (id)getFactorNameForLocale:(id)a0;

- (void)writeSubscriptionView;
- (void)subscribeToLocale:(id)a0 withCompletion:(id /* block */)a1;
- (void)downloadLocaleIfNeeded:(id)a0 withCompletion:(id /* block */)a1;
- (void)unsubscribeFromLocale:(id)a0;
- (id)listSubscriptions;
- (void).cxx_destruct;
- (id)getMorphunDataPathForLocale:(id)a0 withError:(id *)a1;
- (BOOL)isSubscribedToLocale:(id)a0;
- (BOOL)isAssetReadyForLocale:(id)a0;
- (void)readSubscriptionView;
- (id)init;
- (id)processSubscriptions;
- (void)removeLanguageIfNeeded:(id)a0;
- (id)getMorphunDataPathForLocale:(id)a0;
- (id)referenceCountsFromSubscriptionView;

@end
