@class PKPaymentMethod, PKContact, PKShippingMethod;

@interface PKPaymentHostUpdate : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) PKContact *shippingContact;
@property (readonly, nonatomic) PKShippingMethod *shippingMethod;
@property (readonly, nonatomic) PKPaymentMethod *paymentMethod;

+ (id)paymentUpdateWithProtobuf:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)protobuf;
- (id)initWithContact:(id)a0 shippingMethod:(id)a1 paymentMethod:(id)a2;

@end
