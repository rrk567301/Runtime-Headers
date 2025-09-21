@class NSString;

@interface PKProtobufShareableCredential : PBCodable <NSCopying> {
    struct { unsigned char status : 1; } _has;
}

@property (readonly, nonatomic) char hasEncryptedPushProvisioningTarget;
@property (retain, nonatomic) NSString *encryptedPushProvisioningTarget;
@property (nonatomic) char hasStatus;
@property (nonatomic) int status;
@property (readonly, nonatomic) char hasCredentialIdentifierHash;
@property (retain, nonatomic) NSString *credentialIdentifierHash;
@property (readonly, nonatomic) char hasOwnerDisplayName;
@property (retain, nonatomic) NSString *ownerDisplayName;
@property (readonly, nonatomic) char hasCredentialIdentifier;
@property (retain, nonatomic) NSString *credentialIdentifier;
@property (readonly, nonatomic) char hasCardConfigurationIdentifier;
@property (retain, nonatomic) NSString *cardConfigurationIdentifier;
@property (readonly, nonatomic) char hasSharingInstanceIdentifier;
@property (retain, nonatomic) NSString *sharingInstanceIdentifier;
@property (readonly, nonatomic) char hasNonce;
@property (retain, nonatomic) NSString *nonce;

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
- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;

@end
