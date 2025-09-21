@class NSData, NSString;

@interface TPPBPeerPermanentInfo : PBCodable <NSCopying> {
    struct { unsigned char creationTime : 1; unsigned char epoch : 1; } _has;
}

@property (nonatomic) char hasEpoch;
@property (nonatomic) unsigned long long epoch;
@property (readonly, nonatomic) char hasSigningPubKey;
@property (retain, nonatomic) NSData *signingPubKey;
@property (readonly, nonatomic) char hasEncryptionPubKey;
@property (retain, nonatomic) NSData *encryptionPubKey;
@property (readonly, nonatomic) char hasMachineId;
@property (retain, nonatomic) NSString *machineId;
@property (readonly, nonatomic) char hasModelId;
@property (retain, nonatomic) NSString *modelId;
@property (nonatomic) char hasCreationTime;
@property (nonatomic) unsigned long long creationTime;

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
