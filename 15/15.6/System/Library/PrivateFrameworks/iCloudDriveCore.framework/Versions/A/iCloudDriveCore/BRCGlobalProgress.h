@class NSString, _BRCUploadInfo, BRCProgressMultiplex, _BRCDownloadInfo, BRCAccountSession, brc_task_tracker, NSObject, br_pacer;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BRCGlobalProgress : NSObject <BRCReachabilityDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    char _lazyInitDone;
    br_pacer *_updatePacer;
    brc_task_tracker *_resumeTracker;
    NSObject<OS_dispatch_source> *_operationTimer;
    unsigned int _operationTimerSuspendCount;
    char _showExtendedInfo;
    char _networkReachable;
    BRCProgressMultiplex *_globalProgressMultiplex;
    _BRCUploadInfo *_uploads;
    _BRCDownloadInfo *_downloads;
}

@property (readonly, weak, nonatomic) BRCAccountSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_keyPathsToObserve;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithSession:(id)a0;
- (void)_startObservingProgress:(id)a0;
- (void)networkReachabilityChanged:(char)a0;
- (void)_destroyProgressInGroup:(id)a0 reason:(char)a1;
- (id)_buildGlobalProgressObjectsWihCompletedUnitCount:(long long)a0 totalUnitCount:(long long)a1;
- (void)_cancelUploadForObjectID:(id)a0 inState:(unsigned int)a1;
- (void)_cancelUploadForObjectID:(id)a0 inState:(unsigned int)a1 willRetryTransfer:(char)a2;
- (void)_cancelUploadForObjectID:(id)a0 inState:(unsigned int)a1 willRetryTransfer:(char)a2 pendingQuota:(char)a3;
- (void)_createNewGlobalProgressInGroup:(id)a0 completedUnitCount:(long long)a1 totalUnitCount:(long long)a2;
- (void)_createNewIndeterminateGlobalProgress;
- (void)_createUploadMetadataWithCompletedUnitCount:(long long)a0 totalUnitCount:(long long)a1;
- (void)_deleteDocument:(id)a0 reason:(char)a1;
- (void)_deleteDocument:(id)a0 reason:(char)a1 sync:(char)a2;
- (void)_destroyUploadWithReason:(char)a0;
- (void)_resumeProgressForAnotherOperationIfNeeded;
- (void)_resumeProgressForZone:(id)a0 startingRowID:(unsigned long long)a1 whenDone:(id /* block */)a2;
- (void)_stopObservingProgress:(id)a0;
- (void)_updateDocument:(id)a0;
- (void)_updateGlobalProgress;
- (void)addProgress:(id)a0 forDocument:(id)a1 inGroup:(char)a2;
- (void)clearOutOfQuotaState;
- (void)didDeleteDocument:(id)a0;
- (void)didUpdateDocument:(id)a0;
- (void)dumpDictionary:(id)a0 withMaxCount:(unsigned long long)a1 toContext:(id)a2;
- (void)dumpToContext:(id)a0;
- (void)resumeProgressForZones:(id)a0;
- (void)stopPublishingProgress;
- (void)updateUploadThrottleForDocument:(id)a0 toState:(int)a1;

@end
