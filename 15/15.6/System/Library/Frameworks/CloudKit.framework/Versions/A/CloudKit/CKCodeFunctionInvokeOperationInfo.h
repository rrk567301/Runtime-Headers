@class NSString, NSArray, NSData, NSURL;

@interface CKCodeFunctionInvokeOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *functionName;
@property (copy, nonatomic) NSArray *requestLocalSerializations;
@property (copy, nonatomic) NSArray *requestLocalEnvelopes;
@property (nonatomic) unsigned long long dataProtectionType;
@property (copy, nonatomic) NSData *permittedRemoteMeasurement;
@property (copy, nonatomic) NSString *trustedTargetDomain;
@property (copy, nonatomic) NSString *trustedTargetOID;
@property (nonatomic) char shouldSendRecordPCSKeys;
@property (nonatomic) char enqueuedOnContainerService;
@property (copy, nonatomic) NSURL *clientRuntimeProvidedServiceURL;
@property (nonatomic) char legacyIsLocalBit;
@property (nonatomic) char shouldFetchAssetContentInMemory;

+ (void)applyDefaultParametersToServiceURLComponents:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
