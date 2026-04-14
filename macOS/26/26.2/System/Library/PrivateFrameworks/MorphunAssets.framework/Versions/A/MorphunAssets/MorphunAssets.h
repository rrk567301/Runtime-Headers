@class NSMutableDictionary, NSString, UAFAssetSetObserver, NSLock, NSUserDefaults;

@interface MorphunAssets : NSObject

@property (retain, nonatomic) NSUserDefaults *subscriptionCache;
@property (retain, nonatomic) NSMutableDictionary *subscriptionView;
@property (retain) NSLock *subscriptionViewLock;
@property (retain, nonatomic) NSString *subscriptionProcessKey;
@property (retain) NSMutableDictionary *readyLanguages;
@property (retain, nonatomic) UAFAssetSetObserver *subscriptionAssetSetObserver;

+ (id)SupportedLanguages;
+ (void)updateUAFAssetSetForUsageValue:(id)a0;
+ (id)blockingRemoveAssetForLocale:(id)a0 withTimeout:(unsigned long long)a1;
+ (void)removeAssetForLocale:(id)a0 withCompletion:(id /* block */)a1;
+ (id)MorphunDomain;
+ (id)componentArrayForLocale:(id)a0;
+ (id)getFactorSuffixForLocale:(id)a0;
+ (id)blockingOnDemandDownloadForLocale:(id)a0 withTimeout:(unsigned long long)a1 withProgress:(id /* block */)a2;
+ (id)getUAFUsageType;
+ (id)subscriptionDbInitializerWithKey:(id)a0;
+ (BOOL)canUpdateExistingAssetSet:(id)a0 withNewAssetSet:(id)a1 forUsageValue:(id)a2;
+ (BOOL)isLocaleEmbedded:(id)a0;
+ (id)bcpStringForComponentArray:(id)a0;
+ (id)getAssetPathForLocale:(id)a0 withError:(id *)a1;
+ (id)EmbeddedLanguages;
+ (id)SupportedLocales;
+ (id)getUAFAssetSetForUsageValue:(id)a0;
+ (BOOL)isLocaleDownloadSupported:(id)a0;
+ (id)getFactorNameForLocale:(id)a0;
+ (void)observeUAFAssetSet;
+ (void)onDemandDownloadForLocale:(id)a0 withProgress:(id /* block */)a1 withCompletion:(id /* block */)a2;
+ (id)SupportedSiriLanguages;
+ (id)getUAFAssetForLocale:(id)a0;
+ (id)getUAFAssetSetName;
+ (id)getAssetPathForCurrentSiriLanguage;
+ (id)getUAFAssetName;
+ (id)EmbeddedVersion;
+ (long long)deliveryMethodForLocale:(id)a0;
+ (id)EmbeddedLocales;
+ (BOOL)validateLanguageCode:(id)a0;
+ (id)getAssetPathForLocale:(id)a0;
+ (id)assetPathDB;
+ (id)uLocaleToNSLocale:(const void *)a0;
+ (id)get;
+ (void)MorphunAssetsLazyInitIfNeeded;
+ (id)getUAFUsageValueForLocale:(id)a0;
+ (id)getUAFAssetSets;
+ (id)bcpStringForLocale:(id)a0;
+ (id)SupportedSiriLocales;
+ (id)validateLocale:(id)a0;
+ (void)initForSiriX:(id /* block */)a0;

- (void)downloadLocaleIfNeeded:(id)a0 withCompletion:(id /* block */)a1;
- (id)getMorphunDataPathForLocale:(id)a0;
- (void)readSubscriptionView;
- (void)subscribeToLocale:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)isAssetReadyForLocale:(id)a0;
- (id)referenceCountsFromSubscriptionView;
- (void)writeSubscriptionView;
- (id)getMorphunDataPathForLocale:(id)a0 withError:(id *)a1;
- (BOOL)isSubscribedToLocale:(id)a0;
- (void).cxx_destruct;
- (id)processSubscriptions;
- (void)unsubscribeFromLocale:(id)a0;
- (void)removeLanguageIfNeeded:(id)a0;
- (id)init;
- (id)listSubscriptions;

@end
