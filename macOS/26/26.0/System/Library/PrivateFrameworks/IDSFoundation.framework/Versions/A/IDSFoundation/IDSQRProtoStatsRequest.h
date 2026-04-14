@interface IDSQRProtoStatsRequest : PBRequest <NSCopying> {
    struct { unsigned char clientLatencyMs : 1; unsigned char receivedPackets : 1; unsigned char sentPackets : 1; unsigned char p2pConnection : 1; } _has;
}

@property (nonatomic) unsigned int clientTimestampNtp;
@property (nonatomic) BOOL hasClientLatencyMs;
@property (nonatomic) unsigned int clientLatencyMs;
@property (nonatomic) BOOL hasSentPackets;
@property (nonatomic) unsigned int sentPackets;
@property (nonatomic) BOOL hasReceivedPackets;
@property (nonatomic) unsigned int receivedPackets;
@property (nonatomic) BOOL hasP2pConnection;
@property (nonatomic) BOOL p2pConnection;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
