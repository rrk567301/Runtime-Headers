@class NSDecimalNumber, NSArray, NSURL;

@interface PKAppleBalanceDirectTopUpConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDecimalNumber *minAmount;
@property (copy, nonatomic) NSDecimalNumber *maxAmount;
@property (copy, nonatomic) NSDecimalNumber *maxBalance;
@property (copy, nonatomic) NSArray *denominations;
@property (copy, nonatomic) NSURL *termsURL;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)displayableDenominations;
- (id)initWithAMSResponseDictionary:(id)a0;

@end
