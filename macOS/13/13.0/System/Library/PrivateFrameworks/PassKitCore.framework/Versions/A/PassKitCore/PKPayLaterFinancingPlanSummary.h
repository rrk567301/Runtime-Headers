@class NSDecimalNumber, NSString, PKCurrencyAmount, NSDate;

@interface PKPayLaterFinancingPlanSummary : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDecimalNumber *apr;
@property (nonatomic) BOOL hasAPR;
@property (copy, nonatomic) NSDate *pastDueStartDate;
@property (copy, nonatomic) PKCurrencyAmount *pastDueAmount;
@property (nonatomic) unsigned long long installmentCount;
@property (copy, nonatomic) PKCurrencyAmount *totalAmount;
@property (copy, nonatomic) PKCurrencyAmount *currentBalance;
@property (copy, nonatomic) PKCurrencyAmount *installmentAmount;
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
@property (copy, nonatomic) NSString *panSuffix;
@property (readonly, nonatomic) double progress;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqualToPayLaterFinancingPlanSummary:(id)a0;
- (BOOL)isNextInstallmentPastDue;

@end
