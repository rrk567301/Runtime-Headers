@class NSString, HDAttachment, NSData, NSURL, HDCloudSyncCodableAttachment;

@interface HDCloudSyncAttachmentRecord : HDCloudSyncRecord {
    HDCloudSyncCodableAttachment *_underlyingAttachment;
}

@property (readonly, copy, nonatomic) NSString *attachmentIdentifier;
@property (readonly, copy, nonatomic) HDAttachment *attachment;
@property (readonly, nonatomic) BOOL hasAssetData;
@property (readonly, copy, nonatomic) NSData *assetData;
@property (readonly, copy, nonatomic) NSURL *assetURL;
@property (readonly, nonatomic) long long fileSize;

+ (id)recordType;
+ (BOOL)requiresUnderlyingMessage;
+ (BOOL)hasFutureSchema:(id)a0;
+ (BOOL)shouldSerializeUnderlyingMessageAsProtected;
+ (id)recordWithAttachment:(id)a0 fileHandle:(id)a1 zoneID:(id)a2 error:(id *)a3;
+ (id)recordIDForAttachmentIdentifier:(id)a0 zoneID:(id)a1;
+ (BOOL)isAttachmentRecordID:(id)a0;
+ (BOOL)isAttachmentRecord:(id)a0;
+ (id)attachmentIdentifierForRecordID:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (id)serializeUnderlyingMessage;
- (id)printDescription;
- (void)unitTest_setFileURL:(id)a0;

@end
