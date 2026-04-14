@interface CKDThrottleTableGroup : CKSQLiteTableGroup

+ (id)groupName;
+ (BOOL)rebootShouldClearData;

- (id)createTables;

@end
