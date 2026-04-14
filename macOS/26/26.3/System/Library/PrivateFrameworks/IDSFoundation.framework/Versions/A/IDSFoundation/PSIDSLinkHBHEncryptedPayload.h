@class NSData;

@interface PSIDSLinkHBHEncryptedPayload : PBCodable <NSCopying>

@property (retain, nonatomic) NSData *initializationVector;
@property (retain, nonatomic) NSData *cipherText;
@property (retain, nonatomic) NSData *authenticationTag;

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
