@class NTPBBucketGroupConfig, NTPBBloomFilterInfo;

@interface NTPBBucketGroupConfigResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasBucketGroupConfig;
@property (retain, nonatomic) NTPBBucketGroupConfig *bucketGroupConfig;
@property (readonly, nonatomic) char hasDomainBloomFilterInfo;
@property (retain, nonatomic) NTPBBloomFilterInfo *domainBloomFilterInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
