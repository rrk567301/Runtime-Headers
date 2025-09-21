@class NTPBBucketGroupConfig, NTPBBloomFilterInfo;

@interface NTPBBucketGroupConfigResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBucketGroupConfig;
@property (retain, nonatomic) NTPBBucketGroupConfig *bucketGroupConfig;
@property (readonly, nonatomic) BOOL hasDomainBloomFilterInfo;
@property (retain, nonatomic) NTPBBloomFilterInfo *domainBloomFilterInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
