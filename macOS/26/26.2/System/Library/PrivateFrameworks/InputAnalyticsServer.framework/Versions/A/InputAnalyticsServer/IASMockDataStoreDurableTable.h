@interface IASMockDataStoreDurableTable : IASMockDataStoreTable

+ (unsigned long long)retentionPeriod;

- (BOOL)cleanup;
- (BOOL)cleanupWithCutoffDate:(id)a0;
- (id)initWithName:(id)a0 withTableVersion:(id)a1 withSchema:(id)a2 withMigrator:(id)a3;

@end
