@class NSData, CKCDPError, NSMutableArray, CKCDPCodeServiceResponseAttestationResponse;

@interface CKCDPCodeServiceResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSerializedResult;
@property (retain, nonatomic) NSData *serializedResult;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) CKCDPError *error;
@property (retain, nonatomic) NSMutableArray *assetAuthorizationResponses;
@property (readonly, nonatomic) BOOL hasAttestationResponse;
@property (retain, nonatomic) CKCDPCodeServiceResponseAttestationResponse *attestationResponse;

+ (Class)assetAuthorizationResponsesType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)clearAssetAuthorizationResponses;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)assetAuthorizationResponsesCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)addAssetAuthorizationResponses:(id)a0;
- (unsigned long long)hash;
- (id)assetAuthorizationResponsesAtIndex:(unsigned long long)a0;

@end
