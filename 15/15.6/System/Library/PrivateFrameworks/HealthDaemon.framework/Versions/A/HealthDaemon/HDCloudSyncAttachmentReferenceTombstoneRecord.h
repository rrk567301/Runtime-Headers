@class NSString, NSArray, HDCloudSyncCodableAttachmentReferenceTombstones;

@interface HDCloudSyncAttachmentReferenceTombstoneRecord : HDCloudSyncRecord {
    HDCloudSyncCodableAttachmentReferenceTombstones *_underlyingReferenceTombstones;
}

@property (readonly, copy, nonatomic) NSString *ownerIdentifier;
@property (readonly, nonatomic) long long recordIndex;
@property (readonly, nonatomic) long long attachmentReferenceTombstoneCount;
@property (readonly, copy, nonatomic) NSArray *attachmentReferenceTombstones;

+ (id)recordType;
+ (char)hasFutureSchema:(id)a0;
+ (char)isAttachmentReferenceTombstoneRecord:(id)a0;
+ (char)isAttachmentReferenceTombstoneRecordID:(id)a0;
+ (id)recordIDForOwnerIdentifier:(id)a0 recordIndex:(long long)a1 zoneID:(id)a2;
+ (char)requiresUnderlyingMessage;
+ (char)shouldSerializeUnderlyingMessageAsProtected;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (void)addAttachmentReferenceTombstone:(id)a0;
- (id)initWithOwnerIdentifier:(id)a0 recordIndex:(long long)a1 zoneID:(id)a2;
- (id)printDescription;
- (id)serializeUnderlyingMessage;

@end
