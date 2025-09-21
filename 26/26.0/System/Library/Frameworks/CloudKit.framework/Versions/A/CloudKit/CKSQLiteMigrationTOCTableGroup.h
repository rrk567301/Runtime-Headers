@interface CKSQLiteMigrationTOCTableGroup : CKSQLiteTOCTableGroup

+ (id)groupName;

- (id)_tableClasses;
- (id)initWithName:(id)a0 options:(unsigned long long)a1 database:(id)a2;
- (BOOL)isMigrationTOC;

@end
