@class NSData;

@interface NTPBBloomFilterInfo : PBCodable <NSCopying>

@property (retain, nonatomic) NSData *bloomFilterData;
@property (nonatomic) int hashFunctionCount;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end
