@class NSString;

@interface PKPaymentRemoteCredentialsRequest : PKPaymentWebServiceRequest

@property (nonatomic) BOOL includeMetadata;
@property (nonatomic) BOOL excludeCredentialTransferDeviceInfo;
@property (copy, nonatomic) NSString *productIdentifier;
@property (nonatomic) long long credentialType;
@property (nonatomic) BOOL deviceProvisioningDataExpected;
@property (nonatomic) BOOL fetchExtendedAuthorizationActions;

- (void).cxx_destruct;
- (void)_deviceScoreUsingWebService:(id)a0 withCompletion:(id /* block */)a1;
- (void)_updateRequestForRedirect:(id)a0 overrides:(id)a1 webService:(id)a2 withCompletion:(id /* block */)a3;
- (void)_updateRequestForRetry:(id)a0 retryFields:(id)a1 webService:(id)a2 withCompletion:(id /* block */)a3;
- (void)_urlRequestWithBuilder:(id)a0 webService:(id)a1 completion:(id /* block */)a2;

@end
