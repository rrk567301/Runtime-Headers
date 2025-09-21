@class HDCloudSyncCodableSequence, NSUUID, HDSyncAnchorMap, NSSet, CKRecordID;

@interface HDCloudSyncSequenceRecord : HDCloudSyncRecord <NSCopying> {
    HDCloudSyncCodableSequence *_underlyingSequence;
}

@property (readonly, copy, nonatomic) NSUUID *storeIdentifier;
@property (nonatomic, getter=isActive) char active;
@property (readonly, nonatomic) int slot;
@property (readonly, nonatomic) long long changeIndex;
@property (readonly, nonatomic) long long baselineEpoch;
@property (readonly, nonatomic) long long childRecordCount;
@property (readonly, nonatomic) HDSyncAnchorMap *syncAnchorMap;
@property (readonly, copy, nonatomic) NSSet *includedIdentifiers;
@property (readonly, copy, nonatomic) NSSet *includedSyncIdentities;
@property (copy, nonatomic) NSSet *includedChildSyncIdentities;
@property (nonatomic) int protocolVersion;
@property (readonly, nonatomic) HDSyncAnchorMap *frozenSyncAnchorMap;
@property (copy, nonatomic) CKRecordID *firstUnfrozenChangeRecord;

+ (id)recordType;
+ (id)fieldsForUnprotectedSerialization;
+ (char)hasFutureSchema:(id)a0;
+ (char)isSequenceRecord:(id)a0;
+ (id)recordIDsForOwnerIdentifier:(id)a0 storeIdentifier:(id)a1 zoneID:(id)a2;
+ (id)recordIDsWithIndividualZoneID:(id)a0;
+ (id)recordWithCKRecord:(id)a0 error:(id *)a1;
+ (char)requiresUnderlyingMessage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (void)_unitTest_setChildRecordCount:(unsigned long long)a0;
- (void)decrementChildRecordCount:(unsigned long long)a0;
- (void)incrementChangeIndex;
- (void)incrementChildRecordCount;
- (id)initForSequenceSlot:(int)a0 syncAnchorMap:(id)a1 changeIndex:(unsigned long long)a2 baselineEpoch:(long long)a3 includedIdentifiers:(id)a4 includedSyncIdentities:(id)a5 includedChildSyncIdentities:(id)a6 storeRecord:(id)a7;
- (id)printDescription;
- (void)replaceSyncAnchorMapWithSyncAnchorMap:(id)a0;
- (void)resetChangeIndex:(unsigned long long)a0;
- (id)serializeUnderlyingMessage;
- (void)updateFrozenSyncAnchorMapWithSyncAnchorMap:(id)a0;
- (void)updateSyncAnchorMapWithSyncAnchorMap:(id)a0;

@end
