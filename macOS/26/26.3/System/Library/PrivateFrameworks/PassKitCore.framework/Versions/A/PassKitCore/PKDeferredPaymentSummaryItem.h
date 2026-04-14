@class NSDate;

@interface PKDeferredPaymentSummaryItem : PKPaymentSummaryItem <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *deferredDate;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToDeferredPaymentSummaryItem:(id)a0;

@end
