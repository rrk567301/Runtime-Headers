@class NSMutableArray;

@interface HKCodableQuantitySeriesEnumerationResultCollection : PBCodable <NSCopying> {
    struct { unsigned char latestSampleStartTime : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *results;
@property (nonatomic) BOOL hasLatestSampleStartTime;
@property (nonatomic) double latestSampleStartTime;

+ (Class)resultsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (unsigned long long)resultsCount;
- (void)addResults:(id)a0;
- (void)clearResults;
- (id)resultsAtIndex:(unsigned long long)a0;

@end
