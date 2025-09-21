@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayPrivateDataTransactionQueue : NSObject

@property (retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0;
- (void)dequeueTransactionsWithCompletion:(id /* block */)a0;
- (void)enqueueTransaction:(id)a0 withMaxTransactionCount:(unsigned long long)a1;
- (char)peekAtTransactionsSyncWithAccessor:(id /* block */)a0;

@end
