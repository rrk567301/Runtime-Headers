@class BRCItemID, NSString, BRCPrivateClientZone, BRCALRowID, NSMutableArray;

@interface BRCSharingProcessFolderSubitemsOperation : _BRCFrameworkOperation <BRCListOperationDelegate, BRCOperationSubclass> {
    unsigned long long _rowID;
    unsigned long long _batchSize;
    unsigned long long _failedSubitemsLeft;
    unsigned long long _processType;
    NSMutableArray *_sharedClientSubitems;
    NSMutableArray *_sharedServerSubitems;
    NSMutableArray *_aliasItemsToDelete;
    NSMutableArray *_shareIDsToDelete;
    NSMutableArray *_activeListOperations;
    BRCPrivateClientZone *_rootClientZone;
    BRCItemID *_rootItemID;
    BRCALRowID *_appLibraryRowID;
    char _isFSRoot;
    char _alreadyHasShareID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (char)shouldRetryForError:(id)a0;
- (id)createActivity;
- (char)_completeAfterProcessingClientTruthIfNecessaryWithError:(id)a0;
- (char)_completeAfterProcessingServerTruthIfNecessaryWithError:(id)a0;
- (void)_stopObservingListOperation;
- (id)computeURLForItemID:(id)a0 rootURL:(id)a1;
- (char)deleteShareInfoFromZone:(id)a0 zoneRowID:(id)a1 itemID:(id)a2 sharingOptions:(unsigned long long)a3 itemsTable:(id)a4;
- (id)initWithItem:(id)a0 sessionContext:(id)a1 processType:(unsigned long long)a2 maxSubitemsToFail:(unsigned long long)a3;
- (void)listOperation:(id)a0 wasReplacedByOperation:(id)a1;
- (void)processClientTruthWithCompletion:(id /* block */)a0;
- (void)processServerItemsUnderItemID:(id)a0 completion:(id /* block */)a1;
- (void)processServerTruthWithCompletion:(id /* block */)a0;
- (void)removeSharedSubitemsWithCompletion:(id /* block */)a0;

@end
