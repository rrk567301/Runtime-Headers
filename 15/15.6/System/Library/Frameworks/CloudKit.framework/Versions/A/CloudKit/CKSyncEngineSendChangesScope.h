@class NSSet;

@interface CKSyncEngineSendChangesScope : NSObject <NSCopying>

@property (readonly, copy) NSSet *zoneIDs;
@property (readonly, copy) NSSet *excludedZoneIDs;
@property (readonly, copy) NSSet *recordIDs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (char)containsZoneOrRecordWithZoneID:(id)a0;
- (char)containsPendingRecordZoneChange:(id)a0;
- (char)containsRecordID:(id)a0;
- (char)containsScope:(id)a0;
- (id)initWithExcludedZoneIDs:(id)a0;
- (id)initWithRecordIDs:(id)a0;
- (id)initWithZoneIDs:(id)a0;
- (id)initWithZoneIDs:(id)a0 excludedZoneIDs:(id)a1 recordIDs:(id)a2;

@end
