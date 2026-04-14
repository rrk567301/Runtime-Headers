@class NSString, NSArray, NSDictionary, NSOperationQueue, ICSelectorDelayer, NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue, ICSearchIndex;

@interface ICSearchIndexer : NSObject <ICReindexAllItemsOperationDelegate, ICReindexing>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *indexingQueue;
@property (readonly, nonatomic) NSArray *_dataSources;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (copy, nonatomic) NSDictionary *dataSourcesByIdentifier;
@property (retain, nonatomic) id<ICSearchIndex> searchableIndex;
@property (retain, nonatomic) ICSelectorDelayer *changeProcessingDelayer;
@property (nonatomic, getter=isObservingChanges) BOOL observingChanges;
@property (nonatomic, getter=isActivelyReindexing) BOOL activelyReindexing;
@property (retain, nonatomic) NSMutableDictionary *retryTimers;
@property (nonatomic) BOOL allDataSourcesSuccessfullyStagedSinceLastReindex;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic) BOOL retryOnErrors;
@property (readonly, nonatomic) NSArray *dataSources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL fullyStagedSinceLastReindex;

+ (id)sharedIndexer;

- (void)deleteAllSearchableItemsWithCompletionHandler:(id /* block */)a0;
- (void)addDataSource:(id)a0;
- (void)reindexSearchableItemsWithObjectIDURIs:(id)a0 completionHandler:(id /* block */)a1;
- (id)dataSourceWithIdentifier:(id)a0;
- (void)forceDeleteAllProgressState;
- (id)newContextsForAllDataSources;
- (void)finishRemainingOperationsWithCompletionHandler:(id /* block */)a0;
- (void)clearRetryForSelector:(SEL)a0;
- (void)reindexOperationSuccessfullyStagedAllDataSources:(id)a0;
- (void)clearObjectIDsToProcessAndResetProgress;
- (void)processChanges;
- (void)reindexAllSearchableItemsWithCompletionHandler:(id /* block */)a0;
- (id)objectForManagedObjectIDURI:(id)a0 inContexts:(id)a1;
- (void)reindexSearchableItemsWithObjectIDURIs:(id)a0 inIndex:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)stopObservingChanges;
- (id)objectForSearchableItem:(id)a0 context:(id)a1;
- (id)objectsDictionaryForSearchableItems:(id)a0 inContexts:(id)a1;
- (void)retrySelector:(SEL)a0;
- (void)startObservingChanges;
- (void)reindexAllSearchableItemsInIndex:(id)a0 completionHandler:(id /* block */)a1;
- (void)dataSourceDidChange:(id)a0;
- (void)removeDataSource:(id)a0;
- (id)pendingReindexingOperation;
- (void)cancelIndexingOperationsWithCompletionHandler:(id /* block */)a0;
- (void)reindexAllSearchableItemsInIndex;
- (id)initWithSearchIndex:(id)a0;
- (id)objectsForSearchableItems:(id)a0 inContexts:(id)a1;

@end
