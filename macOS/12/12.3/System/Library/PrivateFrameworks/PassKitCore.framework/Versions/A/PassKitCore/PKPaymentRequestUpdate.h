@class NSArray, PKShippingMethods;

@interface PKPaymentRequestUpdate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *contentItems;
@property (copy, nonatomic) PKShippingMethods *availableShippingMethods;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSArray *paymentSummaryItems;
@property (copy, nonatomic) NSArray *shippingMethods;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPaymentSummaryItems:(id)a0;

@end
