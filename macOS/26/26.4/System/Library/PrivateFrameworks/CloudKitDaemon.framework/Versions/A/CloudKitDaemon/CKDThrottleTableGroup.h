@interface CKDThrottleTableGroup : CKSQLiteTableGroup

+ (BOOL)rebootShouldClearData;
+ (id)groupName;

- (void)createTables;

@end
