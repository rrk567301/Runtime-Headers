@class BRCItemID, NSString, CKRecordID, BRCServerZone, NSMutableArray;

@interface BRCFetchParentChainOperation : _BRCOperation <BRCOperationSubclass> {
    CKRecordID *_parentRecordID;
    BRCServerZone *_serverZone;
    BRCItemID *_parentID;
    NSMutableArray *_fetchParentChainCompletionBlocks;
}

@property (readonly, nonatomic) BRCItemID *parentIDToList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (BOOL)shouldRetryForError:(id)a0;
- (id)createActivity;
- (void)_fetchParentChain:(id)a0;
- (void)addFetchParentChainCompletionBlock:(id /* block */)a0;
- (id)initWithParentID:(id)a0 zone:(id)a1 isUserWaiting:(BOOL)a2;
- (void)cancelToBeReplacedByOperation:(id)a0;

@end
