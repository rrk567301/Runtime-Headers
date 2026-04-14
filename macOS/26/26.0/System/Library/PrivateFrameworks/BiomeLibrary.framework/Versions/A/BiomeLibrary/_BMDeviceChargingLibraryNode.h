@interface _BMDeviceChargingLibraryNode : _BMLibraryNode

+ (id)identifier;
+ (id)sublibraries;
+ (id)streamWithName:(id)a0;
+ (id)streamNames;
+ (id)validKeyPaths;
+ (id)BatteryGauging;
+ (id)SmartCharging;
+ (id)AccessoryChargingSession;
+ (id)configurationForAccessoryChargingSession;
+ (id)configurationForBatteryGauging;
+ (id)configurationForSmartCharging;
+ (id)storeConfigurationForAccessoryChargingSession;
+ (id)storeConfigurationForBatteryGauging;
+ (id)storeConfigurationForSmartCharging;
+ (id)syncPolicyForAccessoryChargingSession;
+ (id)syncPolicyForBatteryGauging;
+ (id)syncPolicyForSmartCharging;

@end
