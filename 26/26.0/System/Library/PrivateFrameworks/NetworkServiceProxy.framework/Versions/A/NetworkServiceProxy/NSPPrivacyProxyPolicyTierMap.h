@class NSPPrivacyProxyPolicy;

@interface NSPPrivacyProxyPolicyTierMap : PBCodable <NSCopying>

@property (nonatomic) int tier;
@property (retain, nonatomic) NSPPrivacyProxyPolicy *policy;

- (int)StringAsTier:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)tierAsString:(int)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
