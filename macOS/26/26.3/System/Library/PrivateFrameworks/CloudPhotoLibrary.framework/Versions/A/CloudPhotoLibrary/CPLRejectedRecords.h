@class NSMutableDictionary;

@interface CPLRejectedRecords : NSObject {
    NSMutableDictionary *_records;
    NSMutableDictionary *_reasons;
}

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (unsigned long long)count;
- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)recordWithScopedIdentifier:(id)a0;
- (void)enumerateRecordsAndReasonsUsingBlock:(id /* block */)a0;
- (id)rejectedDescriptions;
- (BOOL)rejectsTheSameRecordsAs:(id)a0;
- (void)removeRejectedRecordsWithScopedIdentifiers:(id)a0;

@end
