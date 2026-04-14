@class PKPaymentPass, NSString, NSArray, NSData;

@interface PKPaymentSubmitActivationCodeRequest : PKPaymentWebServiceRequest

@property (retain, nonatomic) PKPaymentPass *pass;
@property (copy, nonatomic) NSString *verificationCode;
@property (copy, nonatomic) NSData *verificationData;
@property (retain, nonatomic) NSArray *entries;

- (void).cxx_destruct;
- (id)_urlRequestWithBuilder:(id)a0;

@end
