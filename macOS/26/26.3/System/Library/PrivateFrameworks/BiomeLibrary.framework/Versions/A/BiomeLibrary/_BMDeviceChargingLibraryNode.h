@interface _BMDeviceChargingLibraryNode : _BMLibraryNode

+ (id)sublibraries;
+ (id)identifier;
+ (id)validKeyPaths;
+ (id)streamWithName:(id)a0;
+ (id)streamNames;
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
