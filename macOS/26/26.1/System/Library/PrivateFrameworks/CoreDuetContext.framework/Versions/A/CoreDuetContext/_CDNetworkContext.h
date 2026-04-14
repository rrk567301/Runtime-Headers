@interface _CDNetworkContext : NSObject

+ (id)keyPathForWiFiConnectionStatus;
+ (long long)cellUploadCost:(id)a0;
+ (BOOL)inexpensiveNetworkingAvailable:(id)a0;
+ (id)interfaceClassKey;
+ (id)keyPathForCellConnectionStatus;
+ (long long)cellInterfaceClass:(id)a0;
+ (BOOL)cellInterfaceUp:(id)a0;
+ (id)downloadPowerCostKey;
+ (id)uploadPowerCostKey;
+ (long long)wifiQuality:(id)a0;
+ (id)predictionKey;
+ (id)connectionQualityKey;
+ (long long)wiredInterfaceClass:(id)a0;
+ (long long)wifiInterfaceClass:(id)a0;
+ (long long)qualityForPath:(id)a0 inContext:(id)a1;
+ (long long)interfaceClassForPath:(id)a0 inContext:(id)a1;
+ (BOOL)networkingAvailable:(id)a0;
+ (id)loiKey;
+ (long long)wiredQuality:(id)a0;
+ (id)interfaceUpKey;
+ (long long)cellDownloadCost:(id)a0;
+ (long long)cellQuality:(id)a0;
+ (id)keyPathForWiredConnectionStatus;

@end
