@class NSArray, NSSet, NSMutableArray;

@interface MTRPluginPBMVariableValueList : PBCodable <NSCopying>

@property (retain, nonatomic) NSArray *array;
@property (retain, nonatomic) NSSet *set;
@property (retain, nonatomic) NSMutableArray *values;

+ (Class)valueType;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)valueAtIndex:(unsigned long long)a0;
- (void)addValue:(id)a0;
- (id)description;
- (void)clearValues;
- (id)initWithSet:(id)a0;
- (unsigned long long)valuesCount;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithArray:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)_convertArray:(id)a0;

@end
