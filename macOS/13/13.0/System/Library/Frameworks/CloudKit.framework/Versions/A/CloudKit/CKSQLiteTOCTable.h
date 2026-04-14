@interface CKSQLiteTOCTable : CKSQLiteTOCTableBase

+ (id)dbProperties;
+ (Class)entryClass;
+ (id)dbTableName;

- (id)tocEntriesWithGroupID:(id)a0 error:(id *)a1;

@end
