@class NSData;

@interface CKDPCryptoRequirementsSigningKey : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSigningPublicKey;
@property (retain, nonatomic) NSData *signingPublicKey;
@property (readonly, nonatomic) BOOL hasSigningPublicKeySignature;
@property (retain, nonatomic) NSData *signingPublicKeySignature;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end
