@interface HDSharedSummaryTransactionQueryServer : HDQueryServer <HDSharedSummaryManagerObserver> {
    BOOL _committedTransactions;
}

+ (Class)queryClass;

- (void)_queue_start;
- (void)_queue_didDeactivate;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)sharedSummaryManagerCommittedTransactionsDidChange:(id)a0;

@end
