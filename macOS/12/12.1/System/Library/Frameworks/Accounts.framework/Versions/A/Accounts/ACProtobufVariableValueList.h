@class NSArray, NSSet, NSMutableArray;

@interface ACProtobufVariableValueList : PBCodable <NSCopying>

@property (copy, nonatomic) NSArray *array;
@property (copy, nonatomic) NSSet *set;
@property (retain, nonatomic) NSMutableArray *values;

+ (Class)valueType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithArray:(id)a0;
- (void).cxx_destruct;
- (id)initWithSet:(id)a0;
- (id)dictionaryRepresentation;
- (id)valueAtIndex:(unsigned long long)a0;
- (void)addValue:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)valuesCount;
- (void)clearValues;
- (id)_convertArray:(id)a0;

@end
