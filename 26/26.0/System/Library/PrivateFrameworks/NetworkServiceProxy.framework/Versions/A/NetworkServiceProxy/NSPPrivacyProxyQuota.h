@class NSPPrivacyProxyCost;

@interface NSPPrivacyProxyQuota : PBCodable <NSCopying> {
    struct { unsigned char expiration : 1; } _has;
}

@property (nonatomic) BOOL hasExpiration;
@property (nonatomic) unsigned long long expiration;
@property (readonly, nonatomic) BOOL hasCost;
@property (retain, nonatomic) NSPPrivacyProxyCost *cost;

- (void)copyTo:(id)a0;
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
