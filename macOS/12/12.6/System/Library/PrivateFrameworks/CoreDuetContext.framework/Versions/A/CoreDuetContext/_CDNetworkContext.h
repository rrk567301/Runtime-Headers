@interface _CDNetworkContext : NSObject

+ (id)connectionQualityKey;
+ (id)keyPathForWiredConnectionStatus;
+ (id)keyPathForWiFiConnectionStatus;
+ (id)keyPathForCellConnectionStatus;
+ (id)interfaceClassKey;
+ (long long)interfaceClassForPath:(id)a0 inContext:(id)a1;
+ (long long)wifiQuality:(id)a0;
+ (long long)wiredQuality:(id)a0;
+ (BOOL)inexpensiveNetworkingAvailable:(id)a0;
+ (long long)cellQuality:(id)a0;
+ (id)interfaceUpKey;
+ (id)downloadPowerCostKey;
+ (id)uploadPowerCostKey;
+ (id)loiKey;
+ (id)predictionKey;
+ (long long)qualityForPath:(id)a0 inContext:(id)a1;
+ (long long)wiredInterfaceClass:(id)a0;
+ (long long)wifiInterfaceClass:(id)a0;
+ (long long)cellInterfaceClass:(id)a0;
+ (BOOL)networkingAvailable:(id)a0;
+ (BOOL)cellInterfaceUp:(id)a0;
+ (long long)cellDownloadCost:(id)a0;
+ (long long)cellUploadCost:(id)a0;

@end
