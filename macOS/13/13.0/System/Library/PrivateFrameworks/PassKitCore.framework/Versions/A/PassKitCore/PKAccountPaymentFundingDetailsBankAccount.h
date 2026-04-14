@class NSString;

@interface PKAccountPaymentFundingDetailsBankAccount : PKAccountPaymentFundingDetails <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *accountNumber;
@property (copy, nonatomic) NSString *routingNumber;
@property (copy, nonatomic) NSString *name;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)fundingDetailsUnencryptedDictionary;

@end
