@class NSMutableArray;

@interface AWDWiFiTDM : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *sliceStats;

+ (Class)sliceStatsType;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearSliceStats;
- (void)addSliceStats:(id)a0;
- (unsigned long long)sliceStatsCount;
- (id)sliceStatsAtIndex:(unsigned long long)a0;

@end
