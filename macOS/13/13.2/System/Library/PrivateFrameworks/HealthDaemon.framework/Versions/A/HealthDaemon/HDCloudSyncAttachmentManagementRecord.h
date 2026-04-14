@class NSUUID, HDCloudSyncCodableAttachmentManagementRecord;

@interface HDCloudSyncAttachmentManagementRecord : HDCloudSyncRecord {
    HDCloudSyncCodableAttachmentManagementRecord *_underlyingAttachmentManagementRecord;
}

@property (readonly, copy, nonatomic) NSUUID *UUID;

+ (id)recordType;
+ (BOOL)requiresUnderlyingMessage;
+ (BOOL)hasFutureSchema:(id)a0;
+ (id)recordIDForZoneID:(id)a0;
+ (BOOL)isAttachmentManagementRecordID:(id)a0;
+ (BOOL)isAttachmentManagementRecord:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (id)serializeUnderlyingMessage;
- (id)printDescription;
- (id)initInZoneID:(id)a0;

@end
