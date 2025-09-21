@class AWDChipCountersTx, AWDMacCountersRx, AWDChipCountersRx, AWDChipErrorCountersTx, AWDMacCountersRxErrors, AWDWiFiMetricsManagerFrameCounterStats, NSMutableArray, AWDWPA2Counters, AWDRxPhyErrors;

@interface AWDWiFiMetricsManagerChipCounters : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasFrameCounters;
@property (retain, nonatomic) AWDWiFiMetricsManagerFrameCounterStats *frameCounters;
@property (readonly, nonatomic) char hasTxGeneralStats;
@property (retain, nonatomic) AWDChipCountersTx *txGeneralStats;
@property (readonly, nonatomic) char hasTxErrorStats;
@property (retain, nonatomic) AWDChipErrorCountersTx *txErrorStats;
@property (readonly, nonatomic) char hasRxGeneralStats;
@property (retain, nonatomic) AWDChipCountersRx *rxGeneralStats;
@property (readonly, nonatomic) char hasRxMACErrorStats;
@property (retain, nonatomic) AWDMacCountersRxErrors *rxMACErrorStats;
@property (readonly, nonatomic) char hasRxMACCounterStats;
@property (retain, nonatomic) AWDMacCountersRx *rxMACCounterStats;
@property (readonly, nonatomic) char hasRxPhyErrors;
@property (retain, nonatomic) AWDRxPhyErrors *rxPhyErrors;
@property (readonly, nonatomic) char hasUcastWPA2Counters;
@property (retain, nonatomic) AWDWPA2Counters *ucastWPA2Counters;
@property (readonly, nonatomic) char hasMcastWPA2Counters;
@property (retain, nonatomic) AWDWPA2Counters *mcastWPA2Counters;
@property (retain, nonatomic) NSMutableArray *frameCounterPerInterfaces;

+ (Class)frameCounterPerInterfaceType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addFrameCounterPerInterface:(id)a0;
- (void)clearFrameCounterPerInterfaces;
- (id)frameCounterPerInterfaceAtIndex:(unsigned long long)a0;
- (unsigned long long)frameCounterPerInterfacesCount;

@end
