@class NSArray, NSSet, NSMutableArray;

@interface MTRPluginPBMVariableValueList : PBCodable <NSCopying>

@property (retain, nonatomic) NSArray *array;
@property (retain, nonatomic) NSSet *set;
@property (retain, nonatomic) NSMutableArray *values;

+ (Class)valueType;

- (id)valueAtIndex:(unsigned long long)a0;
- (id)initWithArray:(id)a0;
- (void)addValue:(id)a0;
- (id)initWithSet:(id)a0;
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
- (id)_convertArray:(id)a0;

@end
