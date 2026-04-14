@class NSString, PKPaymentCredential;

@interface PKPaymentRequirementsRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *passOwnershipToken;
@property (retain, nonatomic) NSString *region;
@property (retain, nonatomic) PKPaymentCredential *paymentCredential;
@property (copy, nonatomic) NSString *cardholderName;
@property (copy, nonatomic) NSString *primaryAccountNumber;
@property (copy, nonatomic) NSString *referrerIdentifier;
@property (nonatomic) BOOL sendReducedDeviceData;

- (void).cxx_destruct;
- (id)_cardDictionary;
- (void)_deviceScoreWithCompletion:(id /* block */)a0;
- (void)_secureCardDictionaryWithBuilder:(id)a0 includingDeviceScore:(BOOL)a1 completion:(id /* block */)a2;
- (void)_urlRequestWithBuilder:(id)a0 webService:(id)a1 completion:(id /* block */)a2;
- (id)initWithCardholderName:(id)a0 primaryAccountNumber:(id)a1;
- (id)initWithPaymentCredential:(id)a0;

@end
