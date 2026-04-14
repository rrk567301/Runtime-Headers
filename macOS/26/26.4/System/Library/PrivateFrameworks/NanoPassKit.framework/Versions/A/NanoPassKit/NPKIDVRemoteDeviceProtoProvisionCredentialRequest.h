@class NSData, NSString;

@interface NPKIDVRemoteDeviceProtoProvisionCredentialRequest : PBRequest <NSCopying>

@property (nonatomic) int credentialType;
@property (readonly, nonatomic) BOOL hasMetadataData;
@property (retain, nonatomic) NSData *metadataData;
@property (readonly, nonatomic) BOOL hasCredentialIdentifier;
@property (retain, nonatomic) NSString *credentialIdentifier;
@property (readonly, nonatomic) BOOL hasAttestationsData;
@property (retain, nonatomic) NSData *attestationsData;
@property (readonly, nonatomic) BOOL hasSupplementalData;
@property (retain, nonatomic) NSData *supplementalData;

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
- (int)StringAsCredentialType:(id)a0;
- (id)credentialTypeAsString:(int)a0;

@end
