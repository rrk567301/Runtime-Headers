@interface CKSQLiteReferencedObjectTable : CKSQLiteTable

@property (nonatomic) BOOL isDeletingReferent;

- (id)insertObject:(id)a0;
- (BOOL)shouldLogError:(id)a0;
- (id)checkConstraintForProperty:(id)a0 info:(unsigned int)a1;
- (id)databaseReferenceIDForSavedReferent:(id)a0 error:(id *)a1;
- (id)databaseReferenceIDForSearchingForReferent:(id)a0 error:(id *)a1;
- (id)entryForReferent:(id)a0;
- (id)fetchPrimaryKeyForEntry:(id)a0;
- (BOOL)isNotFoundEntry:(id)a0;
- (id)lookUpEntry:(id)a0;
- (id)notFoundPrimaryKeyValue;
- (id)referenceWasDeleted:(id)a0;
- (id)referencedObjectTriggerSQLForProperty:(id)a0 inTable:(id)a1;
- (id)referentForDatabaseReferenceValue:(id)a0 error:(id *)a1;
- (id)referentForEntry:(id)a0 error:(id *)a1;
- (id)willStoreReferenceToUnsavedEntry:(id)a0;

@end
