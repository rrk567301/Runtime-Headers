@interface _CDNetworkContext : NSObject

+ (long long)cellInterfaceClass:(id)a0;
+ (long long)wiredInterfaceClass:(id)a0;
+ (long long)qualityForPath:(id)a0 inContext:(id)a1;
+ (long long)wiredQuality:(id)a0;
+ (id)connectionQualityKey;
+ (BOOL)inexpensiveNetworkingAvailable:(id)a0;
+ (BOOL)networkingAvailable:(id)a0;
+ (id)keyPathForWiredConnectionStatus;
+ (id)keyPathForCellConnectionStatus;
+ (long long)cellUploadCost:(id)a0;
+ (id)keyPathForWiFiConnectionStatus;
+ (id)downloadPowerCostKey;
+ (id)interfaceClassKey;
+ (long long)cellQuality:(id)a0;
+ (id)uploadPowerCostKey;
+ (long long)cellDownloadCost:(id)a0;
+ (long long)interfaceClassForPath:(id)a0 inContext:(id)a1;
+ (id)predictionKey;
+ (BOOL)cellInterfaceUp:(id)a0;
+ (id)loiKey;
+ (long long)wifiQuality:(id)a0;
+ (id)interfaceUpKey;
+ (long long)wifiInterfaceClass:(id)a0;

@end
