@class NSArray;

@interface PKPaymentRequestCouponCodeUpdate : PKPaymentRequestUpdate <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *errors;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithErrors:(id)a0 paymentSummaryItems:(id)a1 shippingMethods:(id)a2;
- (id)initWithPaymentSummaryItems:(id)a0;

@end
