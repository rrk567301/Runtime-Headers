@class NSData;

@interface SharedChannelProvisionOffGridPacketInfo : PBCodable <NSCopying> {
    struct { unsigned char packetExpirationTimestampMillis : 1; } _has;
}

@property (readonly, nonatomic) char hasPacketId;
@property (retain, nonatomic) NSData *packetId;
@property (readonly, nonatomic) char hasEncryptedPacket;
@property (retain, nonatomic) NSData *encryptedPacket;
@property (nonatomic) char hasPacketExpirationTimestampMillis;
@property (nonatomic) unsigned long long packetExpirationTimestampMillis;
@property (readonly, nonatomic) char hasCommitmentSalt;
@property (retain, nonatomic) NSData *commitmentSalt;
@property (readonly, nonatomic) char hasInitializationVector;
@property (retain, nonatomic) NSData *initializationVector;

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
