@interface CKSQLiteReferencedDictionaryValueTable : CKSQLiteUniquedObjectTable

+ (id)dbProperties;
+ (Class)entryClass;
+ (id)defaultLogicalTableName;

- (void)willAddToGroup:(id)a0;
- (id)tableForReferenceProperty:(id)a0;
- (id)fetchPrimaryKeyForEntry:(id)a0;

@end
