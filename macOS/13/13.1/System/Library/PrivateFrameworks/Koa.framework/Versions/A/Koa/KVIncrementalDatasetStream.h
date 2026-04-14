@interface KVIncrementalDatasetStream : KVDatasetStream

- (unsigned long long)priorVersion;
- (BOOL)removeItemWithItemId:(id)a0 error:(id *)a1;
- (BOOL)addOrUpdateItem:(id)a0 error:(id *)a1;

@end
