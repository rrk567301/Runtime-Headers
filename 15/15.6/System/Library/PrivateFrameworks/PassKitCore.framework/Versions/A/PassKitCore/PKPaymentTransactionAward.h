@class NSString, PKTransactionAmount, NSDate;

@interface PKPaymentTransactionAward : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *typeString;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *subtype;
@property (nonatomic) long long order;
@property (copy, nonatomic) PKTransactionAmount *amount;
@property (copy, nonatomic) NSString *localizedAmount;
@property (copy, nonatomic) NSString *awardDescription;
@property (copy, nonatomic) NSString *relevantAccountName;
@property (nonatomic) char hasDeepLink;
@property (copy, nonatomic) NSDate *claimExpiryDate;
@property (nonatomic) char claimExpired;
@property (copy, nonatomic) NSDate *redeemExpiryDate;
@property (nonatomic) char redeemExpired;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)formattedStringValue;
- (char)isEqualToPaymentTransactionAward:(id)a0;

@end
