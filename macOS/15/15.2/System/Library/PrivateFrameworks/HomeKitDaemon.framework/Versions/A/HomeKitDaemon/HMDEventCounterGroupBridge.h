@protocol HMMCounterGroup, HMMStatisticsGroup;

@interface HMDEventCounterGroupBridge : HMDEventCounterGroup {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) id<HMMCounterGroup> bridgedCounterGroup;
@property (readonly, nonatomic) id<HMMStatisticsGroup> bridgedStatisticsGroup;
@property (readonly, nonatomic) id /* block */ statisticsGroupBlock;
@property (readonly, nonatomic) id /* block */ queryDateBlock;

- (void).cxx_destruct;
- (unsigned long long)fetchMaxValueForStatisticsName:(id)a0;
- (unsigned long long)maxCounterName:(id *)a0;
- (void)addMaxValueObserver:(id)a0 forStatisticsName:(id)a1;
- (void)addObserver:(id)a0 forEventName:(id)a1;
- (void)addValue:(unsigned long long)a0 toStatisticsName:(id)a1;
- (double)durationForCounter:(id)a0;
- (double)durationForCounter:(id)a0 forDate:(id)a1;
- (id)eventCounters;
- (id)eventCountersForDate:(id)a0;
- (unsigned long long)fetchEventCounterForEventName:(id)a0;
- (unsigned long long)fetchEventCounterForEventName:(id)a0 forDate:(id)a1;
- (void)incrementEventCounterForEventName:(id)a0 withValue:(unsigned long long)a1;
- (id)initWithContext:(id)a0 bridgedCounterGroup:(id)a1 dateProvider:(id)a2 statisticsGroupBlock:(id /* block */)a3;
- (id)initWithContext:(id)a0 bridgedCounterGroup:(id)a1 groupDate:(id)a2 statisticsGroupBlock:(id /* block */)a3;
- (id)initWithContext:(id)a0 bridgedCounterGroup:(id)a1 queryDateBlock:(id /* block */)a2 statisticsGroupBlock:(id /* block */)a3;
- (void)pauseDurationCounter:(id)a0;
- (void)resetEventCounters;
- (void)resumeDurationCounter:(id)a0;
- (unsigned long long)summedEventCounters;
- (unsigned long long)summedEventCountersForDate:(id)a0;

@end
