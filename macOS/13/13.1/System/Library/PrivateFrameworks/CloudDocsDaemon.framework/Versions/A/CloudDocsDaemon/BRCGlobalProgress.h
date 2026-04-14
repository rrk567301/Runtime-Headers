@class br_pacer, BRCAccountSession, NSString, _BRCUploadInfo, BRCProgressMultiplex, NSObject, _BRCDownloadInfo;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BRCGlobalProgress : NSObject <BRCReachabilityDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _lazyInitDone;
    br_pacer *_updatePacer;
    NSObject<OS_dispatch_source> *_operationTimer;
    unsigned int _operationTimerSuspendCount;
    BOOL _showExtendedInfo;
    BOOL _networkReachable;
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
- (void)networkReachabilityChanged:(BOOL)a0;
- (void)dumpToContext:(id)a0;
- (void)didUpdateClientZone:(id)a0;
- (void)willScheduleDocumentForDownload:(id)a0;
- (void)resumeProgressForZones:(id)a0;
- (void)didUpdateDocument:(id)a0;
- (void)didDeleteDocument:(id)a0;
- (void)clearOutOfQuotaState;
- (void)stopPublishingProgress;
- (void)addProgress:(id)a0 forDocument:(id)a1 inGroup:(char)a2;
- (void)updateUploadThrottleForDocument:(id)a0 toState:(int)a1;
- (void)updateDownloadThrottleForDocument:(id)a0 toState:(int)a1;
- (void)dumpDictionary:(id)a0 withMaxCount:(unsigned long long)a1 toContext:(id)a2;
- (void)_startObservingProgress:(id)a0;
- (void)_stopObservingProgress:(id)a0;
- (void)_createNewIndeterminateGlobalProgress;
- (void)_createNewGlobalProgressInGroup:(id)a0 completedUnitCount:(long long)a1 totalUnitCount:(long long)a2;
- (void)_createUploadMetadataWithCompletedUnitCount:(long long)a0 totalUnitCount:(long long)a1;
- (void)_createDownloadMetadataWithCompletedUnitCount:(long long)a0 totalUnitCount:(long long)a1;
- (void)_updateGlobalProgress;
- (void)_cancelUploadForDocumentID:(id)a0 inState:(unsigned int)a1;
- (void)_cancelUploadForDocumentID:(id)a0 inState:(unsigned int)a1 willRetryTransfer:(BOOL)a2;
- (void)_cancelUploadForDocumentID:(id)a0 inState:(unsigned int)a1 willRetryTransfer:(BOOL)a2 pendingQuota:(BOOL)a3;
- (void)_cancelDownloadForDocumentID:(id)a0;
- (void)_cancelDownloadForDocumentID:(id)a0 destroyIfLast:(BOOL)a1 willRetryTransfer:(BOOL)a2;
- (void)_destroyProgressInGroup:(id)a0 reason:(char)a1;
- (void)_destroyUploadWithReason:(char)a0;
- (void)_destroyDownloadWithReason:(char)a0;
- (void)_resumeProgressForAnotherOperationIfNeeded;
- (void)_updateDocument:(id)a0;
- (void)_deleteDocument:(id)a0 reason:(char)a1;

@end
