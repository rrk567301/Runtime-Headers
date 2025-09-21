@class NSString, NSMutableArray;

@interface C2MPGenericEvent : PBCodable <NSCopying> {
    struct { unsigned char timestampEnd : 1; unsigned char timestampStart : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) char hasTimestampStart;
@property (nonatomic) unsigned long long timestampStart;
@property (nonatomic) char hasTimestampEnd;
@property (nonatomic) unsigned long long timestampEnd;
@property (retain, nonatomic) NSMutableArray *metrics;

+ (Class)metricType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)addMetric:(id)a0;
- (void)clearMetrics;
- (id)metricAtIndex:(unsigned long long)a0;
- (unsigned long long)metricsCount;

@end
