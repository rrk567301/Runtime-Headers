@class NSString, PKCurrencyAmount;

@interface PKPeerPaymentAccountResolutionControllerConfiguration : NSObject

@property (retain, nonatomic) PKCurrencyAmount *currencyAmount;
@property (nonatomic) unsigned long long registrationFlowState;
@property (copy, nonatomic) NSString *senderAddress;
@property (nonatomic) long long verificationContext;
@property (nonatomic, getter=isGraduation) char graduation;
@property (nonatomic) unsigned long long paymentMode;

- (id)description;
- (void).cxx_destruct;

@end
