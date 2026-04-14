@class NSMutableArray;

@interface SEARCH_QU_PROTOStringList : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *values;

+ (Class)valuesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)valuesCount;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)clearValues;
- (void)writeTo:(id)a0;
- (void)addValues:(id)a0;
- (id)valuesAtIndex:(unsigned long long)a0;

@end
