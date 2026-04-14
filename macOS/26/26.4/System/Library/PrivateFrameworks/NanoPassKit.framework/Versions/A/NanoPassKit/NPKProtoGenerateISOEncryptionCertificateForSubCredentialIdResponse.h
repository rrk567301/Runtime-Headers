@class NSData, NSMutableArray;

@interface NPKProtoGenerateISOEncryptionCertificateForSubCredentialIdResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *attestations;
@property (readonly, nonatomic) BOOL hasAuthorization;
@property (retain, nonatomic) NSData *authorization;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (retain, nonatomic) NSData *errorData;

+ (Class)attestationType;

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
- (unsigned long long)attestationsCount;
- (void)clearAttestations;
- (void)addAttestation:(id)a0;
- (id)attestationAtIndex:(unsigned long long)a0;

@end
