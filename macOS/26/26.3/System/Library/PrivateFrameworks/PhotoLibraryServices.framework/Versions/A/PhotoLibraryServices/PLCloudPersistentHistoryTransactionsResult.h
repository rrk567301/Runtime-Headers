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

+ (id /* block */)_isTransactionSyncableFilter;
+ (long long)_transactionCoalescingLimit;
+ (long long)_changeCoalescingLimit;
+ (id /* block */)_coalescingLimitTest;
+ (id)fetchTransactionsSinceToken:(id)a0 inContext:(id)a1;

- (void)enumerateLocalEventsWithBlock:(id /* block */)a0;
- (BOOL)_sendLocalEvent:(id)a0 toEnumerationBlock:(id /* block */)a1;
- (id)initWithResultType:(long long)a0 transactionIterator:(id)a1;
- (id)_nextLocalEventUpToNonCoalescableTransaction;
- (void).cxx_destruct;
- (id)initWithUnsuccessfulResultType:(long long)a0;
- (void)_updateLastProcessedCoreDataToken;
- (id)initWithSuccesfulTransactionIterator:(id)a0;

@end
