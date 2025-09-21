@class NSData, CKCDPError, NSMutableArray, CKCDPCodeServiceResponseAttestationResponse;

@interface CKCDPCodeServiceResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasSerializedResult;
@property (retain, nonatomic) NSData *serializedResult;
@property (readonly, nonatomic) char hasError;
@property (retain, nonatomic) CKCDPError *error;
@property (retain, nonatomic) NSMutableArray *assetAuthorizationResponses;
@property (readonly, nonatomic) char hasAttestationResponse;
@property (retain, nonatomic) CKCDPCodeServiceResponseAttestationResponse *attestationResponse;

+ (Class)assetAuthorizationResponsesType;

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
- (void)addAssetAuthorizationResponses:(id)a0;
- (id)assetAuthorizationResponsesAtIndex:(unsigned long long)a0;
- (unsigned long long)assetAuthorizationResponsesCount;
- (void)clearAssetAuthorizationResponses;

@end
