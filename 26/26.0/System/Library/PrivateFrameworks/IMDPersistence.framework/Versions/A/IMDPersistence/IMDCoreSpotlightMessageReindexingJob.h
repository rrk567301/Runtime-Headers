@class IMSpotlightClientState, IMTimingCollection, NSMutableArray;
@protocol IMDSpotlightIndex, IMDCoreSpotlightMessageReindexingJobDelegate;

@interface IMDCoreSpotlightMessageReindexingJob : NSObject

@property (readonly, nonatomic) unsigned long long batchSize;
@property (readonly, nonatomic) id<IMDSpotlightIndex> index;
@property (readonly, nonatomic) IMTimingCollection *timingCollection;
@property (readonly, nonatomic) long long reason;
@property (nonatomic) BOOL hasMoreToIndex;
@property (nonatomic) unsigned long long indexedCount;
@property (readonly, weak, nonatomic) id<IMDCoreSpotlightMessageReindexingJobDelegate> delegate;
@property (retain, nonatomic) IMSpotlightClientState *clientState;
@property (nonatomic) unsigned long long messageRecordCount;
@property (nonatomic) unsigned long long messagesWithItemsGeneratedCount;
@property (retain, nonatomic) NSMutableArray *searchableItems;
@property (retain, nonatomic) NSMutableArray *rejectedItems;
@property (retain, nonatomic) NSMutableArray *guidsInBatch;

- (void)runWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_generateSearchableItems;
- (unsigned long long)_generateSearchableItemsForMessageItemDictionary:(id)a0 chatDictionary:(id)a1;
- (void)_indexMoreWithCompletionBlock:(id /* block */)a0;
- (void)_indexSearchableItemsWithCompletionBlock:(id /* block */)a0;
- (void)_indexingFinished;
- (unsigned long long)_remainingToIndex;
- (BOOL)_shouldIndexMore;
- (unsigned long long)_subBatchSize;
- (id)initWithBatchSize:(long long)a0 index:(id)a1 delegate:(id)a2 reason:(long long)a3;

@end
