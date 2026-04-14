@class brc_task_tracker, NSString, NSMutableDictionary, NSDate, BRCFairScheduler, BRCDeadlineScheduler;

@interface BRCFSDownloader : BRCFSTransferScheduler <BRCModule> {
    NSMutableDictionary *_pendingOperationProgress;
    brc_task_tracker *_tracker;
    BRCFairScheduler *_fairScheduler;
    unsigned long long _activeDownloadsSize;
    NSDate *_lastDownloadRefresh;
    double _activeDownloadSizeRefreshInterval;
    NSMutableDictionary *_willRetryOperationProgress;
}

@property (readonly, nonatomic) BRCDeadlineScheduler *downloadsDeadlineScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isCancelled;

- (void)_close;
- (unsigned long long)_bumpThrottleForDownload:(id)a0 throttle:(id)a1;
- (void)_clearDownloadErrorForDocument:(id)a0;
- (void)_reportDownloadErrorForDocument:(id)a0 error:(id)a1;
- (void)cancelAndCleanupItemDownload:(id)a0 kind:(int)a1;
- (void)cancel;
- (void)removePendingOperationProgressWithStageFileName:(id)a0;
- (void)transferStreamOfSyncContext:(id)a0 didBecomeReadyWithMaxRecordsCount:(unsigned long long)a1 sizeHint:(unsigned long long)a2 priority:(long long)a3 supportedKinds:(id)a4 completionBlock:(id /* block */)a5;
- (long long)nextAllowedScheduleForItem:(id)a0 withDownloadKind:(int)a1;
- (void)recoverAndReportMissingJobsWithCompletion:(id /* block */)a0 recoveryTask:(id)a1;
- (void)deleteJobsMatching:(id)a0;
- (BOOL)makeContentLive:(id)a0;
- (void)schedule;
- (void)cancelOngoingDownloadsDueToMoreRecentServerVersionForItem:(id)a0;
- (void)resume;
- (void)suspend;
- (void)close;
- (void)cancelAndCleanupItemDownload:(id)a0 kind:(int)a1 etag:(id)a2 andNotifyDownloadTrackers:(BOOL)a3;
- (id)descriptionForItem:(id)a0 context:(id)a1;
- (void)_willDownload:(id)a0 operationID:(id)a1;
- (void)cancelAndCleanupItemDownload:(id)a0 kind:(int)a1 etag:(id)a2;
- (id)_buildDownloadActiveJobsResultSetForThrottleID:(unsigned long long)a0 etag:(id)a1 kind:(int)a2;
- (void)_finishDownloadCleanup:(id)a0;
- (void)cancelAndCleanupItemDownloads:(id)a0;
- (void)rescheduleJobsPendingWinnerForItem:(id)a0;
- (void)updateContentDownloadForMetaOnlyChange:(id)a0 fromEtag:(id)a1 toEtag:(id)a2;
- (BOOL)scheduleContentDownloadForItem:(id)a0 serverItem:(id)a1 options:(unsigned long long)a2 etagIfLoser:(id)a3 stageFileName:(id)a4 error:(id *)a5;
- (id)getDownloadEtagForItem:(id)a0 etagIfLoser:(id)a1;
- (void)addPendingOperationProgress:(id)a0 withStageFileName:(id)a1;
- (void)_cancelJobs:(id)a0 state:(int)a1;
- (void)updateLoserNotificationOfItem:(id)a0 etag:(id)a1 downloadKind:(int)a2 notification:(id)a3;
- (void)_postponeLoserForWinner:(long long)a0 etag:(id)a1;
- (void).cxx_destruct;
- (void)_transferStreamOfSyncContext:(id)a0 didBecomeReadyWithMaxRecordsCount:(unsigned long long)a1 sizeHint:(unsigned long long)a2 priority:(long long)a3 supportedKinds:(id)a4;
- (id)_sanitizeRecord:(id)a0;
- (void)rescheduleJobsPendingRecentsAndFavoritesFetchInZone:(id)a0;
- (id)generateContentStageFileNameForItem:(id)a0 etag:(id)a1;
- (void)_cancelJobs:(id)a0 state:(int)a1 cancelError:(id)a2;
- (id)initWithAccountSession:(id)a0;
- (BOOL)_createDownloadingJobForItem:(id)a0 state:(int)a1 kind:(int)a2 etag:(id)a3 stageFileName:(id)a4 error:(id *)a5;
- (id)_getCancelErrorFromCancelReason:(int)a0;
- (void)deleteDownloadingJobForItem:(id)a0;
- (void)_sendContentsBatch:(id)a0 sizeHint:(long long)a1 maxRecordsCount:(unsigned long long)a2 kind:(int)a3;
- (unsigned long long)sizeOfActiveDownloads;
- (void)cancelAndCleanupItemDownload:(id)a0 kind:(int)a1 etag:(id)a2 andNotifyDownloadTrackers:(BOOL)a3 cancelReason:(int)a4;
- (void)_finishedDownload:(id)a0 syncContext:(id)a1 operationID:(id)a2 error:(id)a3;

@end
