@interface CKSQLiteReferencedDictionaryValueTable : CKSQLiteUniquedObjectTable

+ (id)defaultLogicalTableName;
+ (Class)entryClass;
+ (id)dbProperties;

- (id)tableForReferenceProperty:(id)a0;
- (void)willAddToGroup:(id)a0;
- (id)fetchPrimaryKeyForEntry:(id)a0;

@end
