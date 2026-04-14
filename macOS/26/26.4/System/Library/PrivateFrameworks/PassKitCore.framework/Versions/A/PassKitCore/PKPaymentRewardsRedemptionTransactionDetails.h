@class NSString, PKCurrencyAmount, NSDate, NSNumber;

@interface PKPaymentRewardsRedemptionTransactionDetails : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) PKCurrencyAmount *monetaryValue;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSNumber *merchantCategoryCode;
@property (copy, nonatomic) NSString *merchantRawName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)redactedDescription;
- (id)initWithCoder:(id)a0;

@end
