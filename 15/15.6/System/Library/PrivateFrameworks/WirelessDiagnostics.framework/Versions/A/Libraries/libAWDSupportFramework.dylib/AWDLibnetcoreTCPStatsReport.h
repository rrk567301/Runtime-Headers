@interface AWDLibnetcoreTCPStatsReport : PBCodable <NSCopying> {
    struct { unsigned char tcpConnectionAccepts : 1; unsigned char tcpConnectionAttempts : 1; unsigned char tcpIPv4AvgRTT : 1; unsigned char tcpIPv6AvgRTT : 1; unsigned char tcpRecvPLR : 1; unsigned char tcpSendPLR : 1; unsigned char tcpSendReorderRate : 1; unsigned char tcpSendTLRTO : 1; } _has;
}

@property (nonatomic) char hasTcpIPv4AvgRTT;
@property (nonatomic) unsigned long long tcpIPv4AvgRTT;
@property (nonatomic) char hasTcpIPv6AvgRTT;
@property (nonatomic) unsigned long long tcpIPv6AvgRTT;
@property (nonatomic) char hasTcpSendPLR;
@property (nonatomic) unsigned long long tcpSendPLR;
@property (nonatomic) char hasTcpRecvPLR;
@property (nonatomic) unsigned long long tcpRecvPLR;
@property (nonatomic) char hasTcpSendTLRTO;
@property (nonatomic) unsigned long long tcpSendTLRTO;
@property (nonatomic) char hasTcpSendReorderRate;
@property (nonatomic) unsigned long long tcpSendReorderRate;
@property (nonatomic) char hasTcpConnectionAttempts;
@property (nonatomic) unsigned long long tcpConnectionAttempts;
@property (nonatomic) char hasTcpConnectionAccepts;
@property (nonatomic) unsigned long long tcpConnectionAccepts;

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
