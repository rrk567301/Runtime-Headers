@interface IMDAttachmentRecordBatchFetcher : IMDRecordBatchFetcher

- (id)_queryPredicate;
- (id)_rowIDPredicate;
- (id)nextBatchWithSize:(unsigned long long)a0;

@end
