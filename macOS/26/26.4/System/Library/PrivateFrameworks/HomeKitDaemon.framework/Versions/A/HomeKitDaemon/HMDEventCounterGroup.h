@class NSDictionary;

@interface HMDEventCounterGroup : HMFObject {
    void /* unknown type, empty encoding */ bridgedGroup;
    void /* unknown type, empty encoding */ dateQueryBlock;
}

@property (nonatomic, weak) void /* function */ context;
@property (nonatomic, readonly) NSDictionary *eventCounters;
@property (nonatomic, readonly) long long summedEventCounters;

- (void)resetEventCounters;
- (id)initWithContext:(id)a0 swiftParameters:(id)a1;
- (id)eventCountersForDate:(id)a0;
- (long long)fetchEventCounterForEventName:(id)a0;
- (void)resumeDurationCounter:(id)a0;
- (long long)maxCounterName:(id *)a0;
- (void)addMaxValueObserver:(id)a0 forStatisticsName:(id)a1;
- (long long)summedEventCountersForDate:(id)a0;
- (long long)fetchMaxValueForStatisticsName:(id)a0 forDate:(id)a1;
- (double)durationForCounter:(id)a0 forDate:(id)a1;
- (long long)fetchMaxValueForStatisticsName:(id)a0;
- (void)iterateCountersUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0 forEventName:(id)a1;
- (void)incrementEventCounterForEventName:(id)a0 withValue:(long long)a1;
- (long long)fetchEventCounterForEventName:(id)a0 forDate:(id)a1;
- (id)init;
- (void)pauseDurationCounter:(id)a0;
- (void)addValue:(long long)a0 toStatisticsName:(id)a1;
- (double)durationForCounter:(id)a0;
- (void)forceSave;
- (void)incrementEventCounterForEventName:(id)a0;

@end
