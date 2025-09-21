@class NSString, ICAccount, NSDate;

@interface ICLegacyTombstone : ICCloudSyncingObject

@property (retain, nonatomic) ICAccount *account;
@property (nonatomic) short type;
@property (retain, nonatomic) NSString *contentHashAtImport;
@property (retain, nonatomic) NSDate *modificationDateAtImport;

+ (void)removeLegacyTombstoneForFolder:(id)a0;
+ (void)addLegacyTombstoneForFolder:(id)a0;
+ (void)addLegacyTombstoneForNote:(id)a0;
+ (id)addLegacyTombstoneWithObjectIdentifier:(id)a0 type:(short)a1 account:(id)a2;
+ (id)allLegacyTombstonesInContext:(id)a0;
+ (id)existingCloudObjectForRecordID:(id)a0 accountID:(id)a1 context:(id)a2;
+ (char)hasTombstonePrefix:(id)a0;
+ (id)legacyTombstoneWithIdentifier:(id)a0 context:(id)a1;
+ (id)legacyTombstonesMatchingPredicate:(id)a0 context:(id)a1;
+ (id)newCloudObjectForRecord:(id)a0 accountID:(id)a1 context:(id)a2;
+ (id)newLegacyTombstoneWithIdentifier:(id)a0 type:(short)a1 account:(id)a2;
+ (void)removeLegacyTombstoneForNote:(id)a0;
+ (void)removeLegacyTombstoneWithObjectIdentifier:(id)a0 type:(short)a1 context:(id)a2;
+ (id)tombstoneIdentifierForObjectIdentifier:(id)a0 type:(short)a1;
+ (short)tombstoneTypeFromRecordName:(id)a0;

- (id)recordType;
- (id)recordZoneName;
- (char)isEquivalentTo:(id)a0;
- (id)cloudAccount;
- (void)deleteFromLocalDatabase;
- (char)hasAllMandatoryFields;
- (id)ic_loggingValues;
- (char)isInICloudAccount;
- (id)makeCloudKitRecordForApproach:(long long)a0 mergeableFieldState:(id)a1;
- (char)mergeCloudKitRecord:(id)a0 accountID:(id)a1 approach:(long long)a2 mergeableFieldState:(id)a3;
- (void)objectWasDeletedFromCloud;
- (void)objectWasDeletedFromCloudByAnotherDevice;

@end
