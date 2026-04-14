@class BRCItemID, NSString, CKRecordID, BRCItemGlobalID, BRCServerZone, NSMutableArray;

@interface BRCFetchShareAliasOperation : _BRCOperation <BRCOperationSubclass> {
    CKRecordID *_recordID;
    BRCServerZone *_serverZone;
    BRCItemID *_parentItemID;
    NSMutableArray *_fetchShareAliasCompletionBlocks;
}

@property (readonly, nonatomic) BRCItemGlobalID *targetItemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (BOOL)shouldRetryForError:(id)a0;
- (id)createActivity;
- (void)cancelToBeReplacedByOperation:(id)a0;
- (id)initWithTarget:(id)a0 aliasZone:(id)a1 isUserWaiting:(BOOL)a2;
- (void)addFetchShareAliasCompletionBlock:(id /* block */)a0;
- (void)_performAfterFetchingAlias:(id /* block */)a0;

@end
