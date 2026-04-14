@interface CKDPCSSQLCacheTableGroup : CKSQLiteContainerAttributedTableGroup

+ (BOOL)rebootShouldClearData;
+ (id)groupIdentifierForContainerID:(id)a0 accountOverrideInfo:(id)a1;
+ (id)groupNameForContainerID:(id)a0 accountOverrideInfo:(id)a1;

- (void)createTables;
- (id)cacheTable;

@end
