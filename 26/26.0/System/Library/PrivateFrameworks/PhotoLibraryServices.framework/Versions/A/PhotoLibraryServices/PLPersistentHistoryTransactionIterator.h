@class NSMutableDictionary, NSPersistentHistoryToken, NSArray, NSManagedObjectContext;

@interface PLPersistentHistoryTransactionIterator : NSObject {
    NSArray *_transactions;
    unsigned long long _transactionIndex;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSManagedObjectContext *context;
@property (readonly, copy, nonatomic) NSPersistentHistoryToken *lastIteratedToken;
@property (retain, nonatomic) NSMutableDictionary *userInfo;

+ (id)iteratorSinceToken:(id)a0 withManagedObjectObjectContext:(id)a1 error:(id *)a2;
+ (id)iteratorSinceMarker:(id)a0 withFetchRequest:(id)a1 managedObjectObjectContext:(id)a2 error:(id *)a3;

- (BOOL)enumerateOneTransactionWithBlock:(id /* block */)a0;
- (void)enumerateRemainingTransactionsWithBlock:(id /* block */)a0;
- (BOOL)hasMoreTransactions;
- (id)_safeTransactionAtIndex:(unsigned long long)a0;
- (id)initWithTransactions:(id)a0 managedObjectObjectContext:(id)a1;
- (void).cxx_destruct;

@end
