@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayPrivateDataTransactionQueue : NSObject

@property (retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary;

- (id)initWithFileURL:(id)a0;
- (id)init;
- (void)enqueueTransaction:(id)a0 withMaxTransactionCount:(unsigned long long)a1;
- (void)dequeueTransactionsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)peekAtTransactionsSyncWithAccessor:(id /* block */)a0;

@end
