@interface HomeKitMetrics.ProcessMemoryEventAnalyzer : NSObject <HMMLogEventObserver, HMMDailyTaskRunner, HMFMemoryObserver> {
    void /* unknown type, empty encoding */ counterGroup;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ memoryTracker;
    void /* unknown type, empty encoding */ memoryEventMonitor;
    void /* unknown type, empty encoding */ options;
}

- (void)memoryMonitor:(id)a0 didReceiveMemoryEvent:(long long)a1;
- (void)runDailyTask;
- (id)init;
- (void)observeEvent:(id)a0;
- (void).cxx_destruct;

@end
