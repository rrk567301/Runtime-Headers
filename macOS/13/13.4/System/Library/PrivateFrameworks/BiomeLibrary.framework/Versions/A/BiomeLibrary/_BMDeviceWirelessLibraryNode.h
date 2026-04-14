@interface _BMDeviceWirelessLibraryNode : _BMLibraryNode

+ (id)identifier;
+ (id)validKeyPaths;
+ (id)streamWithName:(id)a0;
+ (id)streamNames;
+ (id)sublibraries;
+ (id)Bluetooth;
+ (id)DefaultPairedNearby;
+ (id)NFCTag;
+ (id)AirplaneMode;
+ (id)BluetoothGATTSession;
+ (id)WiFi;
+ (id)configurationForAirplaneMode;
+ (id)configurationForBluetooth;
+ (id)configurationForBluetoothGATTSession;
+ (id)configurationForDefaultPairedNearby;
+ (id)configurationForNFCTag;
+ (id)configurationForWiFi;
+ (id)storeConfigurationForAirplaneMode;
+ (id)storeConfigurationForBluetooth;
+ (id)storeConfigurationForBluetoothGATTSession;
+ (id)storeConfigurationForDefaultPairedNearby;
+ (id)storeConfigurationForNFCTag;
+ (id)storeConfigurationForWiFi;
+ (id)syncPolicyForAirplaneMode;
+ (id)syncPolicyForBluetooth;
+ (id)syncPolicyForBluetoothGATTSession;
+ (id)syncPolicyForDefaultPairedNearby;
+ (id)syncPolicyForNFCTag;
+ (id)syncPolicyForWiFi;

@end
