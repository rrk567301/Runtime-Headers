@interface AWDLibnetcoreTCPECNStatsReport : PBCodable <NSCopying> {
    struct { unsigned char tcpECNClientSetup : 1; unsigned char tcpECNClientSuccess : 1; unsigned char tcpECNConnNoPacketLossCE : 1; unsigned char tcpECNConnPacketLossCE : 1; unsigned char tcpECNConnPacketLossNoCE : 1; unsigned char tcpECNConnRecvCE : 1; unsigned char tcpECNConnRecvECE : 1; unsigned char tcpECNFallbackCE : 1; unsigned char tcpECNFallbackReorder : 1; unsigned char tcpECNFallbackSynLoss : 1; unsigned char tcpECNNotSupportedPeer : 1; unsigned char tcpECNRecvCE : 1; unsigned char tcpECNRecvECE : 1; unsigned char tcpECNSentECE : 1; unsigned char tcpECNServerSetup : 1; unsigned char tcpECNServerSuccess : 1; unsigned char tcpECNSynAckLost : 1; unsigned char tcpECNSynLost : 1; unsigned char tcpECNClientNegotiationEnabled : 1; unsigned char tcpECNServerNegotiationEnabled : 1; } _has;
}

@property (nonatomic) char hasTcpECNClientNegotiationEnabled;
@property (nonatomic) char tcpECNClientNegotiationEnabled;
@property (nonatomic) char hasTcpECNServerNegotiationEnabled;
@property (nonatomic) char tcpECNServerNegotiationEnabled;
@property (nonatomic) char hasTcpECNClientSetup;
@property (nonatomic) unsigned long long tcpECNClientSetup;
@property (nonatomic) char hasTcpECNServerSetup;
@property (nonatomic) unsigned long long tcpECNServerSetup;
@property (nonatomic) char hasTcpECNClientSuccess;
@property (nonatomic) unsigned long long tcpECNClientSuccess;
@property (nonatomic) char hasTcpECNServerSuccess;
@property (nonatomic) unsigned long long tcpECNServerSuccess;
@property (nonatomic) char hasTcpECNNotSupportedPeer;
@property (nonatomic) unsigned long long tcpECNNotSupportedPeer;
@property (nonatomic) char hasTcpECNSynLost;
@property (nonatomic) unsigned long long tcpECNSynLost;
@property (nonatomic) char hasTcpECNSynAckLost;
@property (nonatomic) unsigned long long tcpECNSynAckLost;
@property (nonatomic) char hasTcpECNRecvCE;
@property (nonatomic) unsigned long long tcpECNRecvCE;
@property (nonatomic) char hasTcpECNRecvECE;
@property (nonatomic) unsigned long long tcpECNRecvECE;
@property (nonatomic) char hasTcpECNSentECE;
@property (nonatomic) unsigned long long tcpECNSentECE;
@property (nonatomic) char hasTcpECNConnRecvCE;
@property (nonatomic) unsigned long long tcpECNConnRecvCE;
@property (nonatomic) char hasTcpECNConnRecvECE;
@property (nonatomic) unsigned long long tcpECNConnRecvECE;
@property (nonatomic) char hasTcpECNConnPacketLossNoCE;
@property (nonatomic) unsigned long long tcpECNConnPacketLossNoCE;
@property (nonatomic) char hasTcpECNConnPacketLossCE;
@property (nonatomic) unsigned long long tcpECNConnPacketLossCE;
@property (nonatomic) char hasTcpECNConnNoPacketLossCE;
@property (nonatomic) unsigned long long tcpECNConnNoPacketLossCE;
@property (nonatomic) char hasTcpECNFallbackSynLoss;
@property (nonatomic) unsigned long long tcpECNFallbackSynLoss;
@property (nonatomic) char hasTcpECNFallbackReorder;
@property (nonatomic) unsigned long long tcpECNFallbackReorder;
@property (nonatomic) char hasTcpECNFallbackCE;
@property (nonatomic) unsigned long long tcpECNFallbackCE;

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
