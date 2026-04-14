@class NSString, ICAccount, NSDate;

@interface ICLegacyTombstone : ICCloudSyncingObject

@property (retain, nonatomic) ICAccount *account;
@property (nonatomic) short type;
@property (retain, nonatomic) NSString *contentHashAtImport;
@property (retain, nonatomic) NSDate *modificationDateAtImport;

+ (id)existingCloudObjectForRecordID:(id)a0 accountID:(id)a1 context:(id)a2;
+ (id)newCloudObjectForRecord:(id)a0 accountID:(id)a1 context:(id)a2;
+ (id)legacyTombstonesMatchingPredicate:(id)a0 context:(id)a1;
+ (id)legacyTombstoneWithIdentifier:(id)a0 context:(id)a1;
+ (id)newLegacyTombstoneWithIdentifier:(id)a0 type:(short)a1 account:(id)a2;
+ (id)allLegacyTombstonesInContext:(id)a0;
+ (id)addLegacyTombstoneWithObjectIdentifier:(id)a0 type:(short)a1 account:(id)a2;
+ (void)removeLegacyTombstoneWithObjectIdentifier:(id)a0 type:(short)a1 context:(id)a2;
+ (void)addLegacyTombstoneForNote:(id)a0;
+ (void)removeLegacyTombstoneForNote:(id)a0;
+ (void)addLegacyTombstoneForFolder:(id)a0;
+ (void)removeLegacyTombstoneForFolder:(id)a0;
+ (id)tombstoneIdentifierForObjectIdentifier:(id)a0 type:(short)a1;
+ (short)tombstoneTypeFromRecordName:(id)a0;
+ (BOOL)hasTombstonePrefix:(id)a0;

- (id)recordType;
- (id)recordZoneName;
- (id)cloudAccount;
- (void)mergeDataFromRecord:(id)a0 accountID:(id)a1 force:(BOOL)a2;
- (id)newlyCreatedRecord;
- (BOOL)hasAllMandatoryFields;
- (BOOL)isInICloudAccount;
- (void)deleteFromLocalDatabase;
- (void)objectWasDeletedFromCloud;
- (void)objectWasDeletedFromCloudByAnotherDevice;
- (id)ic_loggingValues;

@end
