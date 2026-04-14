@class NSString, NSDecimalNumber;

@interface PKCreditAccountUserActivity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accountUserAltDSID;
@property (retain, nonatomic) NSDecimalNumber *purchases;
@property (retain, nonatomic) NSDecimalNumber *adjustedPurchases;
@property (retain, nonatomic) NSDecimalNumber *pendingPurchases;
@property (retain, nonatomic) NSDecimalNumber *rewardsBalance;
@property (retain, nonatomic) NSDecimalNumber *rewardsEarned;
@property (retain, nonatomic) NSDecimalNumber *rewardsRedeemed;
@property (readonly, nonatomic) NSDecimalNumber *totalSpending;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)remainingMonthlySpendWithLimit:(id)a0;
- (BOOL)isEqualToCreditAccountUserActivity:(id)a0;

@end
