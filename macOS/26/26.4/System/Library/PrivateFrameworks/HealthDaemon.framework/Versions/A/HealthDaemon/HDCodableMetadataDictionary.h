@class NSMutableArray;

@interface HDCodableMetadataDictionary : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *keyValuePairs;

+ (Class)keyValuePairsType;
+ (id)decodeMetadataFromData:(id)a0;

- (unsigned long long)keyValuePairsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)keyValuePairsAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearKeyValuePairs;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)addKeyValuePairs:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
