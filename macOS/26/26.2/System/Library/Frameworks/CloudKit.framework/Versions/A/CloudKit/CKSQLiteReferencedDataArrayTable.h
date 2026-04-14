@interface CKSQLiteReferencedDataArrayTable : CKSQLiteReferencedCollectionTable

+ (id)defaultLogicalTableName;

- (id)addData:(id)a0 toReferencedDataArray:(id)a1;
- (id)collectionWithElementsFromEntryEnumerator:(id)a0;
- (Class)elementTableClass;
- (void)enumerateCollection:(id)a0 block:(id /* block */)a1;
- (id)referentForDatabaseReferenceValue:(id)a0 error:(id *)a1;

@end
