@interface AWDWifiStats : PBCodable <NSCopying> {
    struct { unsigned char rxbytes : 1; unsigned char txbytes : 1; unsigned char averageCCA : 1; unsigned char avgJitterRx : 1; unsigned char avgLatencyTx : 1; unsigned char avgRetx : 1; unsigned char avgRssi : 1; unsigned char avgTimeBackoff : 1; unsigned char dataTransferRateMpbs : 1; unsigned char effectiveDataTransferRateMpbs : 1; unsigned char effectiveLinkRateMpbs : 1; unsigned char linkRateMbps : 1; unsigned char phyType : 1; unsigned char powerSaveDur : 1; } _has;
}

@property (nonatomic) char hasPhyType;
@property (nonatomic) unsigned int phyType;
@property (nonatomic) char hasTxbytes;
@property (nonatomic) unsigned long long txbytes;
@property (nonatomic) char hasRxbytes;
@property (nonatomic) unsigned long long rxbytes;
@property (nonatomic) char hasAvgLatencyTx;
@property (nonatomic) unsigned int avgLatencyTx;
@property (nonatomic) char hasAvgJitterRx;
@property (nonatomic) unsigned int avgJitterRx;
@property (nonatomic) char hasAvgRssi;
@property (nonatomic) int avgRssi;
@property (nonatomic) char hasAvgRetx;
@property (nonatomic) unsigned int avgRetx;
@property (nonatomic) char hasAvgTimeBackoff;
@property (nonatomic) unsigned int avgTimeBackoff;
@property (nonatomic) char hasPowerSaveDur;
@property (nonatomic) unsigned int powerSaveDur;
@property (nonatomic) char hasLinkRateMbps;
@property (nonatomic) unsigned int linkRateMbps;
@property (nonatomic) char hasEffectiveLinkRateMpbs;
@property (nonatomic) unsigned int effectiveLinkRateMpbs;
@property (nonatomic) char hasDataTransferRateMpbs;
@property (nonatomic) unsigned int dataTransferRateMpbs;
@property (nonatomic) char hasEffectiveDataTransferRateMpbs;
@property (nonatomic) unsigned int effectiveDataTransferRateMpbs;
@property (nonatomic) char hasAverageCCA;
@property (nonatomic) unsigned int averageCCA;

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
