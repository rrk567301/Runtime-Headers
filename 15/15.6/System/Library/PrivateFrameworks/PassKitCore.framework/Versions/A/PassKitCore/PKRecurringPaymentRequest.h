@class NSString, PKRecurringPaymentSummaryItem, NSURL;

@interface PKRecurringPaymentRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *paymentDescription;
@property (retain, nonatomic) PKRecurringPaymentSummaryItem *regularBilling;
@property (retain, nonatomic) PKRecurringPaymentSummaryItem *trialBilling;
@property (copy, nonatomic) NSString *billingAgreement;
@property (retain, nonatomic) NSURL *managementURL;
@property (retain, nonatomic) NSURL *tokenNotificationURL;

+ (long long)version;
+ (id)recurringPaymentRequestWithProtobuf:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)dictionaryRepresentation;
- (id)protobuf;
- (id)initWithPaymentDescription:(id)a0 regularBilling:(id)a1 managementURL:(id)a2;
- (char)isEqualToRecurringPaymentRequest:(id)a0;
- (void)sanitize;

@end
