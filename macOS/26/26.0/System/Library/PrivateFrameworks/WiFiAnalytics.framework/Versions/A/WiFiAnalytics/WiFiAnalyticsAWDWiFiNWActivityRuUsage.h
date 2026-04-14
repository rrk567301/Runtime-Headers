@class NSMutableArray;

@interface WiFiAnalyticsAWDWiFiNWActivityRuUsage : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *rxs;
@property (retain, nonatomic) NSMutableArray *txs;

+ (Class)rxType;
+ (Class)txType;

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
- (void)addRx:(id)a0;
- (void)addTx:(id)a0;
- (void)clearRxs;
- (void)clearTxs;
- (id)rxAtIndex:(unsigned long long)a0;
- (unsigned long long)rxsCount;
- (id)txAtIndex:(unsigned long long)a0;
- (unsigned long long)txsCount;

@end
