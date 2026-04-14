@interface _CDNetworkContext : NSObject

+ (id)predictionKey;
+ (id)downloadPowerCostKey;
+ (id)uploadPowerCostKey;
+ (long long)cellInterfaceClass:(id)a0;
+ (long long)wiredQuality:(id)a0;
+ (id)loiKey;
+ (long long)cellDownloadCost:(id)a0;
+ (long long)cellUploadCost:(id)a0;
+ (long long)qualityForPath:(id)a0 inContext:(id)a1;
+ (id)keyPathForCellConnectionStatus;
+ (id)interfaceUpKey;
+ (long long)cellQuality:(id)a0;
+ (BOOL)cellInterfaceUp:(id)a0;
+ (long long)interfaceClassForPath:(id)a0 inContext:(id)a1;
+ (long long)wifiInterfaceClass:(id)a0;
+ (id)connectionQualityKey;
+ (BOOL)inexpensiveNetworkingAvailable:(id)a0;
+ (long long)wiredInterfaceClass:(id)a0;
+ (id)keyPathForWiredConnectionStatus;
+ (id)interfaceClassKey;
+ (BOOL)networkingAvailable:(id)a0;
+ (long long)wifiQuality:(id)a0;
+ (id)keyPathForWiFiConnectionStatus;

@end
