@class NSEnumerator, CKPackageTableBase;

@interface CKPackageTableEntryEnumerator : CKPackageEnumerator {
    CKPackageTableBase *_packageTable;
    unsigned long long _fetchIndex;
    NSEnumerator *_entryEnumerator;
}

- (void).cxx_destruct;
- (id)nextObject;
- (id)nextObjectBatch;
- (id)initWithPackageTable:(id)a0;

@end
