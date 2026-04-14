@class HDCloudSyncCodableSequence, NSUUID, HDSyncAnchorMap, NSSet, CKRecordID;

@interface HDCloudSyncSequenceRecord : HDCloudSyncRecord <NSCopying> {
    HDCloudSyncCodableSequence *_underlyingSequence;
}

@property (readonly, copy, nonatomic) NSUUID *storeIdentifier;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) int slot;
@property (readonly, nonatomic) long long changeIndex;
@property (readonly, nonatomic) long long baselineEpoch;
@property (readonly, nonatomic) long long childRecordCount;
@property (readonly, nonatomic) HDSyncAnchorMap *syncAnchorMap;
@property (readonly, copy, nonatomic) NSSet *includedIdentifiers;
@property (nonatomic) int protocolVersion;
@property (readonly, nonatomic) HDSyncAnchorMap *frozenSyncAnchorMap;
@property (copy, nonatomic) CKRecordID *firstUnfrozenChangeRecord;

+ (id)recordType;
+ (id)recordWithCKRecord:(id)a0 error:(id *)a1;
+ (BOOL)requiresUnderlyingMessage;
+ (BOOL)hasFutureSchema:(id)a0;
+ (id)fieldsForUnprotectedSerialization;
+ (id)recordIDsWithIndividualZoneID:(id)a0;
+ (id)recordIDsForOwnerIdentifier:(id)a0 storeIdentifier:(id)a1 zoneID:(id)a2;
+ (BOOL)isSequenceRecord:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (id)serializeUnderlyingMessage;
- (id)printDescription;
- (id)initForSequenceSlot:(int)a0 syncAnchorMap:(id)a1 changeIndex:(unsigned long long)a2 baselineEpoch:(long long)a3 includedIdentifiers:(id)a4 storeRecord:(id)a5;
- (void)incrementChangeIndex;
- (void)resetChangeIndex:(unsigned long long)a0;
- (void)incrementChildRecordCount;
- (void)decrementChildRecordCount:(unsigned long long)a0;
- (void)updateSyncAnchorMapWithSyncAnchorMap:(id)a0;
- (void)replaceSyncAnchorMapWithSyncAnchorMap:(id)a0;
- (void)updateFrozenSyncAnchorMapWithSyncAnchorMap:(id)a0;
- (void)_unitTest_setChildRecordCount:(unsigned long long)a0;

@end
