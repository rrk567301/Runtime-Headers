@interface _CDNetworkContext : NSObject

+ (id)downloadPowerCostKey;
+ (long long)wifiInterfaceClass:(id)a0;
+ (long long)wiredQuality:(id)a0;
+ (BOOL)networkingAvailable:(id)a0;
+ (long long)interfaceClassForPath:(id)a0 inContext:(id)a1;
+ (id)loiKey;
+ (id)interfaceUpKey;
+ (id)uploadPowerCostKey;
+ (long long)wifiQuality:(id)a0;
+ (id)keyPathForWiredConnectionStatus;
+ (long long)wiredInterfaceClass:(id)a0;
+ (long long)cellInterfaceClass:(id)a0;
+ (long long)cellDownloadCost:(id)a0;
+ (id)keyPathForWiFiConnectionStatus;
+ (id)keyPathForCellConnectionStatus;
+ (id)predictionKey;
+ (id)connectionQualityKey;
+ (long long)cellUploadCost:(id)a0;
+ (BOOL)cellInterfaceUp:(id)a0;
+ (long long)qualityForPath:(id)a0 inContext:(id)a1;
+ (long long)cellQuality:(id)a0;
+ (id)interfaceClassKey;
+ (BOOL)inexpensiveNetworkingAvailable:(id)a0;

@end
