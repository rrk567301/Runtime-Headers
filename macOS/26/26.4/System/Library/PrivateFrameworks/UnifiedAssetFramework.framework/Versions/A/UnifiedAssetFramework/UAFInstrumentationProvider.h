@interface UAFInstrumentationProvider : NSObject

+ (id)_getMADownloadErrors:(id)a0 newerVersionError:(id)a1 assetSetName:(id)a2 assetSetID:(id)a3;
+ (BOOL)_assetSetsComplete:(id)a0 assetSetCompleteness:(id)a1;
+ (long long)_deepestUnderlyingError:(id)a0;
+ (void)_emitAssetDailyStatusEvent:(id)a0 atomicInstanceMetadata:(id)a1 entries:(id)a2 assetSetDailyStatusEventType:(unsigned long long)a3;
+ (void)_emitSubscriptionComplete:(id)a0 subscriber:(id)a1 user:(id)a2 assetSets:(id)a3;
+ (void)_emitSubscriptionCompleteForAssetSet:(id)a0;
+ (id)_getAssetSpecifiersForSubscription:(id)a0 assetSetUsages:(id)a1;
+ (id)getSerialQueue;
+ (BOOL)isSiriAnalyticsAvailable;
+ (void)logAlterFromAtomicInstance:(id)a0 sourceType:(unsigned long long)a1 alterSetData:(id)a2;
+ (void)logAvailableAssetDailyStatus;
+ (void)logDownloadTriggerEventWithLanguage:(id)a0 hasExistingAssets:(BOOL)a1 retryCount:(unsigned int)a2;
+ (void)logSiriSubscription:(id)a0 subscriber:(id)a1 subscription:(id)a2 userId:(unsigned int)a3 locale:(id)a4 mode:(unsigned long long)a5 unsubscribed:(BOOL)a6;
+ (void)logSubscriptionCompleteForSubscriptions:(id)a0 subscriber:(id)a1 user:(id)a2;
+ (void)logUAFAssetSetDailyStatus:(id)a0 atomicInstanceMetadata:(id)a1 entries:(id)a2 assetSetDailyStatusEventType:(unsigned long long)a3;

@end
