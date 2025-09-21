@class NSData, CKRecordID, CKRecord;

@interface HDCloudSyncRecord : NSObject {
    CKRecord *_record;
}

@property (readonly, copy, nonatomic) CKRecordID *recordID;
@property (readonly, nonatomic) CKRecord *record;
@property (readonly, copy, nonatomic) NSData *underlyingMessage;
@property (readonly, nonatomic) long long schemaVersion;
@property (nonatomic) char repaired;
@property (readonly, nonatomic) char unsaved;

+ (id)recordType;
+ (id)fieldsForProtectedSerialization;
+ (id)initWithSerializedRecord:(id)a0 error:(id *)a1;
+ (id)fieldsForUnprotectedSerialization;
+ (char)hasFutureSchema:(id)a0;
+ (id)recordWithCKRecord:(id)a0 error:(id *)a1;
+ (char)requiresEncryptedSchemaVersion;
+ (char)requiresUnderlyingMessage;
+ (char)shouldSerializeUnderlyingMessageAsProtected;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)serialize;
- (char)validateWithError:(id *)a0;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (id)printDescription;
- (id)serializeUnderlyingMessage;

@end
