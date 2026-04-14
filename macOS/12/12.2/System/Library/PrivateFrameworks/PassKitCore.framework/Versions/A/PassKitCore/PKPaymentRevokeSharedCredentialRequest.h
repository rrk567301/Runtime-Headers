@class NSString, NSDictionary;

@interface PKPaymentRevokeSharedCredentialRequest : PKPaymentWebServiceRequest {
    NSString *_credentialIdentifier;
    NSDictionary *_revocationAttestation;
}

- (void).cxx_destruct;
- (id)requestBody;
- (id)initWithCredential:(id)a0 revocationAttestation:(id)a1;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;

@end
