@class NSString, HDAttachment, NSData, NSURL, HDCloudSyncCodableAttachment;

@interface HDCloudSyncAttachmentRecord : HDCloudSyncRecord {
    HDCloudSyncCodableAttachment *_underlyingAttachment;
}

@property (readonly, copy, nonatomic) NSString *attachmentIdentifier;
@property (readonly, copy, nonatomic) HDAttachment *attachment;
@property (readonly, nonatomic) char hasAssetData;
@property (readonly, copy, nonatomic) NSData *assetData;
@property (readonly, copy, nonatomic) NSURL *assetURL;
@property (readonly, nonatomic) long long fileSize;

+ (id)recordType;
+ (id)attachmentIdentifierForRecordID:(id)a0;
+ (char)hasFutureSchema:(id)a0;
+ (char)isAttachmentRecord:(id)a0;
+ (char)isAttachmentRecordID:(id)a0;
+ (id)recordIDForAttachmentIdentifier:(id)a0 zoneID:(id)a1;
+ (id)recordWithAttachment:(id)a0 fileHandle:(id)a1 zoneID:(id)a2 error:(id *)a3;
+ (char)requiresUnderlyingMessage;
+ (char)shouldSerializeUnderlyingMessageAsProtected;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (id)printDescription;
- (id)serializeUnderlyingMessage;
- (void)unitTest_setFileURL:(id)a0;

@end
