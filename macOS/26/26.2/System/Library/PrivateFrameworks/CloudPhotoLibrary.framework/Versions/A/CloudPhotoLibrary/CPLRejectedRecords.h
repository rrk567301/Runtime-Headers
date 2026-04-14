@class NSMutableDictionary;

@interface CPLRejectedRecords : NSObject {
    NSMutableDictionary *_records;
    NSMutableDictionary *_reasons;
}

- (unsigned long long)count;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)recordWithScopedIdentifier:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)init;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)enumerateRecordsAndReasonsUsingBlock:(id /* block */)a0;
- (id)rejectedDescriptions;
- (BOOL)rejectsTheSameRecordsAs:(id)a0;
- (void)removeRejectedRecordsWithScopedIdentifiers:(id)a0;

@end
