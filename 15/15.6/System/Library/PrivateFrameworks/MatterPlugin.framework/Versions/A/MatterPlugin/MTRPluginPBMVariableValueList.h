@class NSArray, NSSet, NSMutableArray;

@interface MTRPluginPBMVariableValueList : PBCodable <NSCopying>

@property (retain, nonatomic) NSArray *array;
@property (retain, nonatomic) NSSet *set;
@property (retain, nonatomic) NSMutableArray *values;

+ (Class)valueType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithArray:(id)a0;
- (id)initWithSet:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addValue:(id)a0;
- (id)valueAtIndex:(unsigned long long)a0;
- (id)_convertArray:(id)a0;
- (void)clearValues;
- (unsigned long long)valuesCount;

@end
