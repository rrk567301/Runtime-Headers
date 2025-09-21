@class NSMutableDictionary;

@interface CPLRejectedRecords : NSObject {
    NSMutableDictionary *_records;
    NSMutableDictionary *_reasons;
}

- (id)objectForKeyedSubscript:(id)a0;
- (unsigned long long)count;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)init;
- (id)recordWithScopedIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)enumerateRecordsAndReasonsUsingBlock:(id /* block */)a0;
- (id)rejectedDescriptions;
- (BOOL)rejectsTheSameRecordsAs:(id)a0;
- (void)removeRejectedRecordsWithScopedIdentifiers:(id)a0;

@end
