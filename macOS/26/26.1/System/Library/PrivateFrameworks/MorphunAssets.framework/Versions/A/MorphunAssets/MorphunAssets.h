@class NSMutableDictionary, NSString, UAFAssetSetObserver, NSLock, NSUserDefaults;

@interface MorphunAssets : NSObject

@property (retain, nonatomic) NSUserDefaults *subscriptionCache;
@property (retain, nonatomic) NSMutableDictionary *subscriptionView;
@property (retain) NSLock *subscriptionViewLock;
@property (retain, nonatomic) NSString *subscriptionProcessKey;
@property (retain) NSMutableDictionary *readyLanguages;
@property (retain, nonatomic) UAFAssetSetObserver *subscriptionAssetSetObserver;

+ (id)get;
+ (id)getUAFAssetSetName;
+ (long long)deliveryMethodForLocale:(id)a0;
+ (id)getUAFAssetName;
+ (id)bcpStringForComponentArray:(id)a0;
+ (id)getUAFAssetSetForUsageValue:(id)a0;
+ (id)SupportedSiriLocales;
+ (id)getAssetPathForLocale:(id)a0 withError:(id *)a1;
+ (void)initForSiriX:(id /* block */)a0;
+ (id)getAssetPathForCurrentSiriLanguage;
+ (id)getFactorNameForLocale:(id)a0;
+ (BOOL)canUpdateExistingAssetSet:(id)a0 withNewAssetSet:(id)a1 forUsageValue:(id)a2;
+ (id)EmbeddedVersion;
+ (id)getFactorSuffixForLocale:(id)a0;
+ (id)getUAFUsageType;
+ (BOOL)validateLanguageCode:(id)a0;
+ (void)observeUAFAssetSet;
+ (id)blockingOnDemandDownloadForLocale:(id)a0 withTimeout:(unsigned long long)a1 withProgress:(id /* block */)a2;
+ (void)updateUAFAssetSetForUsageValue:(id)a0;
+ (id)getUAFAssetSets;
+ (id)MorphunDomain;
+ (id)SupportedLanguages;
+ (id)getUAFAssetForLocale:(id)a0;
+ (void)removeAssetForLocale:(id)a0 withCompletion:(id /* block */)a1;
+ (id)EmbeddedLanguages;
+ (id)SupportedLocales;
+ (id)uLocaleToNSLocale:(const void *)a0;
+ (BOOL)isLocaleDownloadSupported:(id)a0;
+ (id)validateLocale:(id)a0;
+ (id)getAssetPathForLocale:(id)a0;
+ (id)bcpStringForLocale:(id)a0;
+ (id)getUAFUsageValueForLocale:(id)a0;
+ (id)SupportedSiriLanguages;
+ (id)subscriptionDbInitializerWithKey:(id)a0;
+ (id)blockingRemoveAssetForLocale:(id)a0 withTimeout:(unsigned long long)a1;
+ (id)assetPathDB;
+ (void)onDemandDownloadForLocale:(id)a0 withProgress:(id /* block */)a1 withCompletion:(id /* block */)a2;
+ (BOOL)isLocaleEmbedded:(id)a0;
+ (id)componentArrayForLocale:(id)a0;
+ (id)EmbeddedLocales;
+ (void)MorphunAssetsLazyInitIfNeeded;

- (void)downloadLocaleIfNeeded:(id)a0 withCompletion:(id /* block */)a1;
- (void)writeSubscriptionView;
- (BOOL)isSubscribedToLocale:(id)a0;
- (id)referenceCountsFromSubscriptionView;
- (void)subscribeToLocale:(id)a0 withCompletion:(id /* block */)a1;
- (void)removeLanguageIfNeeded:(id)a0;
- (id)getMorphunDataPathForLocale:(id)a0;
- (void)readSubscriptionView;
- (void).cxx_destruct;
- (id)listSubscriptions;
- (BOOL)isAssetReadyForLocale:(id)a0;
- (id)getMorphunDataPathForLocale:(id)a0 withError:(id *)a1;
- (id)processSubscriptions;
- (void)unsubscribeFromLocale:(id)a0;
- (id)init;

@end
