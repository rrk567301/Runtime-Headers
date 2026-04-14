@class CKSQLitePackage;

@interface CKPackageSectionTableEntryEnumerator : CKPackageTableEntryEnumerator {
    CKSQLitePackage *_package;
}

- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithPackage:(id)a0 packageTable:(id)a1;

@end
