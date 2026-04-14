@class NSData;

@interface SharedChannelProvisionStoragePacketInfo : PBCodable <NSCopying> {
    struct { unsigned char packetExpirationTimestampMillis : 1; unsigned char packetId : 1; unsigned char published : 1; } _has;
}

@property (nonatomic) BOOL hasPacketId;
@property (nonatomic) unsigned long long packetId;
@property (readonly, nonatomic) BOOL hasEncryptedPacket;
@property (retain, nonatomic) NSData *encryptedPacket;
@property (readonly, nonatomic) BOOL hasChannelCommitment;
@property (retain, nonatomic) NSData *channelCommitment;
@property (readonly, nonatomic) BOOL hasInitializationVector;
@property (retain, nonatomic) NSData *initializationVector;
@property (nonatomic) BOOL hasPacketExpirationTimestampMillis;
@property (nonatomic) unsigned long long packetExpirationTimestampMillis;
@property (nonatomic) BOOL hasPublished;
@property (nonatomic) BOOL published;

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

@end
