@interface CKDThrottleTableGroup : CKSQLiteTableGroup

+ (id)groupName;
+ (BOOL)rebootShouldClearData;

- (void)createTables;

@end
