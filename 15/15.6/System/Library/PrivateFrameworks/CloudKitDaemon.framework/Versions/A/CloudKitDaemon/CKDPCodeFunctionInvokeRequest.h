@class CKDPCodeFunctionInvokeRequestAttestationRequest, NSString, CKCDPTrustedTargetCryptoMetadata, NSData, CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadata;

@interface CKDPCodeFunctionInvokeRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) char hasServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) char hasFunctionName;
@property (retain, nonatomic) NSString *functionName;
@property (readonly, nonatomic) char hasSerializedParameters;
@property (retain, nonatomic) NSData *serializedParameters;
@property (readonly, nonatomic) char hasProtectedCloudComputeMetadata;
@property (retain, nonatomic) CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadata *protectedCloudComputeMetadata;
@property (readonly, nonatomic) char hasAttestationRequest;
@property (retain, nonatomic) CKDPCodeFunctionInvokeRequestAttestationRequest *attestationRequest;
@property (readonly, nonatomic) char hasTrustedTargetCryptoMetadata;
@property (retain, nonatomic) CKCDPTrustedTargetCryptoMetadata *trustedTargetCryptoMetadata;

+ (id)options;

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

@end
