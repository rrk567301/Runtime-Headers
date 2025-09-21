@interface CKPackageReferenceTable : CKSQLiteTable

+ (Class)entryClass;
+ (id)dbProperties;

- (id)deleteReference:(id)a0;
- (id)existingAnchorWithID:(id)a0 error:(id *)a1;
- (id)newAnchorReferenceForPackage:(id)a0 expirationDate:(id)a1 error:(id *)a2;
- (id)newProcessReferenceForPackage:(id)a0 error:(id *)a1;
- (id)newReferenceForPackage:(id)a0 referenceType:(int)a1 expirationDate:(id)a2 error:(id *)a3;
- (BOOL)refcountIsZeroForPackageID:(id)a0 error:(id *)a1;
- (unsigned long long)referenceCountForPackageID:(id)a0 error:(id *)a1;
- (id)removeInvalidReferences;

@end
