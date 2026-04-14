@interface CKSQLiteTOCBaseTable : CKSQLiteTable

+ (id)logicalTableName;
+ (id)dbTableName;

- (BOOL)_useTemporaryTables;

@end
