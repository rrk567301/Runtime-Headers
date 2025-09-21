@interface IDSQRProtoStatsResponse : PBCodable <NSCopying> {
    struct { unsigned char serverTimestampMs : 1; unsigned char receivedPackets : 1; unsigned char sentPackets : 1; unsigned char uplinkBandwidth : 1; } _has;
}

@property (nonatomic) unsigned int clientTimestampNtp;
@property (nonatomic) char hasServerTimestampMs;
@property (nonatomic) unsigned long long serverTimestampMs;
@property (nonatomic) char hasSentPackets;
@property (nonatomic) unsigned int sentPackets;
@property (nonatomic) char hasReceivedPackets;
@property (nonatomic) unsigned int receivedPackets;
@property (nonatomic) char hasUplinkBandwidth;
@property (nonatomic) unsigned int uplinkBandwidth;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
