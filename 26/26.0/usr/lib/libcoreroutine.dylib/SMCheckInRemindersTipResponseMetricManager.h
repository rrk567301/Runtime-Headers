@class RTDefaultsManager, NSString;

@interface SMCheckInRemindersTipResponseMetricManager : RTMetric <RTMetricProtocol>

@property (retain) RTDefaultsManager *defaultsManager;
@property (readonly) long long mostRecentResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct { char *x0; })event;
+ (id)supportedMetricKeys;

- (id)init;
- (void)startMetricsCollection;
- (void).cxx_destruct;
- (void)resetMetrics;
- (BOOL)submitMetricsWithError:(id *)a0;
- (void)updateTipResponse:(long long)a0;

@end
