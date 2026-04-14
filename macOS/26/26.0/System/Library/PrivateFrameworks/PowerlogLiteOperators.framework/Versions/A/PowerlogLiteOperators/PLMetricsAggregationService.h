@class PLXPCListenerOperatorComposition, PLCFNotificationOperatorComposition, PLXPCResponderOperatorComposition;

@interface PLMetricsAggregationService : PLService

@property (retain) PLCFNotificationOperatorComposition *aggregateMetricsListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetricsForceListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetricsTodayListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetricsTodayForceListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetrics24hrsListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetrics24hrsForceListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetrics1hrListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetrics1hrForceListener;
@property (retain) PLXPCResponderOperatorComposition *metricSummarizationStateResponder;
@property (retain) PLXPCListenerOperatorComposition *metrickitClientAvailabilityListener;

+ (void)load;
+ (id)defaults;
+ (BOOL)metrickitClientsAvailable;

- (void)initOperatorDependancies;
- (id)init;
- (void).cxx_destruct;
- (void)createMetricsFile:(id)a0;
- (void)logEventNoneSessionsFile;
- (void)setupMetricsAggregation;
- (void)setupMetricsListeners;
- (void)toggleMetricsAggregation:(BOOL)a0;
- (void)updateMetricKitClientAvailabilityForUser:(id)a0 isAvailable:(id)a1;

@end
