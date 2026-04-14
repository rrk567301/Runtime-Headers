@interface NTPBBucketGroupConfig : PBCodable <NSCopying>

@property (nonatomic) int version;
@property (nonatomic) long long numberOfBuckets;
@property (nonatomic) long long byteCount;
@property (nonatomic) long long validUntilDate;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
