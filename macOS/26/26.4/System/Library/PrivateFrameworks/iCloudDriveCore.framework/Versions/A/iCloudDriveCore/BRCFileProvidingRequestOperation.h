@class NSSet, NSString, NSMutableSet, BRCDocumentItem, NSMutableArray, NSError;
@protocol BRCDownloadTrackerManaging;

@interface BRCFileProvidingRequestOperation : _BRCFrameworkOperation <BRCDownloadTracking, BRCReachabilityDelegate, BRCOperationSubclass> {
    NSString *_etagIfLoser;
    NSString *_stageFileName;
    unsigned long long _options;
    NSMutableSet *_trackerFileObjects;
    BRCDocumentItem *_documentItem;
    NSMutableArray *_callbacks;
    NSError *_lastDownloadError;
    BOOL _isFinished;
    BOOL _isMonitoringReachability;
    id<BRCDownloadTrackerManaging> _downloadTrackersManager;
}

@property (readonly, nonatomic) NSSet *trackedFileObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addCompletionCallback:(id /* block */)a0;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)networkReachabilityChanged:(BOOL)a0;
- (int)kind;
- (void)main;
- (id)initWithDocumentItem:(id)a0 sessionContext:(id)a1 downloadTrackersManager:(id)a2 etagIfLoser:(id)a3 stageFileName:(id)a4 options:(unsigned long long)a5;
- (BOOL)shouldRetryForError:(id)a0;
- (void)cancel;
- (void)downloadTrackedForFileObjectID:(id)a0 withEtagIfLoser:(id)a1 didFinishWithError:(id)a2;
- (void)_provideDocument:(id)a0;
- (void).cxx_destruct;
- (void)_provideItem;
- (id)initWithDocumentItem:(id)a0 sessionContext:(id)a1 downloadTrackersManager:(id)a2;
- (void)_finishAfterWaitingForDocumentsWithID:(id)a0 withEtagIfLoser:(id)a1 error:(id)a2;
- (void)_detachAllTrackedDocID:(id)a0 error:(id)a1;

@end
