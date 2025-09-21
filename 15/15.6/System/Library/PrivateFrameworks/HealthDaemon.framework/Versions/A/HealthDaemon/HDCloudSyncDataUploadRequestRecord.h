@interface HDCloudSyncDataUploadRequestRecord : HDCloudSyncSubscriptionRecord

+ (id)recordType;
+ (char)isDataUploadRequestRecord:(id)a0;
+ (id)recordForZoneID:(id)a0;
+ (id)recordIDWithZoneID:(id)a0;
+ (id)recordWithCKRecord:(id)a0 error:(id *)a1;
+ (char)requiresUnderlyingMessage;

- (id)description;
- (id)printDescription;
- (id)serializeUnderlyingMessage;

@end
