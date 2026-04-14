@class NSMutableArray;

@interface NTPBWrappingKeyRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *wrappingKeyIds;

+ (Class)wrappingKeyIdsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearWrappingKeyIds;
- (void)addWrappingKeyIds:(id)a0;
- (unsigned long long)wrappingKeyIdsCount;
- (id)wrappingKeyIdsAtIndex:(unsigned long long)a0;

@end
