@class NSMutableArray;

@interface PPSPBMetricHistory : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *metrics;

+ (Class)metricsType;

- (id)dictionaryRepresentation;
- (void)clearMetrics;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)metricsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addMetrics:(id)a0;
- (id)metricsAtIndex:(unsigned long long)a0;

@end
