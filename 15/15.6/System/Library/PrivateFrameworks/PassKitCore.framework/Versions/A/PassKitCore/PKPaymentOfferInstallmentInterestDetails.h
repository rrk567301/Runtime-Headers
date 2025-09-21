@class NSArray, PKCurrencyAmount;

@interface PKPaymentOfferInstallmentInterestDetails : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) PKCurrencyAmount *totalInterestAmount;
@property (readonly, copy, nonatomic) NSArray *interestItems;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;

@end
