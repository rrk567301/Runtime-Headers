@class NSDecimalNumber, NSString;

@interface PKPaymentInstallmentItem : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long installmentItemType;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSString *currencyCode;
@property (copy, nonatomic) NSString *programIdentifier;
@property (copy, nonatomic) NSDecimalNumber *apr;
@property (copy, nonatomic) NSString *programTerms;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToInstallmentItem:(id)a0;

@end
