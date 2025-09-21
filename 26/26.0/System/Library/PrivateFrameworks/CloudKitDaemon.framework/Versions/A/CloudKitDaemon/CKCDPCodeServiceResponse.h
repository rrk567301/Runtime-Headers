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

- (id)assetAuthorizationResponsesAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (void)clearAssetAuthorizationResponses;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addAssetAuthorizationResponses:(id)a0;
- (unsigned long long)assetAuthorizationResponsesCount;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
