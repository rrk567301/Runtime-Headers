@class NSArray;

@interface PKPayLaterFinancingPlanScheduleSummary : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *installments;
@property (copy, nonatomic) NSArray *payments;
@property (nonatomic) unsigned long long scheduleSummaryReason;

+ (id)totalPaidForInstallments:(id)a0 fallbackAmount:(id)a1;
+ (id)totalDueForInstallments:(id)a0 fallbackAmount:(id)a1;
+ (id)totalAmountForInstallments:(id)a0 fallbackAmount:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)lastPayment;
- (id)paymentsOfType:(unsigned long long)a0;
- (id)paymentsWithIdentifier:(id)a0;
- (long long)countOfInstallmentsAffectedByPaymentIdentifier:(id)a0;
- (id)installmentsAffectedByPaymentIdentifier:(id)a0;
- (BOOL)paymentIdentifierDidPayoffFinancingPlan:(id)a0;
- (id)firstInstallmentIdentifierAffectedByPaymentIdentifier:(id)a0;
- (id)currencyAmountOfPaymentIdentifierAffectingOtherInstallments:(id)a0 relativeInstallmentIdentifier:(id)a1 installmentsAreInOrder:(BOOL *)a2 countOfInstallments:(long long *)a3;
- (id)nextDueInstallment;
- (long long)installmentNumberForInstallmentIdentifier:(id)a0;
- (id)relevantInstallmentsFromStartDate:(id)a0 endDate:(id)a1;
- (BOOL)isEqualToPayLaterScheduleSummary:(id)a0;

@end
