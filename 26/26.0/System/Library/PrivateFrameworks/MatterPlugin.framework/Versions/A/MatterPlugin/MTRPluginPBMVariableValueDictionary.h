@class NSDictionary, NSMutableArray;

@interface MTRPluginPBMVariableValueDictionary : PBCodable <NSCopying>

@property (retain, nonatomic) NSDictionary *dictionary;
@property (retain, nonatomic) NSMutableArray *pairs;

+ (Class)pairType;

- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)clearPairs;
- (unsigned long long)pairsCount;
- (void)addPair:(id)a0;
- (id)pairAtIndex:(unsigned long long)a0;

@end
