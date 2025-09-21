@interface UAFInstrumentationProvider : NSObject

+ (void)_emitAssetDailyStatusEvent:(BOOL)a0 autoAssetSet:(id)a1 entries:(id)a2 assetSetArrived:(BOOL)a3;
+ (id)_getMADownloadErrors:(id)a0 assetSetName:(id)a1 assetSetID:(id)a2;
+ (id)getSerialQueue;
+ (BOOL)isSiriAnalyticsAvailable;
+ (void)logAvailableAssetDailyStatus;
+ (void)logDownloadTriggerEventWithLanguage:(id)a0 hasExistingAssets:(BOOL)a1 retryCount:(unsigned int)a2;
+ (void)logUAFAssetSetDailyStatus:(id)a0 entries:(id)a1 assetSetArrived:(BOOL)a2;

@end
