@class AMSMetricsDatabaseDataSource, NSString, NSMutableArray, AMSMetricsFlushOperation, AMSMetricsRegexCache, AMSBagKeySet, AMSTreatmentStore, NSObject, AMSEngagement, AMSURLSession;
@protocol OS_dispatch_queue, AMSMetricsBagContract, AMSBagProtocol;

@interface AMSMetrics : NSObject <AMSMetricsProtocol, AMSBagConsumer> {
    NSMutableArray *_enqueuedOperations;
    AMSMetricsFlushOperation *_currentFlushOperation;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _enqueuedOperationsLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _flushModeLock;
    _Atomic BOOL _flushingDisabled;
    Class _flushTaskClass;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bagLock;
}

@property (class, readonly) NSObject<OS_dispatch_queue> *sharedTimerQueue;
@property (class, readonly) BOOL appAnalyticsAllowed;
@property (class, readonly) BOOL diagnosticsSubmissionAllowed;
@property (class) BOOL disableBackgroundMetrics;
@property (class) BOOL flushDelayEnabled;
@property (class) BOOL flushTimerEnabled;
@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property long long destination;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } engagementLock;
@property BOOL flushingDisabled;
@property (copy) id /* block */ flushOnDidBecomeActiveBlock;
@property (copy) id /* block */ flushIntervalBlock;
@property (readonly) AMSURLSession *URLSession;
@property (readonly) AMSMetricsRegexCache *regexCache;
@property (retain) AMSEngagement *engagement;
@property (retain) AMSTreatmentStore *treatmentStore;
@property (retain) AMSMetricsDatabaseDataSource *databaseSource;
@property (retain) id<AMSMetricsBagContract> bagContract;
@property (retain) id<AMSBagProtocol> bag;
@property (readonly) NSString *containerId;
@property (readonly) long long eventCount;
@property BOOL flushTimerEnabled;
@property BOOL includeMMeClientInfoAndDeviceHeaders;
@property long long maxBatchSize;
@property long long maxEventsPerBatch;
@property long long maxRequestCount;
@property unsigned long long metricsSigningFlavour;
@property BOOL monitorsLifecycleEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (void)_configureAccountIdentifierForEvent:(id)a0 andActiveAccount:(id)a1;
+ (id)internalInstanceUsingBag:(id)a0;
+ (id)_makeMetricsEventAnomaliesDetector;
+ (id)_urlSessionPromiseWith:(id)a0;
+ (void)_detectAnomaliesForMetricsEvent:(id)a0;
+ (id)serverTimeFromDate:(id)a0;
+ (id)_createURLSessionPromiseWith:(id)a0;
+ (id)serverTimeFromTimeInterval:(double)a0;
+ (BOOL)recordAppAnalyticsForEvent:(id)a0 bugType:(id)a1;
+ (id)_defaultAccountClearingTopics;
+ (double)timeIntervalFromServerTime:(id)a0;

- (id)promiseForEnqueueingEvents:(id)a0 options:(long long)a1;
- (void)enqueueEvents:(id)a0;
- (id)flushEvents:(id)a0;
- (void)_applicationDidBecomeActive:(id)a0;
- (id)_modifiedEvents:(id)a0;
- (id)initWithContainerID:(id)a0 bag:(id)a1;
- (void)_clearAccountForEventIfNeeded:(id)a0;
- (id)flush;
- (BOOL)_scheduledFlushAllowedForStyle:(long long)a0;
- (id)initWithContainerId:(id)a0 bagContract:(id)a1;
- (void)cancel;
- (void)_flushIntervalInvalidate;
- (id)enqueueAsyncEvents:(id)a0 scheduleDelayedFlush:(BOOL)a1;
- (id)flushTopic:(id)a0;
- (void).cxx_destruct;
- (id)_handleFlushIntervalWithStyle:(long long)a0;
- (id)_cachedAccountClearingTopicsFromBag;
- (void)_flushTimerEnabledChanged;
- (id)_enqueueFigaroEvents:(id)a0 scheduleDelayedFlush:(BOOL)a1;
- (void)_beginFlushIntervalWithStyle:(long long)a0 events:(id)a1;
- (id)_topicsRequiringAccountClearing;
- (void)_processOperationQueue;
- (id)_determineFlushStrategyWithDataSource:(id)a0 topic:(id)a1 urlSession:(id)a2;
- (id)_flushDataSource:(id)a0 topic:(id)a1;
- (void)dropEvents;
- (void)dealloc;
- (double)_flushIntervalWithConfiguration:(id)a0 forEvents:(id)a1;
- (id)promiseForEnqueueingEvents:(id)a0;
- (id)initWithContainerID:(id)a0 bag:(id)a1 flushTaskClass:(Class)a2;
- (void)enqueueEvent:(id)a0;

@end
