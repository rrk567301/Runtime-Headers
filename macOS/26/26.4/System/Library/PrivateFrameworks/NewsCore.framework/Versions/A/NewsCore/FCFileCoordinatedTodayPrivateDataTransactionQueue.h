@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayPrivateDataTransactionQueue : NSObject

@property (retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary;

- (void)dequeueTransactionsWithCompletion:(id /* block */)a0;
- (id)initWithFileURL:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)peekAtTransactionsSyncWithAccessor:(id /* block */)a0;
- (void)enqueueTransaction:(id)a0 withMaxTransactionCount:(unsigned long long)a1;

@end
