@interface _BMDevicePowerLibraryNode : _BMLibraryNode

+ (id)storeConfigurationForEnergyMode;
+ (id)configurationForEnergyMode;
+ (id)LowPowerMode;
+ (id)identifier;
+ (id)sublibraries;
+ (id)storeConfigurationForBatteryLevel;
+ (id)validKeyPaths;
+ (id)BatteryLevel;
+ (id)syncPolicyForBatteryLevel;
+ (id)syncPolicyForLowPowerMode;
+ (id)streamWithName:(id)a0;
+ (id)PluggedIn;
+ (id)storeConfigurationForLowPowerMode;
+ (id)configurationForBatteryLevel;
+ (id)configurationForLowPowerMode;
+ (id)configurationForPluggedIn;
+ (id)syncPolicyForEnergyMode;
+ (id)streamNames;
+ (id)storeConfigurationForPluggedIn;
+ (id)syncPolicyForPluggedIn;
+ (id)EnergyMode;

@end
