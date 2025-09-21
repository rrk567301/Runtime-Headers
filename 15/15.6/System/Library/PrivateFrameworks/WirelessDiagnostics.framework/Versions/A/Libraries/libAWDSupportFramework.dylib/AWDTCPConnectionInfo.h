@interface AWDTCPConnectionInfo : PBCodable <NSCopying> {
    struct { unsigned char dnsResolutionLatency : 1; unsigned char interfaceType : 1; unsigned char tcpHandshakeLatency : 1; unsigned char tcpRetransmissions : 1; unsigned char tcpRxBytes : 1; unsigned char tcpTxBytes : 1; unsigned char tlsLatency : 1; } _has;
}

@property (nonatomic) char hasDnsResolutionLatency;
@property (nonatomic) unsigned int dnsResolutionLatency;
@property (nonatomic) char hasTcpHandshakeLatency;
@property (nonatomic) unsigned int tcpHandshakeLatency;
@property (nonatomic) char hasTlsLatency;
@property (nonatomic) unsigned int tlsLatency;
@property (nonatomic) char hasInterfaceType;
@property (nonatomic) int interfaceType;
@property (nonatomic) char hasTcpRetransmissions;
@property (nonatomic) unsigned int tcpRetransmissions;
@property (nonatomic) char hasTcpTxBytes;
@property (nonatomic) unsigned int tcpTxBytes;
@property (nonatomic) char hasTcpRxBytes;
@property (nonatomic) unsigned int tcpRxBytes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsInterfaceType:(id)a0;
- (id)interfaceTypeAsString:(int)a0;

@end
