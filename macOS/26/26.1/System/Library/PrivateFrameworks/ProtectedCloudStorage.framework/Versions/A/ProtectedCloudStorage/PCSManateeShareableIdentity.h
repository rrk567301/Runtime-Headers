@class PCSManateePrivateKey;

@interface PCSManateeShareableIdentity : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasEncryptionPrivateKey;
@property (retain, nonatomic) PCSManateePrivateKey *encryptionPrivateKey;
@property (readonly, nonatomic) BOOL hasSigningPrivateKey;
@property (retain, nonatomic) PCSManateePrivateKey *signingPrivateKey;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
