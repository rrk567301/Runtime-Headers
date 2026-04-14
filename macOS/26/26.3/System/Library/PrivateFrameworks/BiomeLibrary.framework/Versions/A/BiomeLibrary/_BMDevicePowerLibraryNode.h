@interface _BMDevicePowerLibraryNode : _BMLibraryNode

+ (id)sublibraries;
+ (id)identifier;
+ (id)configurationForEnergyMode;
+ (id)configurationForPluggedIn;
+ (id)EnergyMode;
+ (id)storeConfigurationForPluggedIn;
+ (id)syncPolicyForEnergyMode;
+ (id)storeConfigurationForBatteryLevel;
+ (id)BatteryLevel;
+ (id)validKeyPaths;
+ (id)syncPolicyForLowPowerMode;
+ (id)streamWithName:(id)a0;
+ (id)syncPolicyForBatteryLevel;
+ (id)storeConfigurationForLowPowerMode;
+ (id)streamNames;
+ (id)storeConfigurationForEnergyMode;
+ (id)PluggedIn;
+ (id)LowPowerMode;
+ (id)configurationForBatteryLevel;
+ (id)configurationForLowPowerMode;
+ (id)syncPolicyForPluggedIn;

@end
