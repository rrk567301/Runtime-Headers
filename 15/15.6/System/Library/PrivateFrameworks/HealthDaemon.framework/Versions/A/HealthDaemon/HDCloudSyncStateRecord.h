@class NSString, NSData, NSURL, HDCloudSyncCodableState;

@interface HDCloudSyncStateRecord : HDCloudSyncRecord {
    HDCloudSyncCodableState *_underlyingStateData;
}

@property (readonly, nonatomic) char hasStateData;
@property (copy, nonatomic) NSData *stateData;
@property (readonly, copy, nonatomic) NSURL *stateDataAssetURL;
@property (readonly, copy, nonatomic) NSString *key;

+ (id)recordType;
+ (char)hasFutureSchema:(id)a0;
+ (char)isStateRecord:(id)a0;
+ (id)recordIDWithZoneID:(id)a0 recordIdentifier:(id)a1;
+ (id)recordWithStateData:(id)a0 zoneID:(id)a1 recordIdentifier:(id)a2 error:(id *)a3;
+ (char)requiresEncryptedSchemaVersion;
+ (char)requiresUnderlyingMessage;
+ (char)shouldSerializeUnderlyingMessageAsProtected;

- (void).cxx_destruct;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (id)_createAssetWithStateData:(id)a0 error:(id *)a1;
- (id)_initWithStateData:(id)a0 zoneID:(id)a1 recordIdentifier:(id)a2 error:(id *)a3;
- (id)initInZone:(id)a0 recordIdentifier:(id)a1;
- (id)serializeUnderlyingMessage;
- (void)updateStateData:(id)a0;

@end
