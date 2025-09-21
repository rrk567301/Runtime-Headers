@class NSUUID, NSMutableDictionary, NSString, NSObject;
@protocol OS_os_transaction, OS_dispatch_queue, BGSystemTaskDelegate;

@interface BGSystemTask : NSObject

@property long long state;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (retain, nonatomic) NSMutableDictionary *runningConsumedResults;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultQueue;
@property (nonatomic) char hasPropagatedExpiration;
@property (retain, nonatomic) NSMutableDictionary *taskProgressInfo;
@property (weak) id<BGSystemTaskDelegate> delegate;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ expirationAckHandler;
@property (copy, nonatomic) id /* block */ clientLedExpirationHandler;
@property (readonly, nonatomic) char expiring;
@property (nonatomic) unsigned long long expirationReason;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, copy) NSString *identifier;
@property (copy, nonatomic) id /* block */ expirationHandler;
@property (copy, nonatomic) id /* block */ expirationHandlerWithReason;

+ (id)logger;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (char)invalid;
- (char)eligibleToRun;
- (id)initWithIdentifier:(id)a0 queue:(id)a1;
- (void)setTaskCompleted;
- (char)setTaskExpiredWithRetryAfter:(double)a0 error:(id *)a1;
- (void)clearLocked;
- (char)consumedResults:(id)a0 error:(id *)a1;
- (id)delegate:(id *)a0;
- (void)handleExpirationWithReason:(unsigned long long)a0;
- (char)hasValidExpirationHandler;
- (void)invokeExpirationHandlerWithReason:(unsigned long long)a0;
- (void)prepareForRunning;
- (char)producedCumulativeResults:(id)a0 error:(id *)a1;
- (char)queue_reportBufferedTaskWorkloadProgress;
- (char)reportCumulativeResultConsumptionWithError:(id *)a0;
- (char)reportTaskWorkloadProgress:(unsigned long long)a0 completed:(unsigned long long)a1 category:(unsigned long long)a2 subCategory:(id)a3 error:(id *)a4;
- (char)resetResultsForIdentifier:(id)a0 error:(id *)a1;
- (void)resultQueue_aggregateConsumedResult:(id)a0;
- (char)resultQueue_containsPendingConsumedResults;
- (char)sendTaskWorkloadProgressToPPS:(unsigned long long)a0 completed:(unsigned long long)a1 category:(unsigned long long)a2 subCategory:(id)a3;
- (char)shouldReportTaskWorkloadProgress:(unsigned long long)a0;

@end
