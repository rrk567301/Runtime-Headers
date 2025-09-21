@class NSDate;

@interface PKRecurringPaymentSummaryItem : PKPaymentSummaryItem <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char intervalUnitSpecified;
@property (readonly, nonatomic) char intervalCountSpecified;
@property (copy, nonatomic) NSDate *startDate;
@property (nonatomic) unsigned long long intervalUnit;
@property (nonatomic) long long intervalCount;
@property (copy, nonatomic) NSDate *endDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)dictionaryRepresentation;
- (char)isEqualToRecurringPaymentSummaryItem:(id)a0;

@end
