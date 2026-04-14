@interface UAFInstrumentationProvider : NSObject

+ (id)_constructNamespaceStatusEventForNamespace:(unsigned int)a0 withClient:(id)a1;
+ (id)_constructSelfAssetSet:(id)a0 storeManager:(id)a1;
+ (int)_getAssetSource:(id)a0;
+ (void)logAvailableAssetDailyStatus;
+ (void)logDownloadTriggerEventWithLanguage:(id)a0 hasExistingAssets:(BOOL)a1 retryCount:(unsigned int)a2;
+ (id)logSubscriptionsStatus;
+ (void)logUAFAssetSetDailyStatus:(id)a0;

@end
