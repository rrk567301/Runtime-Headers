@class IMTimingCollection, IMDMessageRecordBatchFetcher, NSMutableArray, NSCache;

@interface IMDThreadSafeMessageDictionaryMapper : NSObject

@property (readonly, nonatomic) IMDMessageRecordBatchFetcher *batchFetcher;
@property (readonly, nonatomic) IMTimingCollection *timingCollection;
@property (readonly, nonatomic) NSCache *chatDictionaries;
@property (retain, nonatomic) NSMutableArray *indexableDictionaries;
@property (nonatomic) unsigned long long processedMessageCount;
@property (nonatomic) unsigned long long lastIndexedRowID;
@property (nonatomic) unsigned long long maxMessagesToProcess;
@property (nonatomic) unsigned long long databaseBatchSize;
@property (nonatomic) BOOL requiresAttachments;

- (void).cxx_destruct;
- (void)_generateIndexableDictionariesForMessageRecords:(id)a0;
- (BOOL)_generateNextBatchOfIndexableDictionaries;
- (id)_loadChatDictionariesForMessagesWithGUIDs:(id)a0;
- (id)_loadChatsWithGUIDs:(id)a0;
- (unsigned long long)_messageRecordBatchSize;
- (id)_nextBatchOfMessageRecords;
- (id)initForFetchingMessageGUIDs:(id)a0 timingCollection:(id)a1;
- (id)initWithBatchFetcher:(id)a0;
- (id)initWithBatchFetcher:(id)a0 timingCollection:(id)a1;
- (id)mapWithBlock:(id /* block */)a0;
- (BOOL)processOnceWithBlock:(id /* block */)a0;
- (void)processWithBlock:(id /* block */)a0;

@end
