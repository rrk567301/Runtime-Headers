@interface WiFiAnalyticsAWDWiFiDPSActiveProbeStats : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char rttGatewayBE : 1; unsigned char rttGatewayBK : 1; unsigned char rttGatewayVI : 1; unsigned char rttGatewayVO : 1; unsigned char rttPrimaryDnsBE : 1; unsigned char rttPrimaryDnsBK : 1; unsigned char rttPrimaryDnsVI : 1; unsigned char rttPrimaryDnsVO : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasRttGatewayBE;
@property (nonatomic) unsigned int rttGatewayBE;
@property (nonatomic) char hasRttGatewayBK;
@property (nonatomic) unsigned int rttGatewayBK;
@property (nonatomic) char hasRttGatewayVO;
@property (nonatomic) unsigned int rttGatewayVO;
@property (nonatomic) char hasRttGatewayVI;
@property (nonatomic) unsigned int rttGatewayVI;
@property (nonatomic) char hasRttPrimaryDnsBE;
@property (nonatomic) unsigned int rttPrimaryDnsBE;
@property (nonatomic) char hasRttPrimaryDnsBK;
@property (nonatomic) unsigned int rttPrimaryDnsBK;
@property (nonatomic) char hasRttPrimaryDnsVO;
@property (nonatomic) unsigned int rttPrimaryDnsVO;
@property (nonatomic) char hasRttPrimaryDnsVI;
@property (nonatomic) unsigned int rttPrimaryDnsVI;

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
