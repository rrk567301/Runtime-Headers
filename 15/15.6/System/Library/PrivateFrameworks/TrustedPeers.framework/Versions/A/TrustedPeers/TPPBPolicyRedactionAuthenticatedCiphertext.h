@class NSData;

@interface TPPBPolicyRedactionAuthenticatedCiphertext : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasCiphertext;
@property (retain, nonatomic) NSData *ciphertext;
@property (readonly, nonatomic) char hasAuthenticationCode;
@property (retain, nonatomic) NSData *authenticationCode;
@property (readonly, nonatomic) char hasInitializationVector;
@property (retain, nonatomic) NSData *initializationVector;

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
