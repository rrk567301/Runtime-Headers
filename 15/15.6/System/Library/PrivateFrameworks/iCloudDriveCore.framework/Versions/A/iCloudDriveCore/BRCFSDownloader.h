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
@property (readonly, nonatomic) char isCancelled;

- (void).cxx_destruct;
- (void)close;
- (void)resume;
- (void)suspend;
- (void)cancel;
- (void)_close;
- (void)schedule;
- (void)_clearDownloadErrorForDocument:(id)a0;
- (id)_buildDownloadActiveJobsResultSetForThrottleID:(unsigned long long)a0 etag:(id)a1 kind:(int)a2;
- (unsigned long long)_bumpThrottleForDownload:(id)a0 throttle:(id)a1;
- (void)_cancelJobs:(id)a0 state:(int)a1;
- (void)_cancelJobs:(id)a0 state:(int)a1 cancelError:(id)a2;
- (char)_createDownloadingJobForItem:(id)a0 state:(int)a1 kind:(int)a2 etag:(id)a3 stageFileName:(id)a4 error:(id *)a5;
- (void)_finishDownloadCleanup:(id)a0;
- (void)_finishedDownload:(id)a0 syncContext:(id)a1 operationID:(id)a2 error:(id)a3;
- (id)_getCancelErrorFromCancelReason:(int)a0;
- (void)_postponeLoserForWinner:(long long)a0 etag:(id)a1;
- (void)_reportDownloadErrorForDocument:(id)a0 error:(id)a1;
- (id)_sanitizeRecord:(id)a0;
- (void)_sendContentsBatch:(id)a0 sizeHint:(long long)a1 maxRecordsCount:(unsigned long long)a2 isLoserDownload:(char)a3;
- (void)_transferStreamOfSyncContext:(id)a0 didBecomeReadyWithMaxRecordsCount:(unsigned long long)a1 sizeHint:(unsigned long long)a2 priority:(long long)a3;
- (void)_willDownload:(id)a0 operationID:(id)a1;
- (void)addPendingOperationProgress:(id)a0 withStageFileName:(id)a1;
- (void)cancelAndCleanupItemDownload:(id)a0 kind:(int)a1;
- (void)cancelAndCleanupItemDownload:(id)a0 kind:(int)a1 etag:(id)a2;
- (void)cancelAndCleanupItemDownload:(id)a0 kind:(int)a1 etag:(id)a2 andNotifyDownloadTrackers:(char)a3;
- (void)cancelAndCleanupItemDownload:(id)a0 kind:(int)a1 etag:(id)a2 andNotifyDownloadTrackers:(char)a3 cancelReason:(int)a4;
- (void)cancelAndCleanupItemDownloads:(id)a0;
- (void)cancelOngoingDownloadsDueToMoreRecentServerVersionForItem:(id)a0;
- (void)deleteDownloadingJobForItem:(id)a0;
- (void)deleteJobsMatching:(id)a0;
- (id)descriptionForItem:(id)a0 context:(id)a1;
- (id)generateContentStageFileNameForItem:(id)a0 etag:(id)a1;
- (id)getDownloadEtagForItem:(id)a0 etagIfLoser:(id)a1;
- (unsigned long long)inFlightSize;
- (id)initWithAccountSession:(id)a0;
- (char)makeContentLive:(id)a0;
- (void)performFirstSchedulingAfterStartupInDB:(id)a0;
- (unsigned long long)recoverAndReportMissingJobs;
- (void)removePendingOperationProgressWithStageFileName:(id)a0;
- (void)rescheduleJobsPendingRecentsAndFavoritesFetchInZone:(id)a0;
- (void)rescheduleJobsPendingWinnerForItem:(id)a0;
- (char)scheduleContentDownloadForItem:(id)a0 serverItem:(id)a1 options:(unsigned long long)a2 etagIfLoser:(id)a3 stageFileName:(id)a4 error:(id *)a5;
- (unsigned long long)sizeOfActiveDownloads;
- (void)transferStreamOfSyncContext:(id)a0 didBecomeReadyWithMaxRecordsCount:(unsigned long long)a1 sizeHint:(unsigned long long)a2 priority:(long long)a3 completionBlock:(id /* block */)a4;
- (void)updateContentDownloadForMetaOnlyChange:(id)a0 fromEtag:(id)a1 toEtag:(id)a2;
- (void)updateLoserNotificationOfItem:(id)a0 etag:(id)a1 downloadKind:(int)a2 notification:(id)a3;

@end
