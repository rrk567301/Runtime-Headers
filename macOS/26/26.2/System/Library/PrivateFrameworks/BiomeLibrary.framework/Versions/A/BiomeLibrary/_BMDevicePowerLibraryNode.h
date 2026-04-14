@interface _BMDevicePowerLibraryNode : _BMLibraryNode

+ (id)identifier;
+ (id)LowPowerMode;
+ (id)BatteryLevel;
+ (id)PluggedIn;
+ (id)validKeyPaths;
+ (id)streamWithName:(id)a0;
+ (id)syncPolicyForLowPowerMode;
+ (id)storeConfigurationForPluggedIn;
+ (id)streamNames;
+ (id)configurationForLowPowerMode;
+ (id)configurationForEnergyMode;
+ (id)EnergyMode;
+ (id)sublibraries;
+ (id)storeConfigurationForBatteryLevel;
+ (id)storeConfigurationForEnergyMode;
+ (id)configurationForPluggedIn;
+ (id)syncPolicyForPluggedIn;
+ (id)syncPolicyForBatteryLevel;
+ (id)configurationForBatteryLevel;
+ (id)storeConfigurationForLowPowerMode;
+ (id)syncPolicyForEnergyMode;

@end
