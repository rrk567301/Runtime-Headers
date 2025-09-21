@class HDCloudSyncCodableDeviceKeyValue;

@interface HDCloudSyncDeviceKeyValueRecord : HDCloudSyncRecord

@property (copy, nonatomic) HDCloudSyncCodableDeviceKeyValue *underlyingDeviceKeyValue;

+ (id)recordType;
+ (id)fieldsForUnprotectedSerialization;
+ (char)hasFutureSchema:(id)a0;
+ (char)isDeviceKeyValueRecord:(id)a0;
+ (char)isDeviceKeyValueRecordID:(id)a0;
+ (char)requiresEncryptedSchemaVersion;
+ (char)requiresUnderlyingMessage;
+ (char)shouldSerializeUnderlyingMessageAsProtected;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (id)codableDeviceKeyValueEntry;
- (id)deviceContextRecordID;
- (id)deviceKeyValueEntry:(id *)a0;
- (id)initInZone:(id)a0 deviceKeyValueEntry:(id)a1 deviceContextRecord:(id)a2 UUID:(id)a3;
- (id)printDescription;
- (id)serializeUnderlyingMessage;
- (id)syncIdentity;
- (void)updateDeviceKeyValueEntry:(id)a0;

@end
