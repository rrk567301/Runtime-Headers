@class NSString, NSURL;

@interface PKCreditAccountDebtSaleSummary : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *buyerName;
@property (copy, nonatomic) NSString *buyerPhone;
@property (copy, nonatomic) NSURL *buyerURL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToCreditAccountDebtSaleSummary:(id)a0;

@end
