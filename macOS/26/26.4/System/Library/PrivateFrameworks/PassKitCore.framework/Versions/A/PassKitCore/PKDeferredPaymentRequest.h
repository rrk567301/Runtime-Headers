@class NSTimeZone, NSString, NSURL, NSDate, PKDeferredPaymentSummaryItem;

@interface PKDeferredPaymentRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *paymentDescription;
@property (retain, nonatomic) PKDeferredPaymentSummaryItem *deferredBilling;
@property (copy, nonatomic) NSString *billingAgreement;
@property (retain, nonatomic) NSURL *managementURL;
@property (retain, nonatomic) NSURL *tokenNotificationURL;
@property (retain, nonatomic) NSDate *freeCancellationDate;
@property (retain, nonatomic) NSTimeZone *freeCancellationDateTimeZone;

+ (id)deferredPaymentRequestWithProtobuf:(id)a0;

- (id)protobuf;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithPaymentDescription:(id)a0 deferredBilling:(id)a1 managementURL:(id)a2;
- (BOOL)isEqualToDeferredPaymentRequest:(id)a0;
- (void)sanitize;

@end
