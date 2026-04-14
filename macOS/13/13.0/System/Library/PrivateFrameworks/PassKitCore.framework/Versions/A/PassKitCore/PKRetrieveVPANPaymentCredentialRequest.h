@class NSArray, NSString, PKVirtualCardEncryptionFields, PKSecureElementPass;

@interface PKRetrieveVPANPaymentCredentialRequest : PKPaymentWebServiceRequest

@property (readonly, copy, nonatomic) NSArray *endpointComponents;
@property (retain, nonatomic) PKSecureElementPass *paymentPass;
@property (copy, nonatomic) NSString *vpanIdentifier;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (copy, nonatomic) NSString *nonce;
@property (retain, nonatomic) PKVirtualCardEncryptionFields *encryptionFields;
@property (copy, nonatomic) NSString *merchantHost;

- (void).cxx_destruct;
- (id)initWithPaymentPass:(id)a0 vpanIdentifier:(id)a1 deviceIdentifier:(id)a2 nonce:(id)a3 encryptionFields:(id)a4 merchantHost:(id)a5;
- (id)_urlRequestWithServiceURL:(id)a0 rewrapData:(id)a1 appleAccountInformation:(id)a2;

@end
