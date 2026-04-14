@class NSData;

@interface NGMPBOuterMessage : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasEncryptedPayload;
@property (retain, nonatomic) NSData *encryptedPayload;
@property (readonly, nonatomic) BOOL hasEphemeralPubKey;
@property (retain, nonatomic) NSData *ephemeralPubKey;
@property (readonly, nonatomic) BOOL hasSignature;
@property (retain, nonatomic) NSData *signature;
@property (readonly, nonatomic) BOOL hasTetraMessage;
@property (retain, nonatomic) NSData *tetraMessage;
@property (readonly, nonatomic) BOOL hasKeyValidator;
@property (retain, nonatomic) NSData *keyValidator;

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
