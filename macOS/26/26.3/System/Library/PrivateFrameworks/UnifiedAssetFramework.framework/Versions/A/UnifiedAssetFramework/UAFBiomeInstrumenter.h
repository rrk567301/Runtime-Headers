@interface UAFBiomeInstrumenter : NSObject

+ (id)defaultDeviceId;
+ (id)_getBiomeAssetSetStatus:(id)a0 assetSetId:(id)a1 entries:(id)a2 errorCodes:(id)a3 fromPSUS:(BOOL)a4;
+ (id)_constructBiomeAssetSet:(id)a0 storeManager:(id)a1;
+ (id)_createBiomeAssetSet:(id)a0 withAssets:(id)a1;
+ (int)_getAssetSource:(id)a0;
+ (id)_getBiomeEventDeviceMetadata;
+ (id)_getBiomeStreamForAssetSetStatus:(id)a0 assetSetId:(id)a1 entries:(id)a2 errorCodes:(id)a3 fromPSUS:(BOOL)a4 assetSetDailyStatusEventType:(unsigned long long)a5;
+ (id)_getBiomeStreamForScheduledDailyAssetStatus;
+ (id)_getBiomeUAFAssetSet:(id)a0 assetSetId:(id)a1 entries:(id)a2 errorCodes:(id)a3 fromPSUS:(BOOL)a4;
+ (id)_getSubscriptionsStatus;
+ (BOOL)isBiomeAvailable;
+ (void)logAlterSetFromPSUSAtomicInstance:(id)a0 addedAssets:(id)a1 removedAssets:(id)a2;
+ (void)logAssetSetDownloadEvent:(id)a0 assetSetId:(id)a1 entries:(id)a2 errorCodes:(id)a3 fromPSUS:(BOOL)a4 assetSetDailyStatusEventType:(unsigned long long)a5;
+ (void)logScheduledDailyAssetStatus;

@end
