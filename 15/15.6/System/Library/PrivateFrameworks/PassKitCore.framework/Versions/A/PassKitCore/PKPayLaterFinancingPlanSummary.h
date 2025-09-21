@class NSDecimalNumber, NSString, NSDate, PKCurrencyAmount;

@interface PKPayLaterFinancingPlanSummary : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSDecimalNumber *apr;
@property (nonatomic) char hasAPR;
@property (nonatomic) long long daysPastDue;
@property (copy, nonatomic) PKCurrencyAmount *pastDueAmount;
@property (nonatomic) unsigned long long installmentCount;
@property (copy, nonatomic) PKCurrencyAmount *totalAmount;
@property (copy, nonatomic) PKCurrencyAmount *initialAmount;
@property (copy, nonatomic) PKCurrencyAmount *currentBalance;
@property (copy, nonatomic) PKCurrencyAmount *installmentAmount;
@property (copy, nonatomic) PKCurrencyAmount *totalAdjustments;
@property (copy, nonatomic) PKCurrencyAmount *totalPrincipal;
@property (copy, nonatomic) PKCurrencyAmount *paymentAmountToDate;
@property (copy, nonatomic) PKCurrencyAmount *totalInterest;
@property (copy, nonatomic) PKCurrencyAmount *principalPaidToDate;
@property (copy, nonatomic) PKCurrencyAmount *interestPaidToDate;
@property (copy, nonatomic) PKCurrencyAmount *payoffAmount;
@property (copy, nonatomic) NSDate *transactionDate;
@property (copy, nonatomic) NSDate *startInstallmentDate;
@property (copy, nonatomic) NSDate *nextInstallmentDueDate;
@property (copy, nonatomic) NSDate *endInstallmentDate;
@property (copy, nonatomic) NSDate *cancellationDate;
@property (nonatomic) unsigned long long cancellationReason;
@property (copy, nonatomic) NSString *panSuffix;
@property (readonly, nonatomic) double progress;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)isEqualToPayLaterFinancingPlanSummary:(id)a0;
- (char)isNextInstallmentPastDue;

@end
