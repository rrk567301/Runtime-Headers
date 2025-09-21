@class NSData;

@interface CKDPCryptoRequirementsSigningKey : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasSigningPublicKey;
@property (retain, nonatomic) NSData *signingPublicKey;
@property (readonly, nonatomic) char hasSigningPublicKeySignature;
@property (retain, nonatomic) NSData *signingPublicKeySignature;

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
