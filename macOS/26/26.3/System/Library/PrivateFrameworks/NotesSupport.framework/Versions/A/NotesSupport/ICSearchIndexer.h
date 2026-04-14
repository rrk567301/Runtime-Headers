@class NSString, NSArray, NSDictionary, NSOperationQueue, ICSelectorDelayer, NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue, ICSearchIndex;

@interface ICSearchIndexer : NSObject <ICReindexing>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *indexingQueue;
@property (readonly, nonatomic) NSArray *_dataSources;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (copy, nonatomic) NSDictionary *dataSourcesByIdentifier;
@property (retain, nonatomic) id<ICSearchIndex> searchableIndex;
@property (retain, nonatomic) ICSelectorDelayer *changeProcessingDelayer;
@property (nonatomic, getter=isObservingChanges) BOOL observingChanges;
@property (nonatomic, getter=isActivelyReindexing) BOOL activelyReindexing;
@property (retain, nonatomic) NSMutableDictionary *retryTimers;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic) BOOL retryOnErrors;
@property (readonly, nonatomic) NSArray *dataSources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIndexer;

- (void)finishRemainingOperationsWithCompletionHandler:(id /* block */)a0;
- (void)retrySelector:(SEL)a0;
- (id)newContextsForAllDataSources;
- (void)dataSourceDidChange:(id)a0;
- (id)dataSourceWithIdentifier:(id)a0;
- (void)clearObjectIDsToProcess;
- (void)reindexAllSearchableItemsInIndex:(id)a0 completionHandler:(id /* block */)a1;
- (void)processChanges;
- (void)cancelIndexingOperationsWithCompletionHandler:(id /* block */)a0;
- (id)objectForSearchableItem:(id)a0 context:(id)a1;
- (void)reindexSearchableItemsWithObjectIDURIs:(id)a0 inIndex:(id)a1 completionHandler:(id /* block */)a2;
- (id)objectsDictionaryForSearchableItems:(id)a0 inContexts:(id)a1;
- (void)addDataSource:(id)a0;
- (void)startObservingChanges;
- (void)reindexSearchableItemsWithObjectIDURIs:(id)a0 completionHandler:(id /* block */)a1;
- (void)reindexAllSearchableItemsWithCompletionHandler:(id /* block */)a0;
- (id)initWithSearchIndex:(id)a0;
- (void).cxx_destruct;
- (void)stopObservingChanges;
- (void)deleteAllSearchableItemsWithCompletionHandler:(id /* block */)a0;
- (void)removeDataSource:(id)a0;
- (void)reindexAllSearchableItemsInIndex;
- (id)objectForManagedObjectIDURI:(id)a0 inContexts:(id)a1;
- (id)objectsForSearchableItems:(id)a0 inContexts:(id)a1;
- (void)clearRetryForSelector:(SEL)a0;
- (id)pendingReindexingOperation;

@end
