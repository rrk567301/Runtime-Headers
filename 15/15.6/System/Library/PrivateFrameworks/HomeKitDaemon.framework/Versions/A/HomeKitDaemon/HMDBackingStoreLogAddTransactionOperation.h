@class HMDBackingStoreTransactionBlock;

@interface HMDBackingStoreLogAddTransactionOperation : HMDBackingStoreOperation

@property (retain, nonatomic) HMDBackingStoreTransactionBlock *transaction;
@property (nonatomic) long long pushFlags;
@property (readonly, nonatomic) char isAtomicSaveEnabled;

- (void).cxx_destruct;
- (id)initWithTransaction:(id)a0;
- (id)initWithAtomicSaveEnabled:(char)a0 transaction:(id)a1;
- (id)mainReturningError;

@end
