@class NSArray, NSSet, NSMutableArray;

@interface MTRPluginPBMVariableValueList : PBCodable <NSCopying>

@property (retain, nonatomic) NSArray *array;
@property (retain, nonatomic) NSSet *set;
@property (retain, nonatomic) NSMutableArray *values;

+ (Class)valueType;

- (void)addValue:(id)a0;
- (void)clearValues;
- (id)initWithArray:(id)a0;
- (id)valueAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (unsigned long long)valuesCount;
- (id)initWithSet:(id)a0;
- (id)dictionaryRepresentation;
- (id)_convertArray:(id)a0;

@end
