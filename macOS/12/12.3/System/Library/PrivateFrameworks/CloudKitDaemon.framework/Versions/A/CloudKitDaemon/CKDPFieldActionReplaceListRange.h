@class CKDPListRange, NSMutableArray;

@interface CKDPFieldActionReplaceListRange : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRange;
@property (retain, nonatomic) CKDPListRange *range;
@property (retain, nonatomic) NSMutableArray *values;

+ (Class)valueType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)valueAtIndex:(unsigned long long)a0;
- (void)addValue:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)valuesCount;
- (void)clearValues;

@end
