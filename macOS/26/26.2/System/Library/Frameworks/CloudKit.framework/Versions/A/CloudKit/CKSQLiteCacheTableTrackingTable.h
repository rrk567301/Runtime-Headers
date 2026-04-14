@interface CKSQLiteCacheTableTrackingTable : CKSQLiteTable

+ (id)dbProperties;
+ (Class)entryClass;
+ (id)defaultLogicalTableName;

- (id)updateEntryOldestExpireDate:(id)a0 oldestExpirationDate:(id)a1;

@end
