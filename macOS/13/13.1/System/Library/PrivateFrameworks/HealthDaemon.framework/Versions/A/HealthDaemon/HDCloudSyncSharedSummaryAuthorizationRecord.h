@class NSUUID, NSArray, CKRecordID, HDCloudSyncCodableSharedSummaryAuthorizationRecord;

@interface HDCloudSyncSharedSummaryAuthorizationRecord : HDCloudSyncRecord {
    HDCloudSyncCodableSharedSummaryAuthorizationRecord *_underlyingAuthorizationRecord;
}

@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSArray *authorizationIdentifiers;
@property (readonly, copy, nonatomic) CKRecordID *participantRecordID;

+ (id)recordType;
+ (id)recordWithCKRecord:(id)a0 error:(id *)a1;
+ (BOOL)requiresUnderlyingMessage;
+ (BOOL)hasFutureSchema:(id)a0;
+ (id)fieldsForUnprotectedSerialization;
+ (BOOL)shouldSerializeUnderlyingMessageAsProtected;
+ (id)recordIDWithZoneID:(id)a0 UUID:(id)a1;
+ (id)codableRecordFromRecord:(id)a0;
+ (BOOL)isAuthorizationRecord:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (id)serializeUnderlyingMessage;
- (id)printDescription;
- (id)initInZone:(id)a0 UUID:(id)a1 authorizationIdentifiers:(id)a2 participantRecord:(id)a3;
- (void)updateAuthorizationWithIdentifiersToAdd:(id)a0 identifiersToDelete:(id)a1;
- (void)replaceAuthorizationIdentifiers:(id)a0;

@end
