@class NSError, NSSet, NSString, BRCXPCClient, NSMutableSet, BRCDocumentItem, NSMutableArray;
@protocol BRCDownloadTrackerManaging;

@interface BRCFileProvidingRequestOperation : _BRCFrameworkOperation <BRCDownloadTracking, BRCReachabilityDelegate, BRCOperationSubclass> {
    NSString *_etagIfLoser;
    NSString *_stageFileName;
    unsigned long long _options;
    BRCXPCClient *_client;
    NSMutableSet *_trackerFileObjects;
    NSMutableSet *_appLibrariesMonitored;
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

- (BOOL)shouldRetryForError:(id)a0;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)cancel;
- (int)kind;
- (void)networkReachabilityChanged:(BOOL)a0;
- (void)_provideItem;
- (id)initWithDocumentItem:(id)a0 client:(id)a1 sessionContext:(id)a2 downloadTrackersManager:(id)a3 etagIfLoser:(id)a4 stageFileName:(id)a5 options:(unsigned long long)a6;
- (void)downloadTrackedForFileObjectID:(id)a0 withEtagIfLoser:(id)a1 didFinishWithError:(id)a2;
- (id)initWithDocumentItem:(id)a0 client:(id)a1 sessionContext:(id)a2 downloadTrackersManager:(id)a3;
- (void)_provideDocument:(id)a0;
- (void)addCompletionCallback:(id /* block */)a0;
- (void)_detachAllTrackedDocID:(id)a0 error:(id)a1;
- (void)_finishAfterWaitingForDocumentsWithID:(id)a0 withEtagIfLoser:(id)a1 error:(id)a2;
- (void).cxx_destruct;

@end
