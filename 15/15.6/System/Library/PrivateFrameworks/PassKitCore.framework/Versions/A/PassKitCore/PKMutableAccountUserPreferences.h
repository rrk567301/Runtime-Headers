@class NSDecimalNumber;

@interface PKMutableAccountUserPreferences : PKAccountUserPreferences

@property (nonatomic) char spendingEnabled;
@property (nonatomic) char showAvailableCredit;
@property (nonatomic) char transactionSpendLimitEnabled;
@property (retain, nonatomic) NSDecimalNumber *transactionSpendLimitAmount;
@property (nonatomic) char monthlySpendLimitEnabled;
@property (retain, nonatomic) NSDecimalNumber *monthlySpendLimitAmount;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
