@class NSString, PKCurrencyAmount, NSDate, NSNumber;

@interface PKPaymentRewardsRedemptionTransactionDetails : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) PKCurrencyAmount *monetaryValue;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSNumber *merchantCategoryCode;
@property (copy, nonatomic) NSString *merchantRawName;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;

@end
