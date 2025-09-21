@interface CKSQLiteTOCBaseTable : CKSQLiteTable

+ (id)dbTableName;
+ (id)logicalTableName;

- (BOOL)_useTemporaryTables;

@end
