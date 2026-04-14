@class NSString, HDAttachmentReference, HDCloudSyncCodableAttachmentReference;

@interface HDCloudSyncAttachmentReferenceRecord : HDCloudSyncRecord {
    HDCloudSyncCodableAttachmentReference *_underlyingReference;
}

@property (readonly, copy, nonatomic) NSString *referenceIdentifier;
@property (readonly, copy, nonatomic) NSString *attachmentIdentifier;
@property (readonly, copy, nonatomic) HDAttachmentReference *attachmentReference;

+ (id)recordType;
+ (BOOL)requiresUnderlyingMessage;
+ (BOOL)hasFutureSchema:(id)a0;
+ (BOOL)shouldSerializeUnderlyingMessageAsProtected;
+ (id)recordIDForReferenceIdentifier:(id)a0 zoneID:(id)a1;
+ (BOOL)isAttachmentReferenceRecordID:(id)a0;
+ (BOOL)isAttachmentReferenceRecord:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (id)serializeUnderlyingMessage;
- (id)printDescription;
- (id)initWithAttachmentReference:(id)a0 zoneID:(id)a1;

@end
