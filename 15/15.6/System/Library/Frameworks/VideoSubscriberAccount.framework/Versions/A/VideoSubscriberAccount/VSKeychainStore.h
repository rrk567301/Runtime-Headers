@interface VSKeychainStore : NSObject

- (id)addItem:(id)a0 error:(id *)a1;
- (char)deleteItemsMatchingQuery:(id)a0 error:(id *)a1;
- (char)_fixUpdateConflictForItemWithAttributes:(id)a0 andAttributesToUpdate:(id)a1;
- (id)findItemsMatchingQuery:(id)a0 error:(id *)a1;
- (char)updateAttributes:(id)a0 ofItemsMatchingQuery:(id)a1 attemptCount:(long long)a2 error:(id *)a3;
- (char)updateAttributes:(id)a0 ofItemsMatchingQuery:(id)a1 error:(id *)a2;

@end
