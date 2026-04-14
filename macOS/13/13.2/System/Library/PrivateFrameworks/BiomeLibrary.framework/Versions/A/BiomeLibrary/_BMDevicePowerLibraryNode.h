@interface _BMDevicePowerLibraryNode : _BMLibraryNode

+ (id)identifier;
+ (id)validKeyPaths;
+ (id)streamNames;
+ (id)streamWithName:(id)a0;
+ (id)sublibraries;
+ (id)BatteryLevel;
+ (id)PluggedIn;
+ (id)LowPowerMode;
+ (id)EnergyMode;
+ (id)storeConfigurationForEnergyMode;
+ (id)syncPolicyForEnergyMode;
+ (id)configurationForEnergyMode;
+ (id)storeConfigurationForPluggedIn;
+ (id)syncPolicyForPluggedIn;
+ (id)configurationForPluggedIn;
+ (id)storeConfigurationForLowPowerMode;
+ (id)syncPolicyForLowPowerMode;
+ (id)configurationForLowPowerMode;
+ (id)storeConfigurationForBatteryLevel;
+ (id)syncPolicyForBatteryLevel;
+ (id)configurationForBatteryLevel;

@end
