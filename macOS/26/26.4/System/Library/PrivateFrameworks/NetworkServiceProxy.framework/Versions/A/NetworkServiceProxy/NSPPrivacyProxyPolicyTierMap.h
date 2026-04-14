@class NSPPrivacyProxyPolicy;

@interface NSPPrivacyProxyPolicyTierMap : PBCodable <NSCopying>

@property (nonatomic) int tier;
@property (retain, nonatomic) NSPPrivacyProxyPolicy *policy;

- (int)StringAsTier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)tierAsString:(int)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
