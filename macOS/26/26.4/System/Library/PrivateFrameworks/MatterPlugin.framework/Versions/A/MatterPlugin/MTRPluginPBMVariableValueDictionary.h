@class NSDictionary, NSMutableArray;

@interface MTRPluginPBMVariableValueDictionary : PBCodable <NSCopying>

@property (retain, nonatomic) NSDictionary *dictionary;
@property (retain, nonatomic) NSMutableArray *pairs;

+ (Class)pairType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)clearPairs;
- (unsigned long long)pairsCount;
- (void)addPair:(id)a0;
- (id)pairAtIndex:(unsigned long long)a0;

@end
