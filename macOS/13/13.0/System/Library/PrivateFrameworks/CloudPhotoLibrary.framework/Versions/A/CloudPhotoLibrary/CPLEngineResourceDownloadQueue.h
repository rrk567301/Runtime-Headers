@class NSString, CPLPlatformObject, NSArray, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface CPLEngineResourceDownloadQueue : CPLEngineStorage <CPLAbstractObject> {
    NSObject<OS_dispatch_queue> *_downloadLock;
    NSArray *_allQueues;
    NSArray *_allHighPriorityQueues;
    NSArray *_allLowPriorityQueues;
    NSArray *_bestCancellableHighPriorityQueues;
    NSArray *_bestCancellableLowPriorityQueues;
    id /* block */ _highPriorityQueuePerResourceTypeAndTransferIntent;
    id /* block */ _lowPriorityQueuePerResourceTypeAndTransferIntent;
    unsigned long long _inflightTransferTasksCount;
    unsigned long long _transferTasksBurstCount;
    unsigned long long _lastTransferTasksBurstCount;
    NSDate *_lastTransferTaskBurstDate;
    BOOL _shouldRequestABackgroundDownloadSyncPhase;
}

@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldRetryDownloadOnError:(id)a0;

- (void).cxx_destruct;
- (id)status;
- (void)barrier;
- (unsigned long long)scopeType;
- (id)initWithEngineStore:(id)a0 name:(id)a1;
- (BOOL)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (id)cloudResourceForLocalResource:(id *)a0 cloudRecord:(id *)a1 target:(id *)a2 shouldNotTrustCaches:(BOOL *)a3 allowUnsafeClientCache:(BOOL)a4 transportScopeMapping:(id)a5 error:(id *)a6;
- (id)downloadTaskForLocalResource:(id)a0 clientBundleID:(id)a1 options:(id)a2 proposedTaskIdentifier:(id)a3 didStartHandler:(id /* block */)a4 progressHandler:(id /* block */)a5 completionHandler:(id /* block */)a6;
- (id)_downloadTaskForLocalResource:(id)a0 clientBundleID:(id)a1 options:(id)a2 proposedTaskIdentifier:(id)a3 didStartHandler:(id /* block */)a4 progressHandler:(id /* block */)a5 completionHandler:(id /* block */)a6;
- (id)_failedTaskWithCompletionHandler:(id /* block */)a0 error:(id)a1 resource:(id)a2 taskIdentifier:(id)a3 options:(id)a4;
- (id)_resourceStorageCopyTaskForResource:(id)a0 taskIdentifier:(id)a1 cloudResource:(id)a2 ofRecord:(id)a3 target:(id)a4 didStartHandler:(id /* block */)a5 progressHandler:(id /* block */)a6 completionHandler:(id /* block */)a7;
- (id)_realDownloadTaskForLocalResource:(id)a0 taskIdentifier:(id)a1 cloudResource:(id)a2 ofRecord:(id)a3 target:(id)a4 didStartHandler:(id /* block */)a5 progressHandler:(id /* block */)a6 completionHandler:(id /* block */)a7;
- (BOOL)_shouldTryLowPriorityDownloadWithError:(id *)a0;
- (unsigned long long)_transportTaskCount;
- (id)_bestQueueWithCancellableTransportTasks;
- (BOOL)_canScheduleBackgroundDownloads;
- (BOOL)_launchTransportTaskForQueue:(id)a0;
- (void)_dispatchTransportTasksIfNecessary;
- (id)_activeQueueForTransferTask:(id)a0;
- (id)createGroupForBackgroundDownloadsOfResourceType:(unsigned long long)a0 transferIntent:(unsigned long long)a1 transport:(id)a2;
- (void)_enqueueTransferTaskInActiveQueue:(id)a0;
- (void)_dequeueTransferTaskInActiveQueue:(id)a0;
- (void)_scheduleBackgroundDownloadsIfNecessary;
- (void)_requestBackgroundDownloads;
- (void)_unscheduleBackgroundDownloads;
- (BOOL)enqueueBackgroundDownloadTaskForResource:(id)a0 intent:(unsigned long long)a1 downloading:(BOOL)a2 error:(id *)a3;
- (BOOL)reenqueueBackgroundDownloadTaskForResource:(id)a0 bumpRetryCount:(BOOL)a1 didDiscard:(BOOL *)a2 error:(id *)a3;
- (BOOL)removeBackgroundDownloadTaskForResource:(id)a0 error:(id *)a1;
- (BOOL)markBackgroundDownloadTaskForResourceAsSuceeded:(id)a0 error:(id *)a1;
- (id)dequeueNextBackgroundDownloadTasksForResourceType:(unsigned long long)a0 andIntent:(unsigned long long)a1 maximumSize:(unsigned long long)a2 maximumCount:(unsigned long long)a3 error:(id *)a4;
- (BOOL)resetDequeuedBackgroundDownloadTasksWithError:(id *)a0;
- (BOOL)removeAllBackgroundDownloadTasksForItemWithScopedIdentifier:(id)a0 error:(id *)a1;
- (id)enumeratorForDownloadedResources;
- (unsigned long long)countOfQueuedDownloadTasks;
- (BOOL)hasActiveOrQueuedBackgroundDownloadOperations;
- (id)_queuesStatus;

@end
