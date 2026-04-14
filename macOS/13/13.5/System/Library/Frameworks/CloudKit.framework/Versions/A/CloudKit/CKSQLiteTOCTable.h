@interface CKSQLiteTOCTable : CKSQLiteTOCTableBase

+ (id)dbProperties;
+ (id)dbTableName;
+ (Class)entryClass;

- (id)tocEntriesWithGroupID:(id)a0 error:(id *)a1;

@end
