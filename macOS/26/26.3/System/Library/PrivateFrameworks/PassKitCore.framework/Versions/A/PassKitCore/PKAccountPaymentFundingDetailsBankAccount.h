@class NSString, PKAccountFundingSourceVerification;

@interface PKAccountPaymentFundingDetailsBankAccount : PKAccountPaymentFundingDetails <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *accountNumber;
@property (copy, nonatomic) NSString *routingNumber;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) PKAccountFundingSourceVerification *verificationDetails;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)fundingDetailsUnencryptedDictionary;

@end
