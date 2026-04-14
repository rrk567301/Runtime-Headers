@interface BRFetchRecordsOperation : CKFetchRecordsOperation {
    id /* block */ _fetchRecordsCompletionBlock;
}

- (id)init;
- (void).cxx_destruct;
- (void)setFetchRecordsCompletionBlock:(id /* block */)a0;

@end
