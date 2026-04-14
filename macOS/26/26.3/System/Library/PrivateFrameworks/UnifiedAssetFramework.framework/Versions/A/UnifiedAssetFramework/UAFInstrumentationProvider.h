@interface UAFInstrumentationProvider : NSObject

+ (void)logUAFAssetSetDailyStatus:(id)a0 entries:(id)a1 assetSetDailyStatusEventType:(unsigned long long)a2;
+ (BOOL)_assetSetsComplete:(id)a0 assetSetCompleteness:(id)a1;
+ (long long)_deepestUnderlyingError:(id)a0;
+ (void)_emitAssetDailyStatusEvent:(id)a0 entries:(id)a1 assetSetDailyStatusEventType:(unsigned long long)a2;
+ (void)_emitSubscriptionComplete:(id)a0 subscriber:(id)a1 user:(id)a2 assetSets:(id)a3;
+ (void)_emitSubscriptionCompleteForAssetSet:(id)a0;
+ (id)_getAssetSpecifiersForSubscription:(id)a0 assetSetUsages:(id)a1;
+ (id)_getMADownloadErrors:(id)a0 assetSetName:(id)a1 assetSetID:(id)a2;
+ (id)getSerialQueue;
+ (BOOL)isSiriAnalyticsAvailable;
+ (void)logAlterSetFromPSUSAtomicInstance:(id)a0 alterSetData:(id)a1;
+ (void)logAvailableAssetDailyStatus;
+ (void)logDownloadTriggerEventWithLanguage:(id)a0 hasExistingAssets:(BOOL)a1 retryCount:(unsigned int)a2;
+ (void)logSiriSubscription:(id)a0 subscriber:(id)a1 subscription:(id)a2 userId:(unsigned int)a3 locale:(id)a4 mode:(unsigned long long)a5 unsubscribed:(BOOL)a6;
+ (void)logSubscriptionCompleteForSubscriptions:(id)a0 subscriber:(id)a1 user:(id)a2;

@end
