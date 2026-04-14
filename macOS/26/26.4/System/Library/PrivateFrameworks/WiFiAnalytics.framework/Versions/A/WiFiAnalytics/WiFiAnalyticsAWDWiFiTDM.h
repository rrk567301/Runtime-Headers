@class NSMutableArray;

@interface WiFiAnalyticsAWDWiFiTDM : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *sliceStats;

+ (Class)sliceStatsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)clearSliceStats;
- (unsigned long long)sliceStatsCount;
- (void)addSliceStats:(id)a0;
- (id)sliceStatsAtIndex:(unsigned long long)a0;

@end
