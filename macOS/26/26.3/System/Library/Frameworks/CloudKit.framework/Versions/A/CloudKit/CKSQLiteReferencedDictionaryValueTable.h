@interface CKSQLiteReferencedDictionaryValueTable : CKSQLiteUniquedObjectTable

+ (Class)entryClass;
+ (id)defaultLogicalTableName;
+ (id)dbProperties;

- (id)tableForReferenceProperty:(id)a0;
- (void)willAddToGroup:(id)a0;
- (id)fetchPrimaryKeyForEntry:(id)a0;

@end
