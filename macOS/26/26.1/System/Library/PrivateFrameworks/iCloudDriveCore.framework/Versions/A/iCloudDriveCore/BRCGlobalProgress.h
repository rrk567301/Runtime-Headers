@class br_pacer, NSMutableDictionary, BRCAccountSession, BRCProgress, NSObject, brc_task_tracker;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface BRCGlobalProgress : NSObject {
    BOOL _lazyInitDone;
    br_pacer *_updatePacer;
    brc_task_tracker *_resumeTracker;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BRCProgress *progress;
@property (nonatomic) long long sumOfCompletedUnitCountDelta;
@property (nonatomic) long long sumOfTotalUnitCountDelta;
@property (readonly, nonatomic) NSMutableDictionary *transfers;
@property (nonatomic) long long activeTransfersCount;
@property (nonatomic) long long completedTransfersCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *resumeGroup;
@property (readonly, weak, nonatomic) BRCAccountSession *session;

+ (id)_keyPathsToObserve;
+ (long long)_syncUpSizeWithVersionSize:(long long)a0;
+ (long long)_transferSizeWithVersionSize:(long long)a0;

- (id)initWithSession:(id)a0;
- (void)_destroyProgressInGroup:(id)a0 reason:(char)a1;
- (BOOL)_isSyncUpSuspendedForDocument:(id)a0;
- (void)verifyFutureProgressIsNotFinished;
- (void)_createGlobalProgressWithCompletedUnitCount:(long long)a0 totalUnitCount:(long long)a1;
- (void)_deleteDocument:(id)a0 reason:(char)a1;
- (void)resumeProgressForZones:(id)a0;
- (void)dumpToContext:(id)a0;
- (void)_cancelUploadForObjectID:(id)a0 inState:(unsigned int)a1 willRetryTransfer:(BOOL)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)addProgress:(id)a0 forDocument:(id)a1 inGroup:(char)a2;
- (void)_createUploadMetadataWithCompletedUnitCount:(long long)a0 totalUnitCount:(long long)a1;
- (void)_startObservingProgress:(id)a0;
- (void)stopPublishingProgress;
- (void)didDeleteDocument:(id)a0;
- (id)description;
- (void)_destroyUploadWithReason:(char)a0;
- (void)dumpVersionSizesWithMaxCount:(unsigned long long)a0 toContext:(id)a1;
- (void)dealloc;
- (void)_resumeProgressForZone:(id)a0 startingRowID:(unsigned long long)a1 whenDone:(id /* block */)a2;
- (void)_stopObservingProgress:(id)a0;
- (void)_updateDocument:(id)a0;
- (void)didUpdateDocument:(id)a0;
- (void)_startTrackingDocumentWithFileObjectID:(id)a0 versionSize:(long long)a1 syncUpState:(unsigned int)a2;
- (void).cxx_destruct;
- (void)replaceProgressForFileObjectID:(id)a0 inGroup:(char)a1 withProgress:(id)a2;
- (void)_updateCompletedUnitCountForFileObjectID:(id)a0 newCompletedUnitCount:(long long)a1 isFinished:(BOOL)a2;
- (void)updateUnitCount;
- (void)updateUploadThrottleForDocument:(id)a0 toState:(int)a1;
- (void)_deleteDocument:(id)a0 reason:(char)a1 sync:(BOOL)a2;
- (void)_cancelUploadForObjectID:(id)a0 inState:(unsigned int)a1;
- (BOOL)_isUploadSuspendedForDocument:(id)a0;

@end
