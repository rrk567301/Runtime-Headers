@class NSData, NSString, CSStingrayRecordClientMetadata;

@interface CSStingrayRecord : PBCodable <NSCopying> {
    struct { unsigned char containsiCloudIdentity : 1; unsigned char triggerUpdate : 1; } _has;
}

@property (readonly, nonatomic) char hasClientMetadata;
@property (retain, nonatomic) CSStingrayRecordClientMetadata *clientMetadata;
@property (nonatomic) char hasTriggerUpdate;
@property (nonatomic) char triggerUpdate;
@property (nonatomic) char hasContainsiCloudIdentity;
@property (nonatomic) char containsiCloudIdentity;
@property (readonly, nonatomic) char hasBackupKeybagDigest;
@property (retain, nonatomic) NSData *backupKeybagDigest;
@property (readonly, nonatomic) char hasMetadataHash;
@property (retain, nonatomic) NSData *metadataHash;
@property (readonly, nonatomic) char hasTimestamp;
@property (retain, nonatomic) NSString *timestamp;
@property (readonly, nonatomic) char hasBackupKeybagSHA256;
@property (retain, nonatomic) NSData *backupKeybagSHA256;

+ (id)parseFromAccountInfoPlist:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)expandMetadataHash:(id *)a0;

@end
