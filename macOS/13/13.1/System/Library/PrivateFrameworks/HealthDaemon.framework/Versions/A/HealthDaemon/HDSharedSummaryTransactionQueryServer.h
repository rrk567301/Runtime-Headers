@interface HDSharedSummaryTransactionQueryServer : HDQueryServer <HDSharedSummaryManagerObserver>

+ (Class)queryClass;

- (void)_queue_start;
- (void)_queue_didDeactivate;
- (void)sharedSummaryManagerCommittedTransactionsDidChange:(id)a0;

@end
