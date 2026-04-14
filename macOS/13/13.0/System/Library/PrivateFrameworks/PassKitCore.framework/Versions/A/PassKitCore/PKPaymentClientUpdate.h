@class NSArray, PKRecurringPaymentRequest, PKAutomaticReloadPaymentRequest, NSString, PKShippingMethods;

@interface PKPaymentClientUpdate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *paymentSummaryItems;
@property (readonly, copy, nonatomic) PKShippingMethods *shippingMethods;
@property (readonly, copy, nonatomic) NSArray *multiTokenContexts;
@property (readonly, nonatomic) PKRecurringPaymentRequest *recurringPaymentRequest;
@property (readonly, nonatomic) PKAutomaticReloadPaymentRequest *automaticReloadPaymentRequest;
@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) NSString *selectedAID;
@property (readonly, nonatomic) unsigned long long selectedPaymentMethodType;

+ (id)paymentUpdateResponseWithProtobuf:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)protobuf;
- (id)initWithPaymentSummaryItems:(id)a0 shippingMethods:(id)a1 multiTokenContexts:(id)a2 recurringPaymentRequest:(id)a3 automaticReloadPaymentRequest:(id)a4 status:(long long)a5 selectedAID:(id)a6 selectedPaymentMethodType:(unsigned long long)a7;

@end
