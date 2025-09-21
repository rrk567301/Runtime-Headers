@interface CKSQLiteReferencedDictionaryTable : CKSQLiteReferencedCollectionTable

- (id)collectionWithElementsFromEntryEnumerator:(id)a0;
- (Class)elementTableClass;
- (void)enumerateCollection:(id)a0 block:(id /* block */)a1;

@end
