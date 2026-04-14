@class NSURL, NSData;

@interface PKPaymentRegisterCredentialResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) NSURL *passURL;
@property (readonly, nonatomic) NSData *credentialAttestation;
@property (readonly, nonatomic) NSData *ephemeralPublicKey;
@property (readonly, nonatomic) NSData *encryptedData;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
