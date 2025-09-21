@class CKSQLitePackage;

@interface CKPackageSectionTableEntryEnumerator : CKPackageTableEntryEnumerator {
    CKSQLitePackage *_package;
}

- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithPackage:(id)a0 packageTable:(id)a1;

@end
