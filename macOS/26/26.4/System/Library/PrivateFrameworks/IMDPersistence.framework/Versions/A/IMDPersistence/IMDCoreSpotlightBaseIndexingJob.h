@class NSString, IMDCoreSpotlightIndexingJobQueue, NSError, NSObject, IMDIndexingContext;
@protocol IMDSpotlightIndex, OS_dispatch_queue, OS_dispatch_group;

@interface IMDCoreSpotlightBaseIndexingJob : NSOperation {
    BOOL _finished;
    BOOL _executing;
}

@property (class, readonly, nonatomic) id<IMDSpotlightIndex> index;
@property (class, readonly, nonatomic) id<IMDSpotlightIndex> criticalIndex;

@property (readonly, nonatomic) id<IMDSpotlightIndex> index;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSString *transactionID;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *workGroup;
@property (readonly, nonatomic) IMDCoreSpotlightIndexingJobQueue *jobQueue;
@property (readonly, nonatomic) IMDIndexingContext *context;

+ (id)indexForReason:(long long)a0;
+ (id)_timeoutError;

- (BOOL)isAsynchronous;
- (id)initWithContext:(id)a0;
- (void)finish;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void).cxx_destruct;
- (void)start;
- (id)initWithIndex:(id)a0 context:(id)a1 jobQueue:(id)a2;
- (void)_startJob;
- (void)_submitWithCompletionBlock:(id /* block */)a0;
- (id)initWithContext:(id)a0 critical:(BOOL)a1;
- (id)initWithEnvironmentFromJob:(id)a0 transactionID:(id)a1;

@end
