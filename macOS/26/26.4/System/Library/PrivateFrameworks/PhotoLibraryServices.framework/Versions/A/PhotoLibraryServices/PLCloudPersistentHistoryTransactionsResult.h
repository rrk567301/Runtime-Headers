@class NSString, NSArray, NSPersistentHistoryToken, PLPersistentHistoryTransactionIterator;

@interface PLCloudPersistentHistoryTransactionsResult : NSObject <PLCloudChangeEventsResult> {
    NSArray *_transactions;
    PLPersistentHistoryTransactionIterator *_transactionIterator;
    id /* block */ _isTransactionSyncableFilter;
}

@property (readonly) long long resultType;
@property (readonly, copy) NSString *currentTokenDescription;
@property (readonly, copy) NSPersistentHistoryToken *lastProcessedCoreDataToken;
@property (readonly) BOOL hasMoreEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_transactionCoalescingLimit;
+ (id /* block */)_isTransactionSyncableFilter;
+ (id)fetchTransactionsSinceToken:(id)a0 inContext:(id)a1;
+ (id /* block */)_coalescingLimitTest;
+ (long long)_changeCoalescingLimit;

- (BOOL)_sendLocalEvent:(id)a0 toEnumerationBlock:(id /* block */)a1;
- (id)_nextLocalEventUpToNonCoalescableTransaction;
- (void)_updateLastProcessedCoreDataToken;
- (id)initWithResultType:(long long)a0 transactionIterator:(id)a1;
- (void).cxx_destruct;
- (id)initWithSuccesfulTransactionIterator:(id)a0;
- (void)enumerateLocalEventsWithBlock:(id /* block */)a0;
- (id)initWithUnsuccessfulResultType:(long long)a0;

@end
