@class NSMutableDictionary, NSUUID, NSString, BGSystemTaskRequest, NSObject;
@protocol OS_os_transaction, OS_dispatch_queue, BGSystemTaskDelegate;

@interface BGSystemTask : NSObject

@property long long state;
@property (readonly, copy) BGSystemTaskRequest *taskRequest;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (retain, nonatomic) NSMutableDictionary *runningConsumedResults;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *performanceMetricQueue;
@property (retain, nonatomic) NSMutableDictionary *throughputMetricsMap;
@property (nonatomic) BOOL hasPropagatedExpiration;
@property (retain, nonatomic) NSMutableDictionary *taskProgressInfo;
@property (weak) id<BGSystemTaskDelegate> delegate;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ expirationAckHandler;
@property (copy, nonatomic) id /* block */ clientLedExpirationHandler;
@property (readonly, nonatomic) BOOL expiring;
@property (nonatomic) unsigned long long expirationReason;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, copy) NSString *identifier;
@property (copy, nonatomic) id /* block */ expirationHandler;
@property (copy, nonatomic) id /* block */ expirationHandlerWithReason;

+ (id)logger;

- (id)initWithIdentifier:(id)a0;
- (id)initWithIdentifier:(id)a0 queue:(id)a1;
- (BOOL)invalid;
- (void).cxx_destruct;
- (void)setTaskCompleted;
- (BOOL)setTaskExpiredWithRetryAfter:(double)a0 error:(id *)a1;
- (BOOL)deregisterThroughputTrackingFor:(id)a0 withEndTime:(id)a1 error:(id *)a2;
- (BOOL)registerThroughputTrackingFor:(id)a0 withStartTime:(id)a1 error:(id *)a2;
- (void)clearLocked;
- (BOOL)consumedResults:(id)a0 error:(id *)a1;
- (id)delegate:(id *)a0;
- (BOOL)eligibleToRun;
- (void)handleExpirationWithReason:(unsigned long long)a0;
- (BOOL)hasValidExpirationHandler;
- (id)initWithIdentifier:(id)a0 queue:(id)a1 taskRequest:(id)a2;
- (void)invokeExpirationHandlerWithReason:(unsigned long long)a0;
- (void)prepareForRunning;
- (BOOL)producedCumulativeResults:(id)a0 error:(id *)a1;
- (BOOL)queue_reportBufferedTaskWorkloadProgress;
- (BOOL)queue_reportThroughputForPerformanceMetric:(id)a0 error:(id *)a1;
- (BOOL)reportCumulativeResultConsumptionWithError:(id *)a0;
- (BOOL)reportPendingThroughputMetrics;
- (BOOL)reportTaskWorkloadProgress:(unsigned long long)a0 completed:(unsigned long long)a1 category:(unsigned long long)a2 subCategory:(id)a3 error:(id *)a4;
- (BOOL)resetResultsForIdentifier:(id)a0 error:(id *)a1;
- (void)resultQueue_aggregateConsumedResult:(id)a0;
- (BOOL)resultQueue_containsPendingConsumedResults;
- (BOOL)sendTaskWorkloadProgressToPPS:(unsigned long long)a0 completed:(unsigned long long)a1 category:(unsigned long long)a2 subCategory:(id)a3;
- (BOOL)shouldReportTaskWorkloadProgress:(unsigned long long)a0;

@end
