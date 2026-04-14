@interface CKSQLiteReferencedDictionaryValueTable : CKSQLiteUniquedObjectTable

+ (id)dbProperties;
+ (id)defaultLogicalTableName;
+ (Class)entryClass;

- (void)willAddToGroup:(id)a0;
- (id)tableForReferenceProperty:(id)a0;
- (id)fetchPrimaryKeyForEntry:(id)a0;

@end
