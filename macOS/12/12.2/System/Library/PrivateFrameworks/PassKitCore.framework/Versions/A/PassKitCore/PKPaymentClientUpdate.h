@class NSArray, PKPaymentTokenConfiguration, NSString;

@interface PKPaymentClientUpdate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *paymentSummaryItems;
@property (readonly, nonatomic) NSArray *shippingMethods;
@property (readonly, nonatomic) PKPaymentTokenConfiguration *tokenConfiguration;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSString *selectedAID;
@property (readonly, nonatomic) unsigned long long selectedPaymentMethodType;

+ (id)paymentUpdateResponseWithProtobuf:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)protobuf;
- (id)initWithPaymentSummaryItems:(id)a0 shippingMethods:(id)a1 tokenConfiguration:(id)a2 status:(long long)a3 selectedAID:(id)a4 selectedPaymentMethodType:(unsigned long long)a5;

@end
