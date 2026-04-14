@interface IMDWhitetailToCoralDowngradeHelper : IMDDatabaseDowngradeHelper

+ (id)arrayOfCreateTablesSQL;
+ (id)arrayOfTableNames;
+ (id)arrayOfCreateIndexesSQL;
+ (id)arrayOfCreateTriggersSQL;

- (id)initWithPath:(id)a0;

@end
