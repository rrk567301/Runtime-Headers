@interface UAFBiomeInstrumenter : NSObject

+ (id)defaultDeviceId;
+ (id)_getBiomeUAFAssetSet:(id)a0 atomicInstanceMetadata:(id)a1 entries:(id)a2 errorCodes:(id)a3;
+ (id)_collectAssetOriginMetadata:(id)a0 atomicInstanceOriginMetadata:(id)a1 entries:(id)a2;
+ (id)_constructBiomeAssetSet:(id)a0 storeManager:(id)a1;
+ (id)_createBiomeAssetSet:(id)a0 withAssets:(id)a1 sourceType:(unsigned long long)a2;
+ (int)_getAssetOriginType:(long long)a0;
+ (int)_getAssetSource:(id)a0;
+ (id)_getBiomeAssetSetStatus:(id)a0 atomicInstanceMetadata:(id)a1 entries:(id)a2 errorCodes:(id)a3;
+ (id)_getBiomeEventDeviceMetadata;
+ (id)_getBiomeStreamForAssetSetStatus:(id)a0 atomicInstanceMetadata:(id)a1 entries:(id)a2 errorCodes:(id)a3 assetSetDailyStatusEventType:(unsigned long long)a4;
+ (id)_getBiomeStreamForScheduledDailyAssetStatus;
+ (id)_getSubscriptionsStatus;
+ (BOOL)isBiomeAvailable;
+ (void)logAlterFromAtomicInstance:(id)a0 sourceType:(unsigned long long)a1 addedAssets:(id)a2 removedAssets:(id)a3;
+ (void)logAssetSetDownloadEvent:(id)a0 atomicInstanceMetadata:(id)a1 entries:(id)a2 errorCodes:(id)a3 assetSetDailyStatusEventType:(unsigned long long)a4;
+ (void)logScheduledDailyAssetStatus;

@end
