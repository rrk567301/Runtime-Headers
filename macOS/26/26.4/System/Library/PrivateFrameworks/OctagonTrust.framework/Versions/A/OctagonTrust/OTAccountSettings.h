@class OTWalrus, OTWebAccess;

@interface OTAccountSettings : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasWalrus;
@property (retain, nonatomic) OTWalrus *walrus;
@property (readonly, nonatomic) BOOL hasWebAccess;
@property (retain, nonatomic) OTWebAccess *webAccess;

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
