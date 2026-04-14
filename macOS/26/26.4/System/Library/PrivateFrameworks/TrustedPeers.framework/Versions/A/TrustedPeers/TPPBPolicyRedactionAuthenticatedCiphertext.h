@class NSData;

@interface TPPBPolicyRedactionAuthenticatedCiphertext : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasCiphertext;
@property (retain, nonatomic) NSData *ciphertext;
@property (readonly, nonatomic) BOOL hasAuthenticationCode;
@property (retain, nonatomic) NSData *authenticationCode;
@property (readonly, nonatomic) BOOL hasInitializationVector;
@property (retain, nonatomic) NSData *initializationVector;

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
