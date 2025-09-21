@interface NTPBTelemetryStats : PBCodable <NSCopying> {
    struct { unsigned char count : 1; unsigned char max : 1; unsigned char mean : 1; unsigned char median : 1; unsigned char min : 1; unsigned char percentile95 : 1; } _has;
}

@property (nonatomic) char hasCount;
@property (nonatomic) long long count;
@property (nonatomic) char hasMin;
@property (nonatomic) long long min;
@property (nonatomic) char hasMax;
@property (nonatomic) long long max;
@property (nonatomic) char hasMean;
@property (nonatomic) long long mean;
@property (nonatomic) char hasMedian;
@property (nonatomic) long long median;
@property (nonatomic) char hasPercentile95;
@property (nonatomic) long long percentile95;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
