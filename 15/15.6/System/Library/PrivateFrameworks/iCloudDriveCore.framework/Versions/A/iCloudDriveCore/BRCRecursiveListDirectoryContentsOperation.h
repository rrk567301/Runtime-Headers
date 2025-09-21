@class BRCItemID, BRCListDirectoryContentsOperation, NSMutableSet, BRCServerZone, NSMutableArray;

@interface BRCRecursiveListDirectoryContentsOperation : BRCAutoCancelOperation <BRCListOperationDelegate> {
    BRCServerZone *_serverZone;
    NSMutableSet *_itemsToList;
    BRCItemID *_rootItemID;
    BRCListDirectoryContentsOperation *_activeListOp;
    NSMutableSet *_itemsFailedListing;
    NSMutableArray *_recursiveListCompletionBlocks;
    id /* block */ _rescheduleApplyBlock;
}

@property (nonatomic) char rescheduleApply;

- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (char)shouldRetryForError:(id)a0;
- (char)_finishIfBlockedFromListing;
- (void)addRecursiveDirectoryListCompletionBlock:(id /* block */)a0;
- (void)fetchNextItemToList;
- (id)initWithItemID:(id)a0 sessionContext:(id)a1 zone:(id)a2 isUserWaiting:(char)a3 rescheduleApplyBlock:(id /* block */)a4;
- (void)listNextItem;
- (void)listOperation:(id)a0 wasReplacedByOperation:(id)a1;
- (void)listOrFetchNextItem;

@end
