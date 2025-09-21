@class HKSleepDaySummaryCacheSettings, NSCalendar;

@interface HKSleepDaySummaryQueryConfiguration : HKQueryServerConfiguration

@property (nonatomic) struct { long long start; long long duration; } morningIndexRange;
@property (nonatomic) char ascending;
@property (nonatomic) long long limit;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) HKSleepDaySummaryCacheSettings *cacheSettings;
@property (copy, nonatomic) NSCalendar *calendarOverrides;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
