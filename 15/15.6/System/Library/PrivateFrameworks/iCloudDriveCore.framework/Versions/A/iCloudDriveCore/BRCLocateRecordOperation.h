@class NSString, CKRecordID, BRCServerZone, NSMutableArray;

@interface BRCLocateRecordOperation : _BRCOperation <BRCOperationSubclass> {
    unsigned long long _recordsFetched;
    unsigned long long _recordsFetchedTotalMetadataSize;
    unsigned long long _xattrsFetchedTotalSize;
    CKRecordID *_structureRecordID;
    BRCServerZone *_serverZone;
    char _exists;
    NSMutableArray *_locateRecordCompletionBlocks;
}

@property (readonly, nonatomic) CKRecordID *recordID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (char)shouldRetryForError:(id)a0;
- (id)createActivity;
- (void)addLocateRecordCompletionBlock:(id /* block */)a0;
- (void)_performAfterLocatingRecord:(id /* block */)a0;
- (void)cancelToBeReplacedByOperation:(id)a0;
- (id)initWithRecordID:(id)a0 serverZone:(id)a1 isUserWaiting:(char)a2 maxBackoff:(double)a3 sessionContext:(id)a4;

@end
