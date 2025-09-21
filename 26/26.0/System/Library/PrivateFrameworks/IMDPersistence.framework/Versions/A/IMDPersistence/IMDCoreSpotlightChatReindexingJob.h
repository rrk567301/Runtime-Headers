@class IMSpotlightClientState, IMTimingCollection, IMDChatRecordBatchFetcher;
@protocol IMDSpotlightIndex, IMDCoreSpotlightChatReindexingJobDelegate;

@interface IMDCoreSpotlightChatReindexingJob : NSObject

@property (readonly, nonatomic) IMDChatRecordBatchFetcher *batchFetcher;
@property (readonly, nonatomic) IMSpotlightClientState *clientState;
@property (readonly, nonatomic) id<IMDSpotlightIndex> index;
@property (readonly, nonatomic) long long reason;
@property (readonly, weak, nonatomic) id<IMDCoreSpotlightChatReindexingJobDelegate> delegate;
@property (nonatomic) long long processedChats;
@property (readonly, nonatomic) IMTimingCollection *timingCollection;

- (void).cxx_destruct;
- (id)_chatDictionaryForChatAtIndex:(unsigned long long)a0 withChats:(id)a1;
- (void)_indexAllSearchableItemsWithCompletionBlock:(id /* block */)a0;
- (void)_indexNextBatchOfSearchableItemsWithCompletionBlock:(id /* block */)a0;
- (id)_newSearchableChatItemsForChats:(id)a0;
- (id)_nextBatchOfSearchableItems;
- (id)initWithIndex:(id)a0 reason:(long long)a1 delegate:(id)a2;
- (void)runWithCompletionBlock:(id /* block */)a0;

@end
