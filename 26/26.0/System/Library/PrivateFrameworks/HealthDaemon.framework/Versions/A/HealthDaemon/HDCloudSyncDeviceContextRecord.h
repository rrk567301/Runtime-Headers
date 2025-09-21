@class HDCloudSyncCodableDeviceContext;

@interface HDCloudSyncDeviceContextRecord : HDCloudSyncRecord {
    HDCloudSyncCodableDeviceContext *_underlyingDeviceContext;
}

+ (id)recordType;
+ (BOOL)hasFutureSchema:(id)a0;
+ (id)hkctl_deviceContextRecordWithRecordID:(id)a0 zoneID:(id)a1 ownerID:(id)a2;
+ (BOOL)isDeviceContextRecord:(id)a0;
+ (BOOL)isDeviceContextRecordID:(id)a0;
+ (id)recordIDWithZoneID:(id)a0 syncIdentity:(id)a1;
+ (BOOL)requiresEncryptedSchemaVersion;
+ (BOOL)requiresUnderlyingMessage;
+ (BOOL)shouldSerializeUnderlyingMessageAsProtected;
+ (id)unitTest_recordWithRandomIDInZone:(id)a0 deviceContext:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (void)updateDeviceContextWithContext:(id)a0;
- (id)codableDeviceContext;
- (id)deviceContextWithError:(id *)a0;
- (id)initInZone:(id)a0 deviceContext:(id)a1;
- (id)serializeUnderlyingMessage;

@end
