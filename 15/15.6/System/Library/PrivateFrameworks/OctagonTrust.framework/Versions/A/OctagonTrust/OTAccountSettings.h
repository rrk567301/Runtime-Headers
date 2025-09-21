@class OTWalrus, OTWebAccess;

@interface OTAccountSettings : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasWalrus;
@property (retain, nonatomic) OTWalrus *walrus;
@property (readonly, nonatomic) char hasWebAccess;
@property (retain, nonatomic) OTWebAccess *webAccess;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
