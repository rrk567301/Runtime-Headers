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

- (void)clearAssetAuthorizationResponses;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)assetAuthorizationResponsesAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (unsigned long long)assetAuthorizationResponsesCount;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addAssetAuthorizationResponses:(id)a0;

@end
