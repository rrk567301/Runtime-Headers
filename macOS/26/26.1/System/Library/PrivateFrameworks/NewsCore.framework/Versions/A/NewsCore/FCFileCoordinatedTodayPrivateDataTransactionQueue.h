@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayPrivateDataTransactionQueue : NSObject

@property (retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary;

- (id)initWithFileURL:(id)a0;
- (BOOL)peekAtTransactionsSyncWithAccessor:(id /* block */)a0;
- (void)dequeueTransactionsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)enqueueTransaction:(id)a0 withMaxTransactionCount:(unsigned long long)a1;
- (id)init;

@end
