@class NSNumber, NSDateComponents;

@interface HKSleepSchedule : HKSample <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, setter=_setWeekdays:) unsigned long long weekdays;
@property (copy, nonatomic, setter=_setWakeTimeComponents:) NSDateComponents *wakeTimeComponents;
@property (copy, nonatomic, setter=_setBedTimeComponents:) NSDateComponents *bedTimeComponents;
@property (copy, nonatomic, setter=_setOverrideDayIndex:) NSNumber *overrideDayIndex;

+ (char)_isConcreteObjectClass;
+ (id)_sleepScheduleWithDate:(id)a0 weekdays:(unsigned long long)a1 wakeTimeComponents:(id)a2 bedTimeComponents:(id)a3 overrideDayIndex:(id)a4 device:(id)a5 metadata:(id)a6 config:(id /* block */)a7;
+ (id)sleepScheduleWithDate:(id)a0 weekdays:(unsigned long long)a1 wakeTimeComponents:(id)a2 bedTimeComponents:(id)a3 overrideDayIndex:(id)a4 device:(id)a5 metadata:(id)a6;
+ (char)supportsEquivalence;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEquivalent:(id)a0;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned long long x1; })a0;
- (id)bedtimeDateIntervalForMorningIndex:(long long)a0 calendar:(id)a1;
- (id)bedtimeDateIntervalForWakeTime:(id)a0 calendar:(id)a1;
- (char)hasEquivalentOverrideDayToSleepSchedule:(id)a0;
- (char)hasEquivalentTimesToSleepSchedule:(id)a0;
- (id)wakeDateComponentsForMorningIndex:(long long)a0 calendar:(id)a1;

@end
