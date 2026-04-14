@class NSString, ICAccount, NSDate;

@interface ICDeviceMigrationState : ICCloudSyncingObject

@property (retain, nonatomic) ICAccount *account;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property (nonatomic) short state;
@property (retain, nonatomic) NSDate *stateModificationDate;

+ (id)existingCloudObjectForRecordID:(id)a0 accountID:(id)a1 context:(id)a2;
+ (id)newCloudObjectForRecord:(id)a0 accountID:(id)a1 context:(id)a2;
+ (id)deviceMigrationStatesMatchingPredicate:(id)a0 context:(id)a1;
+ (id)identifierForDeviceIdentifier:(id)a0;
+ (id)currentDeviceMigrationStateForAccount:(id)a0 createIfNecessary:(BOOL)a1;
+ (id)deviceMigrationStateWithDeviceIdentifier:(id)a0 context:(id)a1;
+ (id)newDeviceMigrationStateWithDeviceIdentifier:(id)a0 account:(id)a1;
+ (id)allDeviceMigrationStatesInContext:(id)a0;
+ (id)stringFromMigrationState:(short)a0;
+ (id)deviceMigrationStateWithDeviceIdentifier:(id)a0 account:(id)a1;
+ (id)currentDeviceMigrationStateForAccount:(id)a0;
+ (id)deviceMigrationStatesByAccountIDInContext:(id)a0;

- (id)recordName;
- (id)recordType;
- (id)recordZoneName;
- (BOOL)isMigrating;
- (id)cloudAccount;
- (void)mergeDataFromRecord:(id)a0 accountID:(id)a1 force:(BOOL)a2;
- (id)newlyCreatedRecord;
- (BOOL)isInICloudAccount;
- (void)deleteFromLocalDatabase;
- (void)objectWasFetchedFromCloudWithRecord:(id)a0 accountID:(id)a1 force:(BOOL)a2;
- (void)objectWasDeletedFromCloud;
- (void)objectWasDeletedFromCloudByAnotherDevice;
- (id)ic_loggingValues;

@end
