@class NSDecimalNumber, NSSet, PKCreditAccountMergeSummary, NSDate, PKCreditAccountBalanceSummary, PKCreditAccountStatement;

@interface PKCreditAccountSummary : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSDecimalNumber *creditLimit;
@property (copy, nonatomic) NSDecimalNumber *availableCredit;
@property (copy, nonatomic) NSDecimalNumber *currentBalance;
@property (copy, nonatomic) NSDecimalNumber *adjustedBalance;
@property (copy, nonatomic) NSDecimalNumber *rewardsBalance;
@property (copy, nonatomic) NSDecimalNumber *remainingStatementBalance;
@property (copy, nonatomic) NSDecimalNumber *remainingStatementBalanceForInterestCalculation;
@property (copy, nonatomic) NSDecimalNumber *remainingMinimumPayment;
@property (copy, nonatomic) NSDecimalNumber *remainingMinimumPaymentExcludedFromInterestCalculation;
@property (copy, nonatomic) NSDecimalNumber *installmentBalance;
@property (copy, nonatomic) NSDate *paymentDueDate;
@property (copy, nonatomic) NSDate *lastPaymentDate;
@property (nonatomic) char autoPayEnabled;
@property (nonatomic) unsigned long long balanceStatus;
@property (retain, nonatomic) PKCreditAccountBalanceSummary *balanceSummary;
@property (copy, nonatomic) NSSet *accountUserActivity;
@property (retain, nonatomic) PKCreditAccountMergeSummary *mergeSummary;
@property (nonatomic) long long cyclesPastDue;
@property (copy, nonatomic) NSDecimalNumber *unpostedInterest;
@property (copy, nonatomic) NSDate *unpostedInterestTimestamp;
@property (nonatomic) char requiresDebtCollectionNotices;
@property (nonatomic) char inGrace;
@property (copy, nonatomic) NSDecimalNumber *chargeOffPreventionAmount;
@property (copy, nonatomic) NSDecimalNumber *pastDueAmount;
@property (nonatomic) char recoveryPaymentPlansSupported;
@property (retain, nonatomic) PKCreditAccountStatement *currentStatement;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)accountUserActivityForAccountUserAltDSID:(id)a0;
- (void)ingestExtendedAccountDetails:(id)a0;
- (id)redeemableRewardsBalanceForUser:(id)a0;

@end
