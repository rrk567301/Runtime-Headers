@class NSDictionary;

@interface HMDEventCounterGroup : HMFObject {
    void /* unknown type, empty encoding */ bridgedGroup;
    void /* unknown type, empty encoding */ dateQueryBlock;
}

@property (nonatomic, weak) void /* function */ context;
@property (nonatomic, readonly) NSDictionary *eventCounters;
@property (nonatomic, readonly) long long summedEventCounters;

- (void)forceSave;
- (long long)maxCounterName:(id *)a0;
- (long long)fetchMaxValueForStatisticsName:(id)a0 forDate:(id)a1;
- (void)incrementEventCounterForEventName:(id)a0 withValue:(long long)a1;
- (void)pauseDurationCounter:(id)a0;
- (void)resumeDurationCounter:(id)a0;
- (void)addObserver:(id)a0 forEventName:(id)a1;
- (double)durationForCounter:(id)a0;
- (long long)fetchMaxValueForStatisticsName:(id)a0;
- (void).cxx_destruct;
- (void)resetEventCounters;
- (id)initWithContext:(id)a0 bridgedGroup:(id)a1 dateQueryBlock:(id /* block */)a2;
- (void)iterateCountersUsingBlock:(id /* block */)a0;
- (void)addMaxValueObserver:(id)a0 forStatisticsName:(id)a1;
- (long long)fetchEventCounterForEventName:(id)a0 forDate:(id)a1;
- (long long)summedEventCountersForDate:(id)a0;
- (id)init;
- (void)incrementEventCounterForEventName:(id)a0;
- (long long)fetchEventCounterForEventName:(id)a0;
- (id)eventCountersForDate:(id)a0;
- (double)durationForCounter:(id)a0 forDate:(id)a1;
- (void)addValue:(long long)a0 toStatisticsName:(id)a1;

@end
