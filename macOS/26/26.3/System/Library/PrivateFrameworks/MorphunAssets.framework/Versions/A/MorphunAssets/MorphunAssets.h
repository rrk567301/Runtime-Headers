@class NSMutableDictionary, NSString, UAFAssetSetObserver, NSLock, NSUserDefaults;

@interface MorphunAssets : NSObject

@property (retain, nonatomic) NSUserDefaults *subscriptionCache;
@property (retain, nonatomic) NSMutableDictionary *subscriptionView;
@property (retain) NSLock *subscriptionViewLock;
@property (retain, nonatomic) NSString *subscriptionProcessKey;
@property (retain) NSMutableDictionary *readyLanguages;
@property (retain, nonatomic) UAFAssetSetObserver *subscriptionAssetSetObserver;

+ (id)get;
+ (id)SupportedSiriLanguages;
+ (id)getUAFAssetForLocale:(id)a0;
+ (id)SupportedSiriLocales;
+ (id)getFactorSuffixForLocale:(id)a0;
+ (void)observeUAFAssetSet;
+ (id)getUAFAssetName;
+ (long long)deliveryMethodForLocale:(id)a0;
+ (void)MorphunAssetsLazyInitIfNeeded;
+ (id)getUAFUsageType;
+ (id)blockingOnDemandDownloadForLocale:(id)a0 withTimeout:(unsigned long long)a1 withProgress:(id /* block */)a2;
+ (id)validateLocale:(id)a0;
+ (id)getUAFAssetSetName;
+ (BOOL)validateLanguageCode:(id)a0;
+ (id)getAssetPathForLocale:(id)a0 withError:(id *)a1;
+ (id)blockingRemoveAssetForLocale:(id)a0 withTimeout:(unsigned long long)a1;
+ (BOOL)canUpdateExistingAssetSet:(id)a0 withNewAssetSet:(id)a1 forUsageValue:(id)a2;
+ (BOOL)isLocaleEmbedded:(id)a0;
+ (void)updateUAFAssetSetForUsageValue:(id)a0;
+ (id)bcpStringForLocale:(id)a0;
+ (id)getFactorNameForLocale:(id)a0;
+ (id)SupportedLanguages;
+ (id)bcpStringForComponentArray:(id)a0;
+ (id)uLocaleToNSLocale:(const void *)a0;
+ (id)getAssetPathForCurrentSiriLanguage;
+ (id)componentArrayForLocale:(id)a0;
+ (id)EmbeddedLocales;
+ (id)getUAFAssetSets;
+ (id)getUAFUsageValueForLocale:(id)a0;
+ (BOOL)isLocaleDownloadSupported:(id)a0;
+ (id)EmbeddedLanguages;
+ (id)getAssetPathForLocale:(id)a0;
+ (id)MorphunDomain;
+ (id)EmbeddedVersion;
+ (id)subscriptionDbInitializerWithKey:(id)a0;
+ (id)getUAFAssetSetForUsageValue:(id)a0;
+ (id)assetPathDB;
+ (void)onDemandDownloadForLocale:(id)a0 withProgress:(id /* block */)a1 withCompletion:(id /* block */)a2;
+ (void)initForSiriX:(id /* block */)a0;
+ (void)removeAssetForLocale:(id)a0 withCompletion:(id /* block */)a1;
+ (id)SupportedLocales;

- (void)writeSubscriptionView;
- (id)listSubscriptions;
- (void)unsubscribeFromLocale:(id)a0;
- (void)removeLanguageIfNeeded:(id)a0;
- (id)referenceCountsFromSubscriptionView;
- (void)subscribeToLocale:(id)a0 withCompletion:(id /* block */)a1;
- (id)init;
- (void)readSubscriptionView;
- (void)downloadLocaleIfNeeded:(id)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)isAssetReadyForLocale:(id)a0;
- (id)getMorphunDataPathForLocale:(id)a0;
- (id)processSubscriptions;
- (BOOL)isSubscribedToLocale:(id)a0;
- (id)getMorphunDataPathForLocale:(id)a0 withError:(id *)a1;

@end
