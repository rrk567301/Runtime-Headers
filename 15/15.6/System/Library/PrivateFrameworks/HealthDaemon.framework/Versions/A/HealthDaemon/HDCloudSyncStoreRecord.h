@class HDCloudSyncCodableStore, NSString, NSUUID, NSArray, HDSyncIdentity, HDCloudSyncSequenceRecord, HDCloudSyncShardPredicate;

@interface HDCloudSyncStoreRecord : HDCloudSyncRecord {
    HDCloudSyncCodableStore *_underlyingStore;
    HDCloudSyncSequenceRecord *_slotASequenceHeaderRecord;
    HDCloudSyncSequenceRecord *_slotBSequenceHeaderRecord;
}

@property (readonly, copy, nonatomic) NSString *ownerIdentifier;
@property (readonly, copy, nonatomic) NSUUID *storeIdentifier;
@property (readonly, nonatomic) HDCloudSyncSequenceRecord *sequenceRecord;
@property (readonly, copy, nonatomic) NSArray *orderedSequenceRecords;
@property (readonly, nonatomic) HDCloudSyncSequenceRecord *tombstoneSequenceRecord;
@property (readonly, nonatomic) HDSyncIdentity *syncIdentity;
@property (nonatomic, getter=isActive) char active;
@property (copy, nonatomic) NSString *pendingOwner;
@property (copy, nonatomic) HDSyncIdentity *pendingSyncIdentity;
@property (nonatomic) int supportedProtocolVersion;
@property (nonatomic) int requiredProtocolVersion;
@property (copy, nonatomic) NSString *systemBuildVersion;
@property (copy, nonatomic) NSString *productType;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) int deviceMode;
@property (nonatomic) long long order;
@property (copy, nonatomic) HDCloudSyncShardPredicate *shardPredicate;
@property (readonly, nonatomic) char isChild;

+ (id)recordType;
+ (id)fieldsForUnprotectedSerialization;
+ (char)hasFutureSchema:(id)a0;
+ (char)isStoreRecord:(id)a0;
+ (char)isStoreRecordID:(id)a0;
+ (id)recordIDForOwnerIdentifier:(id)a0 storeIdentifier:(id)a1 zoneID:(id)a2;
+ (id)recordIDWithIndividualZoneID:(id)a0;
+ (id)recordWithCKRecord:(id)a0 error:(id *)a1;
+ (char)requiresUnderlyingMessage;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)shortDescription;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (id)activeSequenceHeaderRecord;
- (id)addNewSequenceHeaderRecordWithSyncAnchorMap:(id)a0 includedIdentifiers:(id)a1 includedSyncIdentities:(id)a2 includedChildSyncIdentities:(id)a3;
- (id)addNewTombstoneSequenceHeaderRecordWithIncludedIdentifiers:(id)a0 includedSyncIdentities:(id)a1 includedChildSyncIdentities:(id)a2;
- (void)addSequenceHeaderRecord:(id)a0;
- (id)clearCurrentSequenceHeaderRecord;
- (id)clearOldSequenceHeaderRecord;
- (id)clearPendingSequenceHeaderRecord;
- (id)clearTombstoneSequenceHeaderRecord;
- (id)currentSequenceHeaderRecord;
- (char)hasActiveSequence;
- (char)hasSequenceWithFutureProtocolVersion;
- (id)initInSyncCircle:(id)a0 ownerIdentifier:(id)a1 storeIdentifier:(id)a2 syncIdentity:(id)a3 isChild:(char)a4 unified:(char)a5;
- (id)initInSyncCircle:(id)a0 ownerIdentifier:(id)a1 storeIdentifier:(id)a2 syncIdentity:(id)a3 isChild:(char)a4 zoneID:(id)a5;
- (id)oldSequenceHeaderRecord;
- (id)pendingSequenceHeaderRecord;
- (id)printDescription;
- (void)removeSequenceHeaderRecord:(id)a0;
- (void)repairOwnerIdentifier:(id)a0;
- (id)sequenceRecordWithRecordID:(id)a0;
- (id)serializeUnderlyingMessage;

@end
