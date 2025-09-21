@interface CKSQLiteReferencedDictionaryValueTable : CKSQLiteUniquedObjectTable

+ (id)defaultLogicalTableName;
+ (Class)entryClass;
+ (id)dbProperties;

- (void)willAddToGroup:(id)a0;
- (id)tableForReferenceProperty:(id)a0;
- (id)fetchPrimaryKeyForEntry:(id)a0;

@end
