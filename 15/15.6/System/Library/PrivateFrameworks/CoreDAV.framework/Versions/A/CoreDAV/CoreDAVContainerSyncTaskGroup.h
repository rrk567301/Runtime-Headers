@class NSString, NSDictionary, NSURL, NSMutableSet, NSMutableArray, NSMutableDictionary;
@protocol CoreDAVLocalDBInfoProvider;

@interface CoreDAVContainerSyncTaskGroup : CoreDAVTaskGroup <CoreDAVDeleteTaskDelegate, CoreDAVPutTaskDelegate, CoreDAVGetTaskDelegate, CoreDAVPropPatchTaskDelegate> {
    int _phase;
    NSString *_nextSyncToken;
    NSMutableArray *_actions;
    NSMutableArray *_unsubmittedTasks;
    NSMutableSet *_syncReportDeletedURLs;
    NSMutableDictionary *_urlToETag;
    Class _appSpecificDataItemClass;
    char _syncItemOrder;
    NSMutableDictionary *_remainingUUIDsToAddActions;
    NSMutableDictionary *_remainingHREFsToModDeleteActions;
    NSMutableSet *_locationChangedURLs;
}

@property (retain, nonatomic) NSString *nextCTag;
@property (retain, nonatomic) NSString *previousSyncToken;
@property (nonatomic) unsigned long long unexpectedEmptySyncReportResponseRetryAttemptCount;
@property (nonatomic) unsigned long long insufficientStorageRetryCount;
@property (readonly, nonatomic) NSURL *folderURL;
@property (retain, nonatomic) NSString *previousCTag;
@property (nonatomic) char useSyncCollection;
@property (nonatomic) unsigned long long multiGetBatchSize;
@property (nonatomic) char useMultiGet;
@property (weak, nonatomic) id<CoreDAVLocalDBInfoProvider> delegate;
@property (nonatomic) unsigned long long maxIndependentTasks;
@property (retain, nonatomic) NSURL *addMemberURL;
@property (retain, nonatomic) NSDictionary *bulkRequests;
@property (retain, nonatomic) NSString *bulkChangeCheckCTag;
@property (nonatomic) char actionsOnly;
@property (readonly, nonatomic) NSMutableArray *localItemURLOrder;
@property (nonatomic) char ensureUpdatedCTag;
@property (nonatomic) unsigned long long maxRetryOnUnexpectedSyncTokenChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)_isInsufficientStorage:(id)a0;

- (void).cxx_destruct;
- (id)dataContentType;
- (void)cancelTaskGroup;
- (unsigned long long)_submitTasks;
- (void)applyAdditionalPropertiesFromPostTask:(id)a0;
- (void)applyAdditionalPropertiesFromPutTask:(id)a0;
- (void)bailWithError:(id)a0;
- (id)copyAdditionalResourcePropertiesToFetch;
- (id)copyGetEtagTaskWithPropertiesToFind:(id)a0;
- (id)copyGetTaskWithURL:(id)a0;
- (id)copyMultiGetTaskWithURLs:(id)a0;
- (id)copyPutTaskWithPayloadItem:(id)a0 forAction:(id)a1;
- (void)deleteResourceURLs:(id)a0;
- (id)initWithFolderURL:(id)a0 previousCTag:(id)a1 previousSyncToken:(id)a2 actions:(id)a3 syncItemOrder:(char)a4 context:(id)a5 accountInfoProvider:(id)a6 taskManager:(id)a7;
- (void)propFindTask:(id)a0 parsedResponses:(id)a1 error:(id)a2;
- (void)propPatchTask:(id)a0 parsedResponses:(id)a1 error:(id)a2;
- (void)receivedPropertiesToValues:(id)a0 forURL:(id)a1;
- (char)shouldDownloadResource:(id)a0 localETag:(id)a1 serverETag:(id)a2;
- (char)shouldFetchMoreETags;
- (char)shouldFetchResourceWithEtag:(id)a0 propertiesToValues:(id)a1;
- (void)startTaskGroup;
- (void)task:(id)a0 didFinishWithError:(id)a1;
- (void)taskGroupWillCancelWithError:(id)a0;
- (void)_bulkChange;
- (void)_bulkChangeTask:(id)a0 didFinishWithError:(id)a1;
- (void)_configureMultiGet:(id)a0;
- (void)_getCTag;
- (void)_getDataPayloads;
- (void)_getETags;
- (void)_getOrder;
- (void)_getTask:(id)a0 finishedWithParsedContents:(id)a1 deletedItems:(id)a2 error:(id)a3;
- (void)_postTask:(id)a0 didFinishWithError:(id)a1;
- (void)_pushActions;
- (void)_sendNextBatch;
- (void)_syncReportTask:(id)a0 didFinishWithError:(id)a1;
- (void)_tearDownAllUnsubmittedTasks;
- (Class)bulkChangeTaskClass;
- (id)copyPostTaskWithPayloadItem:(id)a0 forAction:(id)a1;
- (void)deleteTask:(id)a0 completedWithError:(id)a1;
- (void)getTask:(id)a0 data:(id)a1 error:(id)a2;
- (char)isWhitelistedError:(id)a0;
- (void)putTask:(id)a0 completedWithNewETag:(id)a1 error:(id)a2;
- (void)syncAway;

@end
