@class PKPaymentApplication, PKPaymentPass;

@interface PKPayLaterPassPaymentSource : PKPayLaterPaymentSource <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKPaymentPass *paymentPass;
@property (readonly, nonatomic) PKPaymentApplication *paymentApplication;

- (id)name;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)identifier;
- (id)initWithPaymentPass:(id)a0 paymentApplication:(id)a1;

@end
