@interface HDAdHocConceptEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)adHocConceptForIdentifier:(id)a0 options:(unsigned long long)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)enumerateAdHocConceptWithRawIdentifiers:(id)a0 options:(unsigned long long)a1 profile:(id)a2 error:(id *)a3 enumerationHandler:(id /* block */)a4;
+ (BOOL)deleteNonIndexedConceptsWithTransaction:(id)a0 internalContentDatabaseManager:(id)a1 error:(id *)a2;
+ (id)adHocConceptForCodingCollection:(id)a0 options:(unsigned long long)a1 profile:(id)a2 error:(id *)a3;
+ (id)generateAdHocConceptForCodingCollection:(id)a0 options:(unsigned long long)a1 profile:(id)a2 error:(id *)a3;

@end
