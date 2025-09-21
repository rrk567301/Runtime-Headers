@interface HomeKitEvents.QueryMetricsObserver : NSObject <HMMLogEventObserver> {
    void /* unknown type, empty encoding */ pendingQueryLogEvents;
    void /* unknown type, empty encoding */ features;
    void /* unknown type, empty encoding */ logSubmitter;
    void /* unknown type, empty encoding */ logEventDispatcher;
}

- (id)init;
- (void)observeEvent:(id)a0;
- (void).cxx_destruct;

@end
