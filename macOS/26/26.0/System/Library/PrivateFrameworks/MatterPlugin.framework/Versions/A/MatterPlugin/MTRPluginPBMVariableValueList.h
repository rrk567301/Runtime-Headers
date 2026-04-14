@class NSArray, NSSet, NSMutableArray;

@interface MTRPluginPBMVariableValueList : PBCodable <NSCopying>

@property (retain, nonatomic) NSArray *array;
@property (retain, nonatomic) NSSet *set;
@property (retain, nonatomic) NSMutableArray *values;

+ (Class)valueType;

- (id)valueAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)addValue:(id)a0;
- (void)clearValues;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)valuesCount;
- (id)description;
- (id)initWithArray:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (id)initWithSet:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_convertArray:(id)a0;

@end
