@class NSDictionary;

@interface HMDEventCounterGroupBridge : HMDEventCounterGroup {
    void /* unknown type, empty encoding */ bridgedGroup;
    void /* function */ dateQueryBlock;
}

@property (nonatomic, readonly) id /* block */ dateQueryBlock;
@property (nonatomic, readonly) NSDictionary *eventCounters;
@property (nonatomic, readonly) long long summedEventCounters;

- (long long)fetchMaxValueForStatisticsName:(id)a0;
- (void)iterateCountersUsingBlock:(id /* block */)a0;
- (void)incrementEventCounterForEventName:(id)a0 withValue:(long long)a1;
- (double)durationForCounter:(id)a0;
- (void)addMaxValueObserver:(id)a0 forStatisticsName:(id)a1;
- (void)pauseDurationCounter:(id)a0;
- (void)addObserver:(id)a0 forEventName:(id)a1;
- (long long)summedEventCountersForDate:(id)a0;
- (id)eventCountersForDate:(id)a0;
- (id)initWithContext:(id)a0 serializedEventCounters:(id)a1 uptimeProvider:(id)a2;
- (void)resetEventCounters;
- (void).cxx_destruct;
- (double)durationForCounter:(id)a0 forDate:(id)a1;
- (long long)fetchEventCounterForEventName:(id)a0;
- (long long)fetchEventCounterForEventName:(id)a0 forDate:(id)a1;
- (void)addValue:(long long)a0 toStatisticsName:(id)a1;
- (void)resumeDurationCounter:(id)a0;

@end
