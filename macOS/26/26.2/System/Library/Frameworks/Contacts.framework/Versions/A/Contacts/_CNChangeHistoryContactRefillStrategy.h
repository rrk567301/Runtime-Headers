@class NSArray, CNContactStore;

@interface _CNChangeHistoryContactRefillStrategy : NSObject <CNEnumeratorRefillStrategy> {
    BOOL _unifyResults;
    NSArray *_keys;
    CNContactStore *_contactStore;
}

- (void).cxx_destruct;
- (id)objectsRepresentedByBatch:(id)a0;
- (id)batchesToRepresentObjects:(id)a0 suggestedBatchSize:(unsigned long long)a1;

@end
