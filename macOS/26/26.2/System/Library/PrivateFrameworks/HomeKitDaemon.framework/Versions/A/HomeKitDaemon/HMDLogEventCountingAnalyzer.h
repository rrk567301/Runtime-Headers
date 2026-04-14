@class NSMutableDictionary, NSString, HMDEventCounterGroup, HMMDateProvider, HMDEventCountersManager;

@interface HMDLogEventCountingAnalyzer : HMDLogEventAnalyzer {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSMutableDictionary *currentPeriodCounters;
@property (readonly, nonatomic) HMMDateProvider *dateProvider;
@property (readonly, nonatomic) id /* block */ tickSecondsProviderBlock;
@property (readonly, nonatomic) id /* block */ periodicCountersSnapshotBlock;
@property (readonly) unsigned long long loggingPeriodicitySeconds;
@property (nonatomic) unsigned long long tickSecondsLastLogged;
@property (readonly, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) HMDEventCountersManager *countersManager;
@property (retain, nonatomic) HMDEventCounterGroup *currentDayCountersGroup;

- (void)observeEvent:(id)a0;
- (void).cxx_destruct;
- (void)incrementDailyCountersForEventName:(id)a0;
- (void)incrementPeriodicCountersForEventName:(id)a0;
- (id)initWithEventCountersManager:(id)a0 dateProvider:(id)a1 systemInfo:(id)a2;
- (id)initWithEventCountersManager:(id)a0 dateProvider:(id)a1 systemInfo:(id)a2 loggingPeriodicitySeconds:(unsigned long long)a3 tickSecondsProviderBlock:(id /* block */)a4 periodicCountersLoggingBlock:(id /* block */)a5;
- (void)observeEvent:(id)a0 withCurrentTickSeconds:(unsigned long long)a1;
- (id)periodicSnapshotAtCurrentTickSeconds:(unsigned long long)a0;

@end
