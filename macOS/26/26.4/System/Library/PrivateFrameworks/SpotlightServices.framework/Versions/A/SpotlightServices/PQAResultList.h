@class NSMutableArray;

@interface PQAResultList : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *results;

+ (Class)resultsType;

- (void)addResults:(id)a0;
- (id)resultsAtIndex:(unsigned long long)a0;
- (unsigned long long)resultsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearResults;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
