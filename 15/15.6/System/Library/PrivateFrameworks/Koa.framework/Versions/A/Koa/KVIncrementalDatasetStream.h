@interface KVIncrementalDatasetStream : KVDatasetStream

- (char)addOrUpdateItem:(id)a0 error:(id *)a1;
- (char)removeItemWithItemId:(id)a0 error:(id *)a1;
- (unsigned long long)priorVersion;
- (char)addOrUpdateCascadeItem:(id)a0 error:(id *)a1;

@end
