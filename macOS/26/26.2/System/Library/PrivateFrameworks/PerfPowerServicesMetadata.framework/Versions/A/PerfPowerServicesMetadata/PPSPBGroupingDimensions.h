@class NSMutableArray;

@interface PPSPBGroupingDimensions : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *groupBys;

+ (Class)groupByType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (id)groupByAtIndex:(unsigned long long)a0;
- (void)addGroupBy:(id)a0;
- (void)clearGroupBys;
- (unsigned long long)groupBysCount;

@end
