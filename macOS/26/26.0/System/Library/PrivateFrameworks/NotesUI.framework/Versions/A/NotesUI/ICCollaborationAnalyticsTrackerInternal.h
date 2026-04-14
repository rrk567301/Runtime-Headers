@interface ICCollaborationAnalyticsTrackerInternal : NSObject {
    void /* unknown type, empty encoding */ trackedShareMetrics;
    void /* unknown type, empty encoding */ trackedShareMetricsObservers;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ shareAnalyticsQueue;
}

- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)saveActivityType:(id)a0 isCollaborationSelected:(BOOL)a1 error:(id)a2 completed:(BOOL)a3 forNote:(id)a4;
- (void)saveNewShare:(id)a0 forNote:(id)a1;
- (void)trackShare:(id)a0 forNote:(id)a1;
- (void)unshareNote:(id)a0;

@end
