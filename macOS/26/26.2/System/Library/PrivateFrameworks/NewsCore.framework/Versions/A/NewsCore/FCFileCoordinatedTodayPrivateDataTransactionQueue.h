@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayPrivateDataTransactionQueue : NSObject

@property (retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary;

- (BOOL)peekAtTransactionsSyncWithAccessor:(id /* block */)a0;
- (id)initWithFileURL:(id)a0;
- (void).cxx_destruct;
- (void)enqueueTransaction:(id)a0 withMaxTransactionCount:(unsigned long long)a1;
- (void)dequeueTransactionsWithCompletion:(id /* block */)a0;
- (id)init;

@end
