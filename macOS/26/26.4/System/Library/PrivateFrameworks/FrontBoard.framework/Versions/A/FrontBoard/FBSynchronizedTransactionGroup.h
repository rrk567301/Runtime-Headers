@class NSString, NSMutableSet;
@protocol FBSynchronizedTransactionGroupDelegate;

@interface FBSynchronizedTransactionGroup : FBTransaction <FBSynchronizedTransaction, FBSynchronizedTransactionDelegate> {
    BOOL _commitAllowed;
    BOOL _readyForCommit;
    BOOL _didCommit;
    NSMutableSet *_synchronizedTransactions;
    NSMutableSet *_synchronizedTransactionsAwaitingCommitReadiness;
    NSMutableSet *_synchronizedTransactionsReadyToCommit;
}

@property (weak, nonatomic) id<FBSynchronizedTransactionGroupDelegate> synchronizationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addSynchronizedTransaction:(id)a0;
- (void)_didComplete;
- (void)synchronizedTransaction:(id)a0 willCommitSynchronizedTransactions:(id)a1;
- (void)_checkPreconditionsAndCommitIfReady;
- (void)performSynchronizedCommit;
- (void)_performSynchronizedCommit:(id)a0;
- (void).cxx_destruct;
- (id)synchronizedTransactions;
- (id)init;
- (BOOL)isReadyForSynchronizedCommit;
- (BOOL)_shouldFailForChildTransaction:(id)a0;
- (void)_performSynchronizedCommitIfReady;
- (void)synchronizedTransactionReadyToCommit:(id)a0;
- (void)_childTransactionDidComplete:(id)a0;
- (BOOL)_canBeInterrupted;
- (void)synchronizedTransaction:(id)a0 didCommitSynchronizedTransactions:(id)a1;

@end
