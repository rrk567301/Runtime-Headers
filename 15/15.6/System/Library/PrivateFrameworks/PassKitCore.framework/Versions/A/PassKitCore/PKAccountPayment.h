@class PKAccountPaymentScheduleDetails, NSString, PKAccountPaymentFundingSource, NSDate, PKCurrencyAmount;

@interface PKAccountPayment : NSObject <NSSecureCoding, PKRecordObject>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *referenceIdentifier;
@property (copy, nonatomic) NSString *clientReferenceIdentifier;
@property (retain, nonatomic) PKCurrencyAmount *currencyAmount;
@property (copy, nonatomic) NSDate *paymentDate;
@property (copy, nonatomic) NSDate *paymentStatusDate;
@property (copy, nonatomic) NSDate *expectedCreditReleaseDate;
@property (nonatomic) char cancellable;
@property (copy, nonatomic) NSDate *cancellationExpiryDate;
@property (nonatomic) long long state;
@property (nonatomic) long long statusCode;
@property (retain, nonatomic) PKAccountPaymentFundingSource *fundingSource;
@property (retain, nonatomic) PKAccountPaymentScheduleDetails *scheduleDetails;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recordType;
+ (id)recordNamePrefix;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRecord:(id)a0;
- (char)willSkipFirstPaymentForAccount:(id)a0;
- (void)encodeWithRecord:(id)a0;
- (id)initWithDictionary:(id)a0 productTimeZone:(id)a1;
- (char)isBeforeNextCycleForAccount:(id)a0;
- (char)isCurrentlyCancellable;
- (char)isOnHoldForAccount:(id)a0;
- (char)isRecurring;

@end
