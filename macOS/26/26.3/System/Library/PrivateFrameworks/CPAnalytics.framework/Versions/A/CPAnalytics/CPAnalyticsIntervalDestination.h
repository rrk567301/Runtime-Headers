@class NSSet;

@interface CPAnalyticsIntervalDestination : CPAnalyticsDashboardDestination

@property (retain, nonatomic) NSSet *trackedIntervalNames;
@property (retain, nonatomic) NSSet *ignoredIntervalNames;

- (void)updateWithConfig:(id)a0;
- (id)initWithConfig:(id)a0 cpAnalyticsInstance:(id)a1;
- (void)sendDashboardIntervalEventForEvent:(id)a0;
- (void)processEvent:(id)a0;
- (void)_handleEvent:(id)a0 withUnknownIntervalName:(id)a1;
- (void).cxx_destruct;
- (id)_intervalNamesForKey:(id)a0 inConfiguration:(id)a1;

@end
