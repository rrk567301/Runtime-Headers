@interface CKSQLiteReferencedCollectionTable : CKSQLiteReferencedObjectTable

+ (Class)entryClass;
+ (id)dbProperties;

- (void)willAddToGroup:(id)a0;
- (id)tableForReferenceProperty:(id)a0;
- (id)addElement:(id)a0 toCollection:(id)a1;
- (unsigned long long)collectionCount:(id *)a0;
- (id)collectionWithElementsFromEntryEnumerator:(id)a0;
- (void)defaultSearchOrder:(id)a0;
- (id)elementTable;
- (Class)elementTableClass;
- (id)entryForReferent:(id)a0;
- (void)enumerateCollection:(id)a0 block:(id /* block */)a1;
- (id)referenceWasDeleted:(id)a0;
- (id)referentForEntry:(id)a0 error:(id *)a1;
- (id)willStoreReferenceToUnsavedEntry:(id)a0;

@end
