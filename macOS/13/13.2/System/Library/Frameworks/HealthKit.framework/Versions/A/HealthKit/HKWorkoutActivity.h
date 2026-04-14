@class NSUUID, HKWorkoutConfiguration, NSDictionary, NSDate, NSArray, NSMutableDictionary;

@interface HKWorkoutActivity : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_statisticsPerType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=_startsPaused) BOOL startsPaused;
@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) HKWorkoutConfiguration *workoutConfiguration;
@property (readonly, copy) NSDate *startDate;
@property (readonly, copy) NSDate *endDate;
@property (readonly, copy) NSDictionary *metadata;
@property (readonly) double duration;
@property (readonly, copy) NSArray *workoutEvents;
@property (readonly, copy) NSDictionary *allStatistics;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_setUUID:(id)a0;
- (void)_setDuration:(double)a0;
- (id)_deepCopy;
- (void)_setMetadata:(id)a0;
- (void)_setEndDate:(id)a0;
- (id)statisticsForType:(id)a0;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (id)initWithWorkoutConfiguration:(id)a0 startDate:(id)a1 endDate:(id)a2 metadata:(id)a3;
- (id)_initWithUUID:(id)a0 workoutConfiguration:(id)a1 startDate:(id)a2 endDate:(id)a3 workoutEvents:(id)a4 startsPaused:(BOOL)a5 duration:(double)a6 metadata:(id)a7 statisticsPerType:(id)a8;
- (BOOL)_filterAndSetWorkoutEvents:(id)a0;
- (void)_enumerateActiveTimePeriods:(id /* block */)a0;
- (BOOL)unitTest_isEqualToActivity:(id)a0 includingStatistics:(BOOL)a1;
- (id)_statisticsPerType;
- (void)_setAllStatistics:(id)a0;
- (void)_setStatistics:(id)a0 forType:(id)a1;

@end
