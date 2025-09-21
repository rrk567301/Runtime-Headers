@class NSArray, NSString, NSDateInterval;

@interface HKSleepPeriodSegment : NSObject <HKRedactedDescription, NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy, nonatomic) NSArray *sampleIntervals;
@property (readonly, nonatomic) long long category;
@property (readonly, nonatomic) char containsAppleSleepTrackingData;
@property (readonly, copy) NSString *hk_redactedDescription;

+ (id)sleepPeriodSegmentWithDateInterval:(id)a0 category:(long long)a1;
+ (id)sleepPeriodSegmentWithDateInterval:(id)a0 sampleIntervals:(id)a1 category:(long long)a2;
+ (id)sleepPeriodSegmentWithDateInterval:(id)a0 sampleIntervals:(id)a1 category:(long long)a2 containsAppleSleepTrackingData:(char)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)mergingSleepPeriodSegment:(id)a0;

@end
