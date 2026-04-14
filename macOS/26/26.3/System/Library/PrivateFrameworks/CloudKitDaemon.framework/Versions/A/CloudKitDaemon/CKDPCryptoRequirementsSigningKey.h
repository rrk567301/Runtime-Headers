@class NSData;

@interface CKDPCryptoRequirementsSigningKey : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSigningPublicKey;
@property (retain, nonatomic) NSData *signingPublicKey;
@property (readonly, nonatomic) BOOL hasSigningPublicKeySignature;
@property (retain, nonatomic) NSData *signingPublicKeySignature;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
