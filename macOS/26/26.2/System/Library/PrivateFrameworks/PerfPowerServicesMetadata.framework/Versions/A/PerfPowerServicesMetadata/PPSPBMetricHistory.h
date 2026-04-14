@class NSMutableArray;

@interface PPSPBMetricHistory : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *metrics;

+ (Class)metricsType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)metricsCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void)clearMetrics;
- (id)dictionaryRepresentation;
- (void)addMetrics:(id)a0;
- (id)metricsAtIndex:(unsigned long long)a0;

@end
