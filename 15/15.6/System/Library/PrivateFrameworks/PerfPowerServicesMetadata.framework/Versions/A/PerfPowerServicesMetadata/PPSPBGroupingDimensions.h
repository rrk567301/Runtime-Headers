@class NSMutableArray;

@interface PPSPBGroupingDimensions : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *groupBys;

+ (Class)groupByType;

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
- (id)groupByAtIndex:(unsigned long long)a0;
- (void)addGroupBy:(id)a0;
- (void)clearGroupBys;
- (unsigned long long)groupBysCount;

@end
