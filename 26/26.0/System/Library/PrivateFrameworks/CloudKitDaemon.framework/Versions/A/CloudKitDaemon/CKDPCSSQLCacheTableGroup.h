@interface CKDPCSSQLCacheTableGroup : CKSQLiteContainerAttributedTableGroup

+ (id)groupIdentifierForContainerID:(id)a0 accountOverrideInfo:(id)a1;
+ (BOOL)rebootShouldClearData;
+ (id)groupNameForContainerID:(id)a0 accountOverrideInfo:(id)a1;

- (id)cacheTable;
- (void)createTables;

@end
