@class NSData;

@interface TPPBPolicyRedactionAuthenticatedCiphertext : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasCiphertext;
@property (retain, nonatomic) NSData *ciphertext;
@property (readonly, nonatomic) BOOL hasAuthenticationCode;
@property (retain, nonatomic) NSData *authenticationCode;
@property (readonly, nonatomic) BOOL hasInitializationVector;
@property (retain, nonatomic) NSData *initializationVector;

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
