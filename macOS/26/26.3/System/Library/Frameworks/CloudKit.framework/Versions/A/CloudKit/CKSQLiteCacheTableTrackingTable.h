@interface CKSQLiteCacheTableTrackingTable : CKSQLiteTable

+ (Class)entryClass;
+ (id)defaultLogicalTableName;
+ (id)dbProperties;

- (id)updateEntryOldestExpireDate:(id)a0 oldestExpirationDate:(id)a1;

@end
