@class NSMutableArray;

@interface NTPBWrappingKeyRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *wrappingKeyIds;

+ (Class)wrappingKeyIdsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addWrappingKeyIds:(id)a0;
- (void)clearWrappingKeyIds;
- (id)wrappingKeyIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)wrappingKeyIdsCount;

@end
