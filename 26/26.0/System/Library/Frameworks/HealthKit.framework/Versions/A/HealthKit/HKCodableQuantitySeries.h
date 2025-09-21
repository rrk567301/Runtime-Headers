@class NSMutableArray;

@interface HKCodableQuantitySeries : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *values;

+ (Class)valuesType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)clearValues;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)valuesCount;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addValues:(id)a0;
- (id)valuesAtIndex:(unsigned long long)a0;

@end
