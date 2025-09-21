@class NSString, NSDecimalNumber, PKCurrencyAmount;

@interface PKTransactionReceiptSummaryItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) PKCurrencyAmount *currencyAmount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 bundle:(id)a1;
- (char)isEqualToTransactionReceiptSummaryItem:(id)a0;

@end
