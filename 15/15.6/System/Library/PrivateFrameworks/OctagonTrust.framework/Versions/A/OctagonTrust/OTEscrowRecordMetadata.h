@class NSString, NSData, OTEscrowRecordMetadataPasscodeGeneration, OTEscrowRecordMetadataClientMetadata;

@interface OTEscrowRecordMetadata : PBCodable <NSCopying> {
    struct { unsigned char secureBackupTimestamp : 1; unsigned char secureBackupUsesMultipleIcscs : 1; } _has;
}

@property (readonly, nonatomic) char hasBackupKeybagDigest;
@property (retain, nonatomic) NSData *backupKeybagDigest;
@property (readonly, nonatomic) char hasClientMetadata;
@property (retain, nonatomic) OTEscrowRecordMetadataClientMetadata *clientMetadata;
@property (nonatomic) char hasSecureBackupUsesMultipleIcscs;
@property (nonatomic) unsigned long long secureBackupUsesMultipleIcscs;
@property (readonly, nonatomic) char hasBottleId;
@property (retain, nonatomic) NSString *bottleId;
@property (nonatomic) char hasSecureBackupTimestamp;
@property (nonatomic) unsigned long long secureBackupTimestamp;
@property (readonly, nonatomic) char hasEscrowedSpki;
@property (retain, nonatomic) NSData *escrowedSpki;
@property (readonly, nonatomic) char hasPeerInfo;
@property (retain, nonatomic) NSData *peerInfo;
@property (readonly, nonatomic) char hasBottleValidity;
@property (retain, nonatomic) NSString *bottleValidity;
@property (readonly, nonatomic) char hasSerial;
@property (retain, nonatomic) NSString *serial;
@property (readonly, nonatomic) char hasBuild;
@property (retain, nonatomic) NSString *build;
@property (readonly, nonatomic) char hasPasscodeGeneration;
@property (retain, nonatomic) OTEscrowRecordMetadataPasscodeGeneration *passcodeGeneration;

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

@end
