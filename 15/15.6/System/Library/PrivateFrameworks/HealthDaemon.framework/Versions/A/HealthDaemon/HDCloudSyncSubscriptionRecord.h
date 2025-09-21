@interface HDCloudSyncSubscriptionRecord : HDCloudSyncRecord

+ (id)recordIDsWithZoneID:(id)a0;
+ (char)hasFutureSchema:(id)a0;
+ (char)isSubscriptionRecord:(id)a0;
+ (id)recordForZoneID:(id)a0;
+ (id)recordIDWithZoneID:(id)a0;
+ (id)recordWithCKRecord:(id)a0 error:(id *)a1;

- (id)description;
- (id)printDescription;

@end
