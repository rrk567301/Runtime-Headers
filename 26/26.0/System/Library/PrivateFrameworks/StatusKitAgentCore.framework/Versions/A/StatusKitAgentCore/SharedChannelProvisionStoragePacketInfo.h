@class NSData;

@interface SharedChannelProvisionStoragePacketInfo : PBCodable <NSCopying> {
    struct { unsigned char packetId : 1; } _has;
}

@property (nonatomic) BOOL hasPacketId;
@property (nonatomic) unsigned long long packetId;
@property (readonly, nonatomic) BOOL hasEncryptedPacket;
@property (retain, nonatomic) NSData *encryptedPacket;
@property (readonly, nonatomic) BOOL hasChannelTopicCommitment;
@property (retain, nonatomic) NSData *channelTopicCommitment;
@property (readonly, nonatomic) BOOL hasInitializationVector;
@property (retain, nonatomic) NSData *initializationVector;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
