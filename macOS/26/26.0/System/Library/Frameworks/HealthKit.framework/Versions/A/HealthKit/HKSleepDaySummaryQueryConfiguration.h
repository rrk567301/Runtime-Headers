@class HKSleepDaySummaryCacheSettings, NSCalendar;

@interface HKSleepDaySummaryQueryConfiguration : HKQueryServerConfiguration

@property (nonatomic) struct { long long start; long long duration; } morningIndexRange;
@property (nonatomic) BOOL ascending;
@property (nonatomic) long long limit;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) HKSleepDaySummaryCacheSettings *cacheSettings;
@property (copy, nonatomic) NSCalendar *calendarOverrides;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
