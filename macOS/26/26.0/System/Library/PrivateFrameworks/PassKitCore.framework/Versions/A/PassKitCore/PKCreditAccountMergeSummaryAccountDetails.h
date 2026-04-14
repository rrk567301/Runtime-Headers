@class NSString, NSDecimalNumber;

@interface PKCreditAccountMergeSummaryAccountDetails : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *ownerAltDSID;
@property (retain, nonatomic) NSDecimalNumber *statementBalance;
@property (retain, nonatomic) NSDecimalNumber *currentBalance;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToCreditAccountMergeSummaryAccountDetails:(id)a0;

@end
