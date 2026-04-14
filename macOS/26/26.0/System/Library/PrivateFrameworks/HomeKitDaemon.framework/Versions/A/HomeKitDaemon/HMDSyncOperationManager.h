@class HMDSyncOperationQueue, NSString, NSArray, NSMutableDictionary, HMDSyncOperation, NSObject, NSMutableArray, HMFExponentialBackoffTimer;
@protocol OS_dispatch_queue, OS_os_log, HMDSyncOperationManagerDataSource;

@interface HMDSyncOperationManager : HMFObject <HMFLogging, HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_cloudVerifyAccountOperations;
    NSMutableArray *_cloudZonePushOperationQueues;
    NSMutableArray *_cloudCancelPauseOperations;
    NSMutableArray *_cloudQueryDatabaseOperations;
    NSMutableArray *_cloudPostFetchOperations;
    NSMutableDictionary *_cloudZonePushOperationQueuesMap;
    NSMutableDictionary *_cloudZoneFetchOperationQueuesMap;
    NSObject<OS_os_log> *_logger;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly) HMDSyncOperationQueue *cloudPushOperations;
@property (readonly, copy) NSArray *cloudVerifyAccountOperations;
@property (readonly) HMDSyncOperationQueue *cloudFetchOperations;
@property (readonly, copy) NSArray *cloudZonePushOperationQueues;
@property (readonly, copy) NSMutableArray *cloudZoneFetchOperationQueues;
@property (readonly, copy) NSArray *cloudCancelPauseOperations;
@property (readonly, copy) NSArray *cloudQueryDatabaseOperations;
@property (readonly, copy) NSArray *cloudPostFetchOperations;
@property (nonatomic) BOOL pauseQueue;
@property (nonatomic) long long pauseCloudPushLevel;
@property (retain, nonatomic) HMFExponentialBackoffTimer *cloudPushDelayTimer;
@property (nonatomic, getter=wasSyncLoopDialogDisplayed) BOOL syncLoopDialogDisplayed;
@property (retain, nonatomic) HMDSyncOperation *currentOperation;
@property (readonly, weak, nonatomic) id<HMDSyncOperationManagerDataSource> dataSource;
@property (readonly) id /* block */ timerFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)addOperation:(id)a0;
- (void)pause;
- (id)dumpState;
- (void)addCloudCancelPauseOperation:(id)a0;
- (void)cancelOperations;
- (void)removeCloudZoneFetchOperationQueue:(id)a0;
- (id)popCloudQueryDatabaseOperation;
- (id)initWithClientQueue:(id)a0 dataSource:(id)a1;
- (void)kick;
- (void)timerDidFire:(id)a0;
- (void)_reportPossibleSyncLoop;
- (void)removeCloudZonePushOperationQueue:(id)a0;
- (void)addOperation:(id)a0 withDelay:(double)a1;
- (id)popCloudZonePushOperationAndMoveQueueToEnd;
- (void)_handleCancelledOperations:(id)a0;
- (void)resume;
- (BOOL)popCloudZoneFetchOperationAndMoveQueueToEnd:(id *)a0;
- (void)addCloudVerifyAccountOperation:(id)a0;
- (void)_dropWithoutAlreadyScheduledOperation:(id)a0;
- (void)resetCloudPushTimer:(id)a0;
- (void)addOperationRespectingOptions:(id)a0 withDelay:(double)a1;
- (void)pauseCloudPush;
- (BOOL)addCloudPostFetchOperationIfNonePresent:(id)a0;
- (id)initWithClientQueue:(id)a0 dataSource:(id)a1 timerFactory:(id /* block */)a2;
- (BOOL)addCloudZoneFetchOperation:(id)a0 delay:(double)a1;
- (id)popCloudPostFetchOperation;
- (id)popCloudCancelPauseOperation;
- (id)cloudZoneFetchOperations;
- (id)_dequeueNextOperation;
- (BOOL)dropCloudPostFetchOperationsIfPresent;
- (void)pauseAndWaitForCurrentOperationCompletion:(id /* block */)a0;
- (void)_handleNextOperation;
- (BOOL)addCloudZonePushOperation:(id)a0 delay:(double)a1;
- (void).cxx_destruct;
- (BOOL)addCloudQueryDatabaseOperationIfNonePresent:(id)a0;
- (id)popCloudVerifyAccountOperation;
- (void)resumeCloudPush;

@end
