@class NSMutableDictionary;

@interface CPLRejectedRecords : NSObject {
    NSMutableDictionary *_records;
    NSMutableDictionary *_reasons;
}

- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)count;
- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)recordWithScopedIdentifier:(id)a0;
- (void)removeRejectedRecordsWithScopedIdentifiers:(id)a0;
- (void)enumerateRecordsAndReasonsUsingBlock:(id /* block */)a0;
- (BOOL)rejectsTheSameRecordsAs:(id)a0;
- (id)rejectedDescriptions;

@end
