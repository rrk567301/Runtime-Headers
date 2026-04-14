@interface _BMContextSyncLibraryNode : _BMLibraryNode

+ (id)identifier;
+ (id)validKeyPaths;
+ (id)streamWithName:(id)a0;
+ (id)streamNames;
+ (id)sublibraries;
+ (id)LOI;
+ (id)CellularAvailabilityStatus;
+ (id)DeviceActivityLevel;
+ (id)WalletTransaction;
+ (id)configurationForCellularAvailabilityStatus;
+ (id)configurationForDeviceActivityLevel;
+ (id)configurationForLOI;
+ (id)configurationForWalletTransaction;
+ (id)storeConfigurationForCellularAvailabilityStatus;
+ (id)storeConfigurationForDeviceActivityLevel;
+ (id)storeConfigurationForLOI;
+ (id)storeConfigurationForWalletTransaction;
+ (id)syncPolicyForCellularAvailabilityStatus;
+ (id)syncPolicyForDeviceActivityLevel;
+ (id)syncPolicyForLOI;
+ (id)syncPolicyForWalletTransaction;

@end
