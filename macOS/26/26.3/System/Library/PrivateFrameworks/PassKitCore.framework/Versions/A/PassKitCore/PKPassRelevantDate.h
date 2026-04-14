@class NSDateInterval, NSDate;

@interface PKPassRelevantDate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *effectiveStartDate;
@property (readonly, copy, nonatomic) NSDate *effectiveEndDate;
@property (copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSDateInterval *interval;

+ (id)findDateFromDates:(id)a0 option:(unsigned long long)a1;

- (id)latestDate;
- (id)earliestDate;
- (id)_init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isEqualToRelevancyDate:(id)a0;
- (id)initWithEffectiveStartDate:(id)a0 effectiveEndDate:(id)a1;
- (id)initWithRelevantDate:(id)a0;
- (id)relevantDateWithPriority:(unsigned long long)a0;

@end
