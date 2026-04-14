@class PLMonotonicTimer;

@interface PLActivityCriterionTime : PLActivityCriterion

@property double interval;
@property (nonatomic) double rescheduleDelay;
@property (retain) PLMonotonicTimer *timer;

+ (id)timeCriterionWithInterval:(double)a0;
+ (double)minTimeInterval;

- (void)didEnableActivity:(id)a0;
- (id)description;
- (void)didDisableActivity:(id)a0;
- (void)didCompleteActivity:(id)a0;
- (void).cxx_destruct;
- (void)didInterruptActivity:(id)a0;
- (void)dealloc;
- (id)initWithInterval:(double)a0;

@end
