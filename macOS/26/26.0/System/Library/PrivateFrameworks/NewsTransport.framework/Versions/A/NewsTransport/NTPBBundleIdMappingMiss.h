@class NSString;

@interface NTPBBundleIdMappingMiss : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;

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
