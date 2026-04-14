@class PKPaymentTapToProvisionData, NSString, NSArray, NSData, NSDictionary, NSMapTable, PKPaymentEligibilityResponse;

@interface PKPaymentProvisioningRequest : PKPaymentWebServiceRequest

@property (nonatomic) long long style;
@property (retain, nonatomic) PKPaymentEligibilityResponse *eligibilityResponse;
@property (readonly, nonatomic, getter=isDeviceProvisioningDataExpected) BOOL deviceProvisioningDataExpected;
@property (nonatomic) BOOL disableDeviceScore;
@property (nonatomic) BOOL sendReducedDeviceData;
@property (copy, nonatomic) NSString *odiAssessment;
@property (copy, nonatomic) NSString *nonce;
@property (copy, nonatomic) NSString *cardholderName;
@property (copy, nonatomic) NSString *cardSecurityCode;
@property (copy, nonatomic) NSData *activationData;
@property (copy, nonatomic) NSString *referrerIdentifier;
@property (nonatomic) BOOL includeExternalDestinationDevices;
@property (copy, nonatomic) NSArray *externalDestinationDevices;
@property (copy, nonatomic) NSDictionary *dynamicFieldParameters;
@property (copy, nonatomic) NSDictionary *encryptedDynamicFieldParameters;
@property (copy, nonatomic) NSDictionary *encryptedPerFieldDynamicFieldParameters;
@property (copy, nonatomic) NSString *transferFromDevice;
@property (nonatomic) BOOL removeFromSourceDevice;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSData *fidoAttestation;
@property (copy, nonatomic) NSData *fidoKey;
@property (copy, nonatomic) NSData *fidoSignedChallenge;
@property (copy, nonatomic) NSData *seBlobDeviceEncryptionCertificate;
@property (copy, nonatomic) NSArray *transactionKeyCertificateChain;
@property (copy, nonatomic) NSData *longTermPrivacyKey;
@property (copy, nonatomic) NSData *transactionKey;
@property (copy, nonatomic) NSArray *isoDeviceEncryptionAttestation;
@property (copy, nonatomic) NSData *isoDeviceEncryptionAuthorization;
@property (copy, nonatomic) NSString *subCredentialIdentifier;
@property (copy, nonatomic) NSString *identityAccountKeyIdentifier;
@property (copy, nonatomic) NSArray *authorizationKeyAttestation;
@property (copy, nonatomic) NSData *transactionKeyAttestation;
@property (copy, nonatomic) NSData *transactionKeySignature;
@property (copy, nonatomic) NSData *transactionKeyAuthorization;
@property (copy, nonatomic) NSData *progenitorKeyCASDAttestation;
@property (copy, nonatomic) NSArray *transactionKeys;
@property (copy, nonatomic) NSData *serverAttestedProvisioningData;
@property (copy, nonatomic) NSMapTable *auxiliaryCapabilities;
@property (retain, nonatomic) PKPaymentTapToProvisionData *tapToProvisionData;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithEligibilityResponse:(id)a0 addRequestConfiguration:(id)a1 addRequest:(id)a2;
- (void)_deviceScoreWithCompletion:(id /* block */)a0;
- (void)_requestBodyWithBuilder:(id)a0 request:(id)a1 completion:(id /* block */)a2;
- (id)_secureParameters;
- (void)_updateRequestForRedirect:(id)a0 overrides:(id)a1 webService:(id)a2 withCompletion:(id /* block */)a3;
- (void)_updateRequestForRetry:(id)a0 retryFields:(id)a1 webService:(id)a2 withCompletion:(id /* block */)a3;
- (void)_urlRequestWithBuilder:(id)a0 webService:(id)a1 completion:(id /* block */)a2;
- (id)initWithEligibilityResponse:(id)a0;
- (id)initWithEligibilityResponse:(id)a0 style:(long long)a1;

@end
