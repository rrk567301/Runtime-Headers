@class NSMutableArray;

@interface _MRDictionaryProtobuf : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *pairs;

+ (Class)pairType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearPairs;
- (unsigned long long)pairsCount;
- (void)addPair:(id)a0;
- (id)pairAtIndex:(unsigned long long)a0;

@end
