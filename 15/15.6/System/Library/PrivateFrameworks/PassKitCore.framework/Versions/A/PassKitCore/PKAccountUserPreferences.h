@class NSDecimalNumber;

@interface PKAccountUserPreferences : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char spendingEnabled;
@property (nonatomic) char showAvailableCredit;
@property (nonatomic) char transactionSpendLimitEnabled;
@property (retain, nonatomic) NSDecimalNumber *transactionSpendLimitAmount;
@property (nonatomic) char monthlySpendLimitEnabled;
@property (retain, nonatomic) NSDecimalNumber *monthlySpendLimitAmount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithAccountUserPreferences:(id)a0;
- (char)isEqualToAccountUserPreferences:(id)a0;
- (id)jsonRepresentationForAccountUserAccessLevel:(unsigned long long)a0;

@end
