@class NSPPrivacyProxyCost;

@interface NSPPrivacyProxyQuota : PBCodable <NSCopying> {
    struct { unsigned char expiration : 1; } _has;
}

@property (nonatomic) BOOL hasExpiration;
@property (nonatomic) unsigned long long expiration;
@property (readonly, nonatomic) BOOL hasCost;
@property (retain, nonatomic) NSPPrivacyProxyCost *cost;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
