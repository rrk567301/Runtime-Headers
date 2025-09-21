@interface CKPackageItemTable : CKPackageTableBase

+ (Class)entryClass;
+ (id)dbProperties;

- (id)copyItemsFromPackage:(id)a0 itemTable:(id)a1;
- (id)enumerateItemsInSection:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (unsigned long long)paddedSizeOfSectionAtIndex:(unsigned long long)a0 error:(id *)a1;
- (id)resetSectionPlanning;
- (unsigned long long)size:(id *)a0;
- (unsigned long long)sizeOfSectionAtIndex:(unsigned long long)a0 error:(id *)a1;
- (id)updateItem:(id)a0 withSignature:(id)a1 size:(unsigned long long)a2 paddedSize:(unsigned long long)a3 itemID:(unsigned long long)a4 sectionIndex:(id)a5;
- (id)updateItemsAtIndexes:(id)a0 fileURLs:(id)a1;

@end
