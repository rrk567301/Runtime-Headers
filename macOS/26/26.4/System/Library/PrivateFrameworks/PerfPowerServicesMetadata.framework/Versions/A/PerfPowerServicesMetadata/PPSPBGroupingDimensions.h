@class NSMutableArray;

@interface PPSPBGroupingDimensions : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *groupBys;

+ (Class)groupByType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)groupByAtIndex:(unsigned long long)a0;
- (void)addGroupBy:(id)a0;
- (void)clearGroupBys;
- (unsigned long long)groupBysCount;

@end
