@class NSMutableArray;

@interface PPSPBMetricStream : PBCodable <NSCopying> {
    struct { unsigned char protoVersion : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *metricHistorys;
@property (nonatomic) BOOL hasProtoVersion;
@property (nonatomic) double protoVersion;

+ (Class)metricHistoryType;

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
- (void)addMetricHistory:(id)a0;
- (void)clearMetricHistorys;
- (id)metricHistoryAtIndex:(unsigned long long)a0;
- (unsigned long long)metricHistorysCount;

@end
