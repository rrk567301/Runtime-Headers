@class NSMutableSet;

@interface BRFetchRecordsOperation : CKFetchRecordsOperation {
    id /* block */ _fetchRecordsCompletionBlock;
    id /* block */ _perRecordCompletionBlock;
    NSMutableSet *_completedRecords;
}

- (void)setFetchRecordsCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setPerRecordCompletionBlock:(id /* block */)a0;
- (void)dealloc;

@end
