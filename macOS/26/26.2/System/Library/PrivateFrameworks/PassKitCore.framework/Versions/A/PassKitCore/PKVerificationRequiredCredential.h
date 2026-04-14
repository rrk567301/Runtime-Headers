@class PKSecureElementPass;

@interface PKVerificationRequiredCredential : PKPaymentCredential

@property (readonly, nonatomic) PKSecureElementPass *pass;

- (void).cxx_destruct;
- (id)detailDescriptionWithEnvironment:(unsigned long long)a0;
- (id)initWithPass:(id)a0;

@end
