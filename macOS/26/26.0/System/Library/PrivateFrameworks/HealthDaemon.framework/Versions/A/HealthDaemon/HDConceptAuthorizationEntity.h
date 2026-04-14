@interface HDConceptAuthorizationEntity : HDHealthEntity

+ (id)uniquedColumns;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)propertyForSyncIdentity;
+ (id)propertyForSyncProvenance;
+ (id)authorizationRecordsForHealthConceptIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)authorizationRecordsForHealthConceptIdentifiers:(id)a0 sourceEntity:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)authorizationRecordsForMedications:(id)a0 sourceEntity:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)deleteConceptAuthorizationRecordsMatchingPredicate:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)enumerateAuthorizationRecordsMatchingPredicate:(id)a0 transaction:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (id)fetchSourcesWithExistingAuthorizationsForHealthConceptDomain:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)insertConceptAuthorizationRecords:(id)a0 transaction:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)resetConceptAuthorizationRecordsForSource:(id)a0 profile:(id)a1 error:(id *)a2;

@end
