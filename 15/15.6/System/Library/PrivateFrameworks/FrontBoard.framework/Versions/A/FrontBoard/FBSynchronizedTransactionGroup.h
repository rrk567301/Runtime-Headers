@class NSString, NSMutableSet;
@protocol FBSynchronizedTransactionGroupDelegate;

@interface FBSynchronizedTransactionGroup : FBTransaction <FBSynchronizedTransaction, FBSynchronizedTransactionDelegate> {
    char _commitAllowed;
    char _readyForCommit;
    char _didCommit;
    NSMutableSet *_synchronizedTransactions;
    NSMutableSet *_synchronizedTransactionsAwaitingCommitReadiness;
    NSMutableSet *_synchronizedTransactionsReadyToCommit;
}

@property (weak, nonatomic) id<FBSynchronizedTransactionGroupDelegate> synchronizationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (char)_shouldFailForChildTransaction:(id)a0;
- (char)_canBeInterrupted;
- (void)_childTransactionDidComplete:(id)a0;
- (void)_didComplete;
- (void)_checkPreconditionsAndCommitIfReady;
- (void)_performSynchronizedCommit:(id)a0;
- (void)_performSynchronizedCommitIfReady;
- (void)addSynchronizedTransaction:(id)a0;
- (char)isReadyForSynchronizedCommit;
- (void)performSynchronizedCommit;
- (void)synchronizedTransaction:(id)a0 didCommitSynchronizedTransactions:(id)a1;
- (void)synchronizedTransaction:(id)a0 willCommitSynchronizedTransactions:(id)a1;
- (void)synchronizedTransactionReadyToCommit:(id)a0;
- (id)synchronizedTransactions;

@end
