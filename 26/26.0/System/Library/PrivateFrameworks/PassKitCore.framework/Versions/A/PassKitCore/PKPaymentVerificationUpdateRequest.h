@class PKVerificationChannel, NSString, NSDictionary, PKPassVerificationMethodGroup, PKSecureElementPass, PKPassVerificationMethod;

@interface PKPaymentVerificationUpdateRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *stepIdentifier;
@property (retain, nonatomic) PKSecureElementPass *pass;
@property (retain, nonatomic) PKVerificationChannel *channel;
@property (retain, nonatomic) PKPassVerificationMethodGroup *methodGroup;
@property (retain, nonatomic) PKPassVerificationMethod *method;
@property (copy, nonatomic) NSDictionary *dynamicFieldParameters;
@property (copy, nonatomic) NSDictionary *encryptedDynamicFieldParameters;
@property (copy, nonatomic) NSDictionary *encryptedPerFieldDynamicFieldParameters;

- (void).cxx_destruct;
- (void)_urlRequestWithBuilder:(id)a0 webService:(id)a1 completion:(id /* block */)a2;

@end
