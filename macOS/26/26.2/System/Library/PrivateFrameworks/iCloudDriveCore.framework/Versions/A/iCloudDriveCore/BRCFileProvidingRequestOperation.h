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

- (void)downloadTrackedForFileObjectID:(id)a0 withEtagIfLoser:(id)a1 didFinishWithError:(id)a2;
- (int)kind;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)cancel;
- (void)networkReachabilityChanged:(BOOL)a0;
- (id)initWithDocumentItem:(id)a0 client:(id)a1 sessionContext:(id)a2 downloadTrackersManager:(id)a3 etagIfLoser:(id)a4 stageFileName:(id)a5 options:(unsigned long long)a6;
- (BOOL)shouldRetryForError:(id)a0;
- (void)main;
- (void)_detachAllTrackedDocID:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)_provideItem;
- (void)_finishAfterWaitingForDocumentsWithID:(id)a0 withEtagIfLoser:(id)a1 error:(id)a2;
- (void)_provideDocument:(id)a0;
- (id)initWithDocumentItem:(id)a0 client:(id)a1 sessionContext:(id)a2 downloadTrackersManager:(id)a3;
- (void)addCompletionCallback:(id /* block */)a0;

@end
