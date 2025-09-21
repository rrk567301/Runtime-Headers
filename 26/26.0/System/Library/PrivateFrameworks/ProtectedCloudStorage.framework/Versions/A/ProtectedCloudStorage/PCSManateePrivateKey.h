@class NSData;

@interface PCSManateePrivateKey : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPrivateKey;
@property (retain, nonatomic) NSData *privateKey;
@property (readonly, nonatomic) BOOL hasPublicKeyInfo;
@property (retain, nonatomic) NSData *publicKeyInfo;

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
