@class NSMutableArray;

@interface HDCodableMetadataDictionary : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *keyValuePairs;

+ (Class)keyValuePairsType;
+ (id)decodeMetadataFromData:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearKeyValuePairs;
- (void)addKeyValuePairs:(id)a0;
- (unsigned long long)keyValuePairsCount;
- (id)keyValuePairsAtIndex:(unsigned long long)a0;

@end
