@interface CKDPCSSQLCacheTableGroup : CKSQLiteTableGroup

+ (BOOL)rebootShouldClearData;
+ (id)groupIdentifierForContainerID:(id)a0 accountOverrideInfo:(id)a1;
+ (id)cacheTableGroupInDatabase:(id)a0 containerID:(id)a1 accountOverrideInfo:(id)a2;

- (id)createTables;
- (id)cacheTable;

@end
