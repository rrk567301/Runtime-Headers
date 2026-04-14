@class NSArray;

@interface PKPaymentRequestShippingContactUpdate : PKPaymentRequestUpdate <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *shippingMethods;
@property (copy, nonatomic) NSArray *errors;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPaymentSummaryItems:(id)a0;
- (id)initWithErrors:(id)a0 paymentSummaryItems:(id)a1 shippingMethods:(id)a2;

@end
