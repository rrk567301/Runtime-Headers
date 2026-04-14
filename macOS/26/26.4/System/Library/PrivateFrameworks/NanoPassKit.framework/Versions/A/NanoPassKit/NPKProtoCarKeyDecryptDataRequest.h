@class NSData;

@interface NPKProtoCarKeyDecryptDataRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasEncryptedData;
@property (retain, nonatomic) NSData *encryptedData;
@property (readonly, nonatomic) BOOL hasCredentialData;
@property (retain, nonatomic) NSData *credentialData;
@property (readonly, nonatomic) BOOL hasEphemeralPublicKeyData;
@property (retain, nonatomic) NSData *ephemeralPublicKeyData;

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
