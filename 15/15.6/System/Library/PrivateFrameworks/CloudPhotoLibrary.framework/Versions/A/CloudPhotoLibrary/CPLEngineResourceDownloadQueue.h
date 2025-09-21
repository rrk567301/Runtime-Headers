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
    char _shouldRequestABackgroundDownloadSyncPhase;
}

@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)shouldRetryDownloadOnError:(id)a0;

- (void).cxx_destruct;
- (void)barrier;
- (id)status;
- (unsigned long long)scopeType;
- (char)_canScheduleBackgroundDownloads;
- (id)_activeQueueForTransferTask:(id)a0;
- (id)_bestQueueWithCancellableTransportTasks;
- (void)_dequeueTransferTaskInActiveQueue:(id)a0;
- (void)_dispatchTransportTasksIfNecessary;
- (id)_downloadTaskForLocalResource:(id)a0 clientBundleID:(id)a1 options:(id)a2 proposedTaskIdentifier:(id)a3 didStartHandler:(id /* block */)a4 progressHandler:(id /* block */)a5 completionHandler:(id /* block */)a6;
- (void)_enqueueTransferTaskInActiveQueue:(id)a0;
- (id)_failedTaskWithCompletionHandler:(id /* block */)a0 error:(id)a1 resource:(id)a2 taskIdentifier:(id)a3 options:(id)a4;
- (char)_launchTransportTaskForQueue:(id)a0;
- (id)_queuesStatus;
- (id)_realDownloadTaskForLocalResource:(id)a0 taskIdentifier:(id)a1 cloudResource:(id)a2 ofRecord:(id)a3 target:(id)a4 didStartHandler:(id /* block */)a5 progressHandler:(id /* block */)a6 completionHandler:(id /* block */)a7;
- (void)_requestBackgroundDownloads;
- (id)_resourceStorageCopyTaskForResource:(id)a0 taskIdentifier:(id)a1 cloudResource:(id)a2 ofRecord:(id)a3 target:(id)a4 didStartHandler:(id /* block */)a5 progressHandler:(id /* block */)a6 completionHandler:(id /* block */)a7;
- (void)_scheduleBackgroundDownloadsIfNecessary;
- (char)_shouldTryLowPriorityDownloadWithError:(id *)a0;
- (unsigned long long)_transportTaskCount;
- (void)_unscheduleBackgroundDownloads;
- (id)cloudResourceForLocalResource:(id *)a0 cloudRecord:(id *)a1 target:(id *)a2 shouldNotTrustCaches:(char *)a3 allowUnsafeClientCache:(char)a4 transportScopeMapping:(id)a5 error:(id *)a6;
- (unsigned long long)countOfQueuedDownloadTasks;
- (id)createGroupForBackgroundDownloadsOfResourceType:(unsigned long long)a0 transferIntent:(unsigned long long)a1 transport:(id)a2;
- (char)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (id)dequeueNextBackgroundDownloadTasksForResourceType:(unsigned long long)a0 andIntent:(unsigned long long)a1 maximumSize:(unsigned long long)a2 maximumCount:(unsigned long long)a3 error:(id *)a4;
- (id)downloadTaskForLocalResource:(id)a0 clientBundleID:(id)a1 options:(id)a2 proposedTaskIdentifier:(id)a3 didStartHandler:(id /* block */)a4 progressHandler:(id /* block */)a5 completionHandler:(id /* block */)a6;
- (char)enqueueBackgroundDownloadTaskForResource:(id)a0 intent:(unsigned long long)a1 downloading:(char)a2 error:(id *)a3;
- (id)enumeratorForDownloadedResources;
- (char)hasActiveOrQueuedBackgroundDownloadOperations;
- (id)initWithEngineStore:(id)a0 name:(id)a1;
- (char)markBackgroundDownloadTaskForResourceAsSuceeded:(id)a0 error:(id *)a1;
- (char)reenqueueBackgroundDownloadTaskForResource:(id)a0 bumpRetryCount:(char)a1 didDiscard:(char *)a2 error:(id *)a3;
- (char)removeAllBackgroundDownloadTasksForItemWithScopedIdentifier:(id)a0 error:(id *)a1;
- (char)removeBackgroundDownloadTaskForResource:(id)a0 error:(id *)a1;
- (char)resetDequeuedBackgroundDownloadTasksWithError:(id *)a0;

@end
