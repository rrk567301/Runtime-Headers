@class NSArray, NSString, NSDateInterval;

@interface HKSleepPeriod : NSObject <HKRedactedDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy, nonatomic) NSArray *segments;
@property (readonly, nonatomic) BOOL containsSegmentsWithAppleSleepTrackingData;
@property (readonly, nonatomic) BOOL isIncomplete;
@property (readonly, copy, nonatomic) NSString *timezoneName;
@property (readonly, copy) NSString *hk_redactedDescription;

+ (id)sleepPeriodWithDateInterval:(id)a0 segments:(id)a1 isIncomplete:(BOOL)a2 timezoneName:(id)a3;
+ (BOOL)_isSleepDayInterval:(id)a0 bestFitForSampleInterval:(id)a1 consideringInterval:(id)a2;
+ (id)sleepPeriodWithDateInterval:(id)a0 segments:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (double)durationForCategory:(long long)a0 bestFittingSleepDayInterval:(id)a1 consideringInterval:(id)a2;
- (double)durationForCategory:(long long)a0 overlappingDateInterval:(id)a1;

@end
