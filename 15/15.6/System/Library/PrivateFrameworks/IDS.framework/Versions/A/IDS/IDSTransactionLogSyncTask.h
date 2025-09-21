@interface IDSTransactionLogSyncTask : IDSTransactionLogTask

@property (copy, nonatomic) id /* block */ batchProcessingBlock;
@property (copy, nonatomic) id /* block */ knownRecordIDsFromList;
@property (nonatomic) char shouldContinueFromLastSyncPoint;

- (void).cxx_destruct;

@end
