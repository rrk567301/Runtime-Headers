@class NSString, AMSMetricsDatabaseDataSource, AMSBagKeySet, NSDate, NSObject;
@protocol AMSMetricsFlushStrategy, AMSMetricsBagContract, AMSBagProtocol, OS_dispatch_queue;

@interface AMSMetrics : NSObject <AMSBagConsumer>

@property (class, readonly) NSObject<OS_dispatch_queue> *sharedTimerQueue;
@property (class, readonly) BOOL appAnalyticsAllowed;
@property (class, readonly) BOOL diagnosticsSubmissionAllowed;
@property (class) BOOL disableBackgroundMetrics;
@property (class) BOOL flushDelayEnabled;
@property (class) BOOL flushTimerEnabled;
@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (retain) NSObject<OS_dispatch_queue> *completionQueue;
@property (retain) id<AMSMetricsFlushStrategy> currentFlushStrategy;
@property (retain) AMSMetricsDatabaseDataSource *databaseSource;
@property long long destination;
@property (retain) NSObject<OS_dispatch_queue> *engagementQueue;
@property BOOL flushingDisabled;
@property BOOL flushOnForeground;
@property (copy) id /* block */ flushIntervalBlock;
@property (retain) NSDate *flushIntervalStartTime;
@property (retain) NSObject<OS_dispatch_queue> *flushQueue;
@property (retain) id<AMSMetricsBagContract> bagContract;
@property (retain) id<AMSBagProtocol> bag;
@property (readonly) NSString *containerId;
@property (readonly) long long eventCount;
@property BOOL flushTimerEnabled;
@property long long maxBatchSize;
@property long long maxRequestCount;
@property BOOL monitorsLifecycleEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (id)internalInstanceUsingBag:(id)a0;
+ (id)serverTimeFromTimeInterval:(double)a0;
+ (BOOL)recordAppAnalyticsForEvent:(id)a0 bugType:(id)a1;
+ (id)serverTimeFromDate:(id)a0;
+ (double)timeIntervalFromServerTime:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (id)flush;
- (id)flushEvents:(id)a0;
- (void)enqueueEvent:(id)a0;
- (void)enqueueEvents:(id)a0;
- (void)_applicationWillEnterForeground;
- (void)_flushTimerEnabledChanged;
- (void)_beginFlushIntervalWithStyle:(long long)a0 events:(id)a1;
- (id)initWithContainerID:(id)a0 bag:(id)a1;
- (BOOL)_scheduledFlushAllowedForStyle:(long long)a0;
- (id)enqueueAsyncEvents:(id)a0;
- (id)_enqueueFigaroEvents:(id)a0;
- (id)_flushDataSource:(id)a0 topic:(id)a1;
- (void)_flushIntervalInvalidate;
- (id)_determineFlushStrategyWithDataSource:(id)a0 topic:(id)a1;
- (double)_flushIntervalForEvents:(id)a0;
- (void)_handleFlushIntervalWithStyle:(long long)a0;
- (void)dropEvents;
- (id)flushTopic:(id)a0;
- (id)initWithContainerId:(id)a0 bagContract:(id)a1;

@end
