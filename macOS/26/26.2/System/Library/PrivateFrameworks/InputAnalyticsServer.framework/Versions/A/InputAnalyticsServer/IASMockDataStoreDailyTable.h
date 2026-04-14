@interface IASMockDataStoreDailyTable : IASMockDataStoreTable

+ (unsigned long long)retentionPeriod;

- (BOOL)cleanup;
- (id)initWithName:(id)a0 withTableVersion:(id)a1 withSchema:(id)a2 withMigrator:(id)a3;

@end
