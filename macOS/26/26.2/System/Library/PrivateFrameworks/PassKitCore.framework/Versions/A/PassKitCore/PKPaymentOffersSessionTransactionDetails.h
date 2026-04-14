@class NSString, PKCurrencyAmount, NSDate;

@interface PKPaymentOffersSessionTransactionDetails : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *serviceIdentifier;
@property (copy, nonatomic) NSString *paymentHash;
@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSString *merchantName;
@property (retain, nonatomic) PKCurrencyAmount *currencyAmount;
@property (retain, nonatomic) NSString *transactionSourceIdentifier;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithTransaction:(id)a0;

@end
