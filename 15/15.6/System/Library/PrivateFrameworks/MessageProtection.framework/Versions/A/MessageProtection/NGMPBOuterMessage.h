@class NSData;

@interface NGMPBOuterMessage : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasEncryptedPayload;
@property (retain, nonatomic) NSData *encryptedPayload;
@property (readonly, nonatomic) char hasEphemeralPubKey;
@property (retain, nonatomic) NSData *ephemeralPubKey;
@property (readonly, nonatomic) char hasSignature;
@property (retain, nonatomic) NSData *signature;
@property (readonly, nonatomic) char hasTetraMessage;
@property (retain, nonatomic) NSData *tetraMessage;
@property (readonly, nonatomic) char hasKeyValidator;
@property (retain, nonatomic) NSData *keyValidator;

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
