@interface CKSQLiteGenericTableGroup : CKSQLiteTableGroup

+ (id)copyOfTableGroup:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
+ (id)groupEntryInDatabase:(id)a0 withGroupName:(id)a1 error:(id *)a2;
+ (id)tableGroupInDatabase:(id)a0 withName:(id)a1 options:(unsigned long long)a2 error:(id *)a3;

- (id)performValidation;
- (void)createTables;

@end
