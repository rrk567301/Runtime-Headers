@class NSData, NSString, CSStingrayRecordClientMetadata;

@interface CSStingrayRecord : PBCodable <NSCopying> {
    struct { unsigned char containsiCloudIdentity : 1; unsigned char triggerUpdate : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasClientMetadata;
@property (retain, nonatomic) CSStingrayRecordClientMetadata *clientMetadata;
@property (nonatomic) BOOL hasTriggerUpdate;
@property (nonatomic) BOOL triggerUpdate;
@property (nonatomic) BOOL hasContainsiCloudIdentity;
@property (nonatomic) BOOL containsiCloudIdentity;
@property (readonly, nonatomic) BOOL hasBackupKeybagDigest;
@property (retain, nonatomic) NSData *backupKeybagDigest;
@property (readonly, nonatomic) BOOL hasMetadataHash;
@property (retain, nonatomic) NSData *metadataHash;
@property (readonly, nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) NSString *timestamp;
@property (readonly, nonatomic) BOOL hasBackupKeybagSHA256;
@property (retain, nonatomic) NSData *backupKeybagSHA256;
@property (readonly, nonatomic) BOOL hasBackupKeybagDBRSHA256;
@property (retain, nonatomic) NSData *backupKeybagDBRSHA256;
@property (readonly, nonatomic) BOOL hasBackupKeybagLRCSHA256;
@property (retain, nonatomic) NSData *backupKeybagLRCSHA256;
@property (readonly, nonatomic) BOOL hasBackupKeybagFallbackSHA256;
@property (retain, nonatomic) NSData *backupKeybagFallbackSHA256;

+ (id)parseFromAccountInfoPlist:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)expandMetadataHash:(id *)a0;

@end
