@class NSData, NSString, CKCDPCodeServiceRequestRequestContext, CKCDPCodeServiceRequestAuthInformation, CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions, CKCDPCodeServiceRequestAttestationRequest, CKCDPTrustedTargetCryptoMetadata, NSMutableArray, CKCDPCodeServiceRequestAccountConfig, CKCDPCodeServiceRequestProtectedCloudComputeMetadata;

@interface CKCDPCodeServiceRequest : PBRequest <NSCopying> {
    struct { unsigned char dataProtection : 1; unsigned char serializationFormat : 1; } _has;
}

@property (readonly, nonatomic) char hasServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) char hasFunctionName;
@property (retain, nonatomic) NSString *functionName;
@property (readonly, nonatomic) char hasSerializedParameters;
@property (retain, nonatomic) NSData *serializedParameters;
@property (nonatomic) char hasSerializationFormat;
@property (nonatomic) int serializationFormat;
@property (retain, nonatomic) NSMutableArray *clientConfigs;
@property (readonly, nonatomic) char hasAccountConfig;
@property (retain, nonatomic) CKCDPCodeServiceRequestAccountConfig *accountConfig;
@property (readonly, nonatomic) char hasRequestContext;
@property (retain, nonatomic) CKCDPCodeServiceRequestRequestContext *requestContext;
@property (readonly, nonatomic) char hasAssetAuthorizeGetRequestOptions;
@property (retain, nonatomic) CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions *assetAuthorizeGetRequestOptions;
@property (readonly, nonatomic) char hasAttestationRequest;
@property (retain, nonatomic) CKCDPCodeServiceRequestAttestationRequest *attestationRequest;
@property (readonly, nonatomic) char hasAuthInformation;
@property (retain, nonatomic) CKCDPCodeServiceRequestAuthInformation *authInformation;
@property (readonly, nonatomic) char hasProtectedCloudComputeMetadata;
@property (retain, nonatomic) CKCDPCodeServiceRequestProtectedCloudComputeMetadata *protectedCloudComputeMetadata;
@property (readonly, nonatomic) char hasTrustedTargetCryptoMetadata;
@property (retain, nonatomic) CKCDPTrustedTargetCryptoMetadata *trustedTargetCryptoMetadata;
@property (nonatomic) char hasDataProtection;
@property (nonatomic) int dataProtection;

+ (Class)clientConfigType;

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
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)addClientConfig:(id)a0;
- (void)clearClientConfigs;
- (id)clientConfigAtIndex:(unsigned long long)a0;
- (unsigned long long)clientConfigsCount;
- (int)StringAsSerializationFormat:(id)a0;
- (int)StringAsDataProtection:(id)a0;
- (void)clearOneofValuesForDataProtection;
- (id)dataProtectionAsString:(int)a0;
- (id)serializationFormatAsString:(int)a0;

@end
