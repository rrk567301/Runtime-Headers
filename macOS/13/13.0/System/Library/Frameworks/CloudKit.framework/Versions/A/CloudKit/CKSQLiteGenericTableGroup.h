@interface CKSQLiteGenericTableGroup : CKSQLiteTableGroup

+ (BOOL)supportsGroupCreation;

- (id)createTables;
- (BOOL)validateTables:(id)a0;

@end
