@interface CKSQLiteCacheTableTrackingTable : CKSQLiteTable

+ (id)dbProperties;
+ (id)defaultLogicalTableName;
+ (Class)entryClass;

- (id)updateEntryOldestExpireDate:(id)a0 oldestExpirationDate:(id)a1;

@end
