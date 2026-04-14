@interface _CDNetworkContext : NSObject

+ (long long)cellUploadCost:(id)a0;
+ (long long)wifiInterfaceClass:(id)a0;
+ (long long)qualityForPath:(id)a0 inContext:(id)a1;
+ (long long)interfaceClassForPath:(id)a0 inContext:(id)a1;
+ (BOOL)cellInterfaceUp:(id)a0;
+ (long long)cellQuality:(id)a0;
+ (BOOL)inexpensiveNetworkingAvailable:(id)a0;
+ (id)keyPathForWiFiConnectionStatus;
+ (id)keyPathForCellConnectionStatus;
+ (id)predictionKey;
+ (long long)wiredQuality:(id)a0;
+ (id)interfaceUpKey;
+ (id)keyPathForWiredConnectionStatus;
+ (long long)cellDownloadCost:(id)a0;
+ (id)uploadPowerCostKey;
+ (id)connectionQualityKey;
+ (long long)cellInterfaceClass:(id)a0;
+ (BOOL)networkingAvailable:(id)a0;
+ (long long)wifiQuality:(id)a0;
+ (long long)wiredInterfaceClass:(id)a0;
+ (id)loiKey;
+ (id)interfaceClassKey;
+ (id)downloadPowerCostKey;

@end
