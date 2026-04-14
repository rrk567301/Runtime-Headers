@class NSTimeZone, NSDate;

@interface PKPaymentDateDataItem : PKPaymentDataItem

@property (retain, nonatomic) NSDate *paymentDate;
@property (retain, nonatomic) NSTimeZone *paymentTimeZone;
@property (nonatomic) long long paymentFrequency;

+ (long long)dataType;

- (BOOL)isValidWithError:(id *)a0;
- (id)initWithModel:(id)a0;
- (long long)context;
- (void).cxx_destruct;

@end
