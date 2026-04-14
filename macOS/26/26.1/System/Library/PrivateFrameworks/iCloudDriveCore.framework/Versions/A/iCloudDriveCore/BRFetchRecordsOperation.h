@class NSMutableSet;

@interface BRFetchRecordsOperation : CKFetchRecordsOperation {
    id /* block */ _fetchRecordsCompletionBlock;
    id /* block */ _perRecordCompletionBlock;
    NSMutableSet *_completedRecords;
}

- (void)setPerRecordCompletionBlock:(id /* block */)a0;
- (void)setFetchRecordsCompletionBlock:(id /* block */)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;

@end
