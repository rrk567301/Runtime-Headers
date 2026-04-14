@interface _BMDeviceWirelessLibraryNode : _BMLibraryNode

+ (id)identifier;
+ (id)validKeyPaths;
+ (id)streamNames;
+ (id)streamWithName:(id)a0;
+ (id)sublibraries;
+ (id)Bluetooth;
+ (id)AirplaneMode;
+ (id)DefaultPairedNearby;
+ (id)NFCTag;
+ (id)WiFi;
+ (id)BluetoothGATTSession;
+ (id)storeConfigurationForAirplaneMode;
+ (id)syncPolicyForAirplaneMode;
+ (id)configurationForAirplaneMode;
+ (id)storeConfigurationForDefaultPairedNearby;
+ (id)syncPolicyForDefaultPairedNearby;
+ (id)configurationForDefaultPairedNearby;
+ (id)storeConfigurationForNFCTag;
+ (id)syncPolicyForNFCTag;
+ (id)configurationForNFCTag;
+ (id)storeConfigurationForWiFi;
+ (id)syncPolicyForWiFi;
+ (id)configurationForWiFi;
+ (id)storeConfigurationForBluetooth;
+ (id)syncPolicyForBluetooth;
+ (id)configurationForBluetooth;
+ (id)storeConfigurationForBluetoothGATTSession;
+ (id)syncPolicyForBluetoothGATTSession;
+ (id)configurationForBluetoothGATTSession;

@end
