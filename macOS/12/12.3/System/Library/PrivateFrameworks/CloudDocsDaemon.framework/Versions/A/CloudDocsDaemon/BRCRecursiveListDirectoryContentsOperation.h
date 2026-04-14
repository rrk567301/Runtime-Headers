@class BRCItemID, BRCListDirectoryContentsOperation, BRCServerZone, NSMutableArray;

@interface BRCRecursiveListDirectoryContentsOperation : BRCAutoCancelOperation <BRCListOperationDelegate> {
    BRCServerZone *_serverZone;
    NSMutableArray *_itemsToList;
    BRCItemID *_rootItemID;
    BRCListDirectoryContentsOperation *_activeListOp;
    NSMutableArray *_itemsFailedListing;
    NSMutableArray *_recursiveListCompletionBlocks;
}

@property (nonatomic) BOOL rescheduleApply;

- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (BOOL)shouldRetryForError:(id)a0;
- (void)listOperation:(id)a0 wasReplacedByOperation:(id)a1;
- (id)initWithItemID:(id)a0 zone:(id)a1 isUserWaiting:(BOOL)a2;
- (void)listNextItem;
- (void)fetchNextItemToList;
- (void)addRecursiveDirectoryListCompletionBlock:(id /* block */)a0;

@end
