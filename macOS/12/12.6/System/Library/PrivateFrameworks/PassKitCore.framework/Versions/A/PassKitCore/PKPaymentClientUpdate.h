@class NSArray, PKShippingMethods, NSString;

@interface PKPaymentClientUpdate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *paymentSummaryItems;
@property (readonly, copy, nonatomic) PKShippingMethods *shippingMethods;
@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) NSString *selectedAID;
@property (readonly, nonatomic) unsigned long long selectedPaymentMethodType;

+ (id)paymentUpdateResponseWithProtobuf:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)protobuf;
- (id)initWithPaymentSummaryItems:(id)a0 shippingMethods:(id)a1 status:(long long)a2 selectedAID:(id)a3 selectedPaymentMethodType:(unsigned long long)a4;

@end
