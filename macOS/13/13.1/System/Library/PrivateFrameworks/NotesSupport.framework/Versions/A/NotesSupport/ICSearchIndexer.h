@class NSString, NSArray, CSSearchableIndex, NSMutableDictionary, NSDictionary, NSOperationQueue, NSObject, ICSelectorDelayer;
@protocol OS_dispatch_queue;

@interface ICSearchIndexer : NSObject <CSSearchableIndexDelegate, ICReindexing>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *indexingQueue;
@property (readonly, nonatomic) NSArray *_dataSources;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (copy, nonatomic) NSDictionary *dataSourcesByIdentifier;
@property (retain, nonatomic) CSSearchableIndex *searchableIndex;
@property (retain, nonatomic) ICSelectorDelayer *changeProcessingDelayer;
@property (nonatomic, getter=isObservingChanges) BOOL observingChanges;
@property (retain, nonatomic) NSMutableDictionary *retryTimers;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic) BOOL retryOnErrors;
@property (readonly, nonatomic) NSArray *dataSources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIndexer;

- (id)init;
- (void).cxx_destruct;
- (void)deleteAllSearchableItemsWithCompletionHandler:(id /* block */)a0;
- (void)searchableIndex:(id)a0 reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)a1;
- (void)searchableIndex:(id)a0 reindexSearchableItemsWithIdentifiers:(id)a1 acknowledgementHandler:(id /* block */)a2;
- (void)addDataSource:(id)a0;
- (void)removeDataSource:(id)a0;
- (void)dataSourceDidChange:(id)a0;
- (void)stopObservingChanges;
- (void)startObservingChanges;
- (void)clearObjectIDsToProcess;
- (id)objectForSearchableItem:(id)a0 context:(id)a1;
- (void)reindexAllSearchableItemsWithCompletionHandler:(id /* block */)a0;
- (void)reindexSearchableItemsWithObjectIDURIs:(id)a0 completionHandler:(id /* block */)a1;
- (void)processChanges;
- (void)reindexAllSearchableItemsInIndex;
- (id)dataSourceWithIdentifier:(id)a0;
- (id)newContextsForAllDataSources;
- (void)cancelIndexingOperationsWithCompletionHandler:(id /* block */)a0;
- (void)finishRemainingOperationsWithCompletionHandler:(id /* block */)a0;
- (id)pendingReindexingOperation;
- (void)reindexAllSearchableItemsInIndex:(id)a0 completionHandler:(id /* block */)a1;
- (void)reindexSearchableItemsWithObjectIDURIs:(id)a0 inIndex:(id)a1 completionHandler:(id /* block */)a2;
- (id)objectsForSearchableItems:(id)a0 inContexts:(id)a1;
- (id)objectsDictionaryForSearchableItems:(id)a0 inContexts:(id)a1;
- (id)objectForManagedObjectIDURI:(id)a0 inContexts:(id)a1;
- (void)retrySelector:(SEL)a0;
- (void)clearRetryForSelector:(SEL)a0;

@end
