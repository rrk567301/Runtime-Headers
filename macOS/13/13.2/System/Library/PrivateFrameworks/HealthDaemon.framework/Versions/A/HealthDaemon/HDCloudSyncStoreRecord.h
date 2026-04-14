@class NSString, NSUUID, NSArray, HDCloudSyncCodableStore, HDCloudSyncSequenceRecord, HDCloudSyncShardPredicate;

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
@property (nonatomic, getter=isActive) BOOL active;
@property (copy, nonatomic) NSString *pendingOwner;
@property (nonatomic) int supportedProtocolVersion;
@property (nonatomic) int requiredProtocolVersion;
@property (copy, nonatomic) NSString *systemBuildVersion;
@property (copy, nonatomic) NSString *productType;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) int deviceMode;
@property (nonatomic) long long order;
@property (copy, nonatomic) HDCloudSyncShardPredicate *shardPredicate;

+ (id)recordType;
+ (id)recordWithCKRecord:(id)a0 error:(id *)a1;
+ (BOOL)requiresUnderlyingMessage;
+ (BOOL)hasFutureSchema:(id)a0;
+ (id)fieldsForUnprotectedSerialization;
+ (id)recordIDForOwnerIdentifier:(id)a0 storeIdentifier:(id)a1 zoneID:(id)a2;
+ (id)recordIDWithIndividualZoneID:(id)a0;
+ (BOOL)isStoreRecord:(id)a0;
+ (BOOL)isStoreRecordID:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (id)serializeUnderlyingMessage;
- (id)printDescription;
- (id)initInSyncCircle:(id)a0 ownerIdentifier:(id)a1 storeIdentifier:(id)a2 unified:(BOOL)a3;
- (id)initInSyncCircle:(id)a0 ownerIdentifier:(id)a1 storeIdentifier:(id)a2 zoneID:(id)a3;
- (id)currentSequenceHeaderRecord;
- (id)clearCurrentSequenceHeaderRecord;
- (id)oldSequenceHeaderRecord;
- (id)clearOldSequenceHeaderRecord;
- (id)activeSequenceHeaderRecord;
- (id)pendingSequenceHeaderRecord;
- (id)clearPendingSequenceHeaderRecord;
- (id)clearTombstoneSequenceHeaderRecord;
- (id)addNewSequenceHeaderRecordWithSyncAnchorMap:(id)a0 includedIdentifiers:(id)a1;
- (id)addNewTombstoneSequenceHeaderRecordWithIncludedIdentifiers:(id)a0;
- (void)addSequenceHeaderRecord:(id)a0;
- (void)removeSequenceHeaderRecord:(id)a0;
- (BOOL)hasActiveSequence;
- (BOOL)hasSequenceWithFutureProtocolVersion;
- (id)sequenceRecordWithRecordID:(id)a0;
- (void)repairOwnerIdentifier:(id)a0;

@end
