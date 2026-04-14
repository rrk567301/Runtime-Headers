@class NSDate;

@interface PKRecurringPaymentSummaryItem : PKPaymentSummaryItem <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL intervalUnitSpecified;
@property (readonly, nonatomic) BOOL intervalCountSpecified;
@property (copy, nonatomic) NSDate *startDate;
@property (nonatomic) unsigned long long intervalUnit;
@property (nonatomic) long long intervalCount;
@property (copy, nonatomic) NSDate *endDate;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToRecurringPaymentSummaryItem:(id)a0;

@end
