@class NSMutableArray;

@interface HKCodableQuantitySeriesEnumerationResultCollection : PBCodable <NSCopying> {
    struct { unsigned char latestSampleStartTime : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *results;
@property (nonatomic) char hasLatestSampleStartTime;
@property (nonatomic) double latestSampleStartTime;

+ (Class)resultsType;

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
- (void)addResults:(id)a0;
- (void)clearResults;
- (unsigned long long)resultsCount;
- (id)resultsAtIndex:(unsigned long long)a0;

@end
