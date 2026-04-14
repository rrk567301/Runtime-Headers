@class NSURL, BRCAccountSession, NSMutableArray, BRCTreeEnumerator, BRCDirectoryItem, NSString, NSSet, BRCDocumentItem, BRCListDirectoryContentsOperation, NSMutableSet, BRCXPCClient, BRCRecursiveListDirectoryContentsOperation, NSError;

@interface BRCFileProvidingRequestOperation : _BRCFrameworkOperation <BRCDownloadTracking, BRCReachabilityDelegate, BRCListOperationDelegate, BRCOperationSubclass> {
    BRCAccountSession *_session;
    BRCXPCClient *_client;
    NSURL *_url;
    BRCDirectoryItem *_directoryItem;
    BRCDocumentItem *_documentItem;
    BRCTreeEnumerator *_treeEnumerator;
    NSMutableSet *_trackerFileObjects;
    NSSet *_fileObjectIDsToCancel;
    NSMutableArray *_callbacks;
    NSError *_lastDownloadError;
    BOOL _isStillEnumeratingDirectory;
    BOOL _isFinished;
    BOOL _isMonitoringReachability;
    NSMutableSet *_appLibrariesMonitored;
    BRCListDirectoryContentsOperation *_listOp;
    BRCRecursiveListDirectoryContentsOperation *_recursiveList;
}

@property (nonatomic) BOOL isRecursive;
@property (nonatomic) BOOL wantsCurrentVersion;
@property (readonly, nonatomic) NSSet *trackedFileObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (void)addCompletionCallback:(id /* block */)a0;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (BOOL)shouldRetryForError:(id)a0;
- (void)networkReachabilityChanged:(BOOL)a0;
- (void)listOperation:(id)a0 wasReplacedByOperation:(id)a1;
- (void)downloadTrackedForFileObjectID:(id)a0 didFinishWithError:(id)a1;
- (id)initWithName:(id)a0 session:(id)a1 readingOptions:(unsigned long long)a2;
- (id)initWithURL:(id)a0 readingOptions:(unsigned long long)a1 client:(id)a2 session:(id)a3;
- (id)initWithDirectoryItem:(id)a0;
- (id)initWithDocumentItem:(id)a0 client:(id)a1 session:(id)a2;
- (void)_detachAllTrackedDocID:(id)a0 error:(id)a1;
- (void)_provideDocument:(id)a0;
- (void)_provideDirectoryContents:(id)a0 appLibrary:(id)a1;
- (void)_provideDirectoryRecursively:(id)a0;
- (void)_provideFlatDirectoryStructure:(id)a0;
- (void)_provideURL;
- (void)_provideItem;
- (void)_finishAfterWaitingForDocumentsWithID:(id)a0 error:(id)a1;

@end
