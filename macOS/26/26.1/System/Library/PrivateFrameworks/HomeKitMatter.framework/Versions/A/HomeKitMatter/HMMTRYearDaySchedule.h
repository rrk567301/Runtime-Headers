@class NSNumber;

@interface HMMTRYearDaySchedule : NSObject <HMMTRSchedule, NSCopying>

@property (copy, nonatomic) NSNumber *startTime;
@property (copy, nonatomic) NSNumber *endTime;
@property (copy, nonatomic) NSNumber *status;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithStartTime:(id)a0 endTime:(id)a1 withTimeZone:(id)a2;
- (id)convertToMTRScheduleAtScheduleIndex:(long long)a0 forUserAtUserIndex:(long long)a1;
- (id)initWithMTRSchedule:(id)a0;
- (id)initWithStartTime:(id)a0 endTime:(id)a1 status:(id)a2;

@end
