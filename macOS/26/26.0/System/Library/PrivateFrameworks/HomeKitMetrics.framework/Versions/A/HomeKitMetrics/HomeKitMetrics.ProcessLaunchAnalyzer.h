@interface HomeKitMetrics.ProcessLaunchAnalyzer : NSObject <HMMLogEventObserver, HMMDailyTaskRunner> {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ counterGroup;
    void /* unknown type, empty encoding */ lastExitContextBlock;
}

- (void)runDailyTask;
- (id)init;
- (void)observeEvent:(id)a0;
- (void).cxx_destruct;

@end
