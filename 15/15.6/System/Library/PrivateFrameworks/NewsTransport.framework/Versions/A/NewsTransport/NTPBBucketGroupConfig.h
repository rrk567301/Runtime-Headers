@interface NTPBBucketGroupConfig : PBCodable <NSCopying>

@property (nonatomic) int version;
@property (nonatomic) long long numberOfBuckets;
@property (nonatomic) long long byteCount;
@property (nonatomic) long long validUntilDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
