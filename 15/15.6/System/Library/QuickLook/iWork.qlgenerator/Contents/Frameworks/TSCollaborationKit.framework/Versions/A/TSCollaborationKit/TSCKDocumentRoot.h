@class TSCKCollaborationCommandHistory, NSMutableArray, TSCKActivityStreamTransformationManager, TSCKDocumentSupport, TSCKActivityStream;
@protocol TSCKDocumentRootDelegate;

@interface TSCKDocumentRoot : TSKDocumentRoot {
    NSMutableArray *_iCloudTeardownStack;
}

@property (readonly, nonatomic) TSCKDocumentSupport *tsck_documentSupport;
@property (readonly, weak, nonatomic) id<TSCKDocumentRootDelegate> tsck_delegate;
@property (readonly, nonatomic) char areActivityStreamAsyncTransformationsEnabled;
@property (readonly, nonatomic) char isActivityStreamEnabled;
@property (readonly, nonatomic) char areActivityStreamNotificationsSupported;
@property (readonly, nonatomic) TSCKActivityStream *activityStream;
@property (readonly, nonatomic) TSCKActivityStreamTransformationManager *activityStreamTransformationManager;
@property (readonly, nonatomic) unsigned long long maxMediaItemFileSize;
@property (readonly, nonatomic) unsigned long long maxEmbeddedMediaItemFileSize;
@property (readonly, nonatomic) unsigned long long maximumDocumentSize;
@property (readonly, nonatomic) unsigned long long availableSizeForMediaItems;
@property (readonly, nonatomic) unsigned long long minLargeDataLengthInBytes;
@property (readonly, nonatomic) char hasICloudConflict;
@property (readonly, nonatomic) char isCommandControllerConfiguredForCollaboration;
@property (readonly, nonatomic) TSCKCollaborationCommandHistory *collaborationCommandHistory;
@property (readonly, nonatomic) TSCKCollaborationCommandHistory *collaborationCommandHistoryIfLoaded;

+ (char)isActivityStreamEnabled;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)willClose;
- (long long)addObserverForICloudTeardownWithBlock:(id /* block */)a0;
- (char)hasICloudTeardownObserver;
- (void)removeICloudTeardownObserver:(long long)a0;
- (char)isCollaborativeClient;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)additionalDocumentSupportPropertiesForWrite;
- (void)backgroundDocumentDidLoad;
- (id)currentAuthorShareParticipantID;
- (long long)addObserverForICloudTeardownSuspendingCollaboration:(char)a0 block:(id /* block */)a1;
- (id)boostPrimaryThreadQualityOfService;
- (id)currentAuthorPrivateIDs;
- (void)documentDidLoadWithCommandDispatcher:(id)a0 commandExecutor:(id)a1;
- (void)dumpReaderWriterThreads;
- (char)isCollaborativeClientOrServer;
- (char)isCollaborativeServer;
- (void)notifyICloudTeardownObserversWithReason:(unsigned long long)a0;
- (void)p_addUploadObserver;
- (id)setUpControllersForBackground:(char)a0 commandExecutor:(id)a1;
- (char)shouldDropActivityStream;
- (char)shouldDropCachedCollaborationData;
- (char)shouldDropOperationHistoryWithDocumentRevision:(id)a0;

@end
