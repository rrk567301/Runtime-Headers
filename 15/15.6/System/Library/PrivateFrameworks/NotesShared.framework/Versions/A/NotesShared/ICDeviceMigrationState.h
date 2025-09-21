@class NSString, ICAccount, NSDate;

@interface ICDeviceMigrationState : ICCloudSyncingObject

@property (retain, nonatomic) ICAccount *account;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property (nonatomic) short state;
@property (retain, nonatomic) NSDate *stateModificationDate;

+ (id)allDeviceMigrationStatesInContext:(id)a0;
+ (id)currentDeviceMigrationStateForAccount:(id)a0;
+ (id)currentDeviceMigrationStateForAccount:(id)a0 createIfNecessary:(char)a1;
+ (id)deviceMigrationStateWithDeviceIdentifier:(id)a0 account:(id)a1;
+ (id)deviceMigrationStateWithDeviceIdentifier:(id)a0 context:(id)a1;
+ (id)deviceMigrationStatesByAccountIDInContext:(id)a0;
+ (id)deviceMigrationStatesMatchingPredicate:(id)a0 context:(id)a1;
+ (id)existingCloudObjectForRecordID:(id)a0 accountID:(id)a1 context:(id)a2;
+ (id)identifierForDeviceIdentifier:(id)a0;
+ (id)newCloudObjectForRecord:(id)a0 accountID:(id)a1 context:(id)a2;
+ (id)newDeviceMigrationStateWithDeviceIdentifier:(id)a0 account:(id)a1;
+ (id)stringFromMigrationState:(short)a0;

- (id)recordName;
- (id)recordType;
- (id)recordZoneName;
- (char)isMigrating;
- (id)cloudAccount;
- (void)deleteFromLocalDatabase;
- (id)ic_loggingValues;
- (char)isInICloudAccount;
- (id)makeCloudKitRecordForApproach:(long long)a0 mergeableFieldState:(id)a1;
- (char)mergeCloudKitRecord:(id)a0 accountID:(id)a1 approach:(long long)a2 mergeableFieldState:(id)a3;
- (void)objectWasDeletedFromCloud;
- (void)objectWasDeletedFromCloudByAnotherDevice;
- (void)objectWasFetchedFromCloudWithRecord:(id)a0 accountID:(id)a1 force:(char)a2;

@end
