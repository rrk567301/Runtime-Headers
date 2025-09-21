@class NSDecimalNumber, NSSet, NSDate;

@interface PKCreditAccountMergeSummary : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSDate *mergeDate;
@property (retain, nonatomic) NSDecimalNumber *totalBalance;
@property (copy, nonatomic) NSSet *accountDetails;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)accountDetailsForAccountIdentifier:(id)a0;
- (id)accountDetailsForAltDSID:(id)a0;
- (char)isEqualToCreditAccountMergeSummary:(id)a0;

@end
