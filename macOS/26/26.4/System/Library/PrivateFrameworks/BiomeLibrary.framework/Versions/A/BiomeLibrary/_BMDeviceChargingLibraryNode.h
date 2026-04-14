@interface _BMDeviceChargingLibraryNode : _BMLibraryNode

+ (id)streamWithName:(id)a0;
+ (id)streamNames;
+ (id)sublibraries;
+ (id)validKeyPaths;
+ (id)identifier;
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
