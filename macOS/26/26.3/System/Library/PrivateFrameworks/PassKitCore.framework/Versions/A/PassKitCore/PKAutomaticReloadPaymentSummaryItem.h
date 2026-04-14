@class NSDecimalNumber;

@interface PKAutomaticReloadPaymentSummaryItem : PKPaymentSummaryItem <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDecimalNumber *thresholdAmount;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToAutomaticReloadPaymentSummaryItem:(id)a0;

@end
