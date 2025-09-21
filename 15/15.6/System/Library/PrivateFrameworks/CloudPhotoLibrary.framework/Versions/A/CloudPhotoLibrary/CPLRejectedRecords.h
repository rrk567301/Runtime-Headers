@class NSMutableDictionary;

@interface CPLRejectedRecords : NSObject {
    NSMutableDictionary *_records;
    NSMutableDictionary *_reasons;
}

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)enumerateRecordsAndReasonsUsingBlock:(id /* block */)a0;
- (id)recordWithScopedIdentifier:(id)a0;
- (id)rejectedDescriptions;
- (char)rejectsTheSameRecordsAs:(id)a0;
- (void)removeRejectedRecordsWithScopedIdentifiers:(id)a0;

@end
