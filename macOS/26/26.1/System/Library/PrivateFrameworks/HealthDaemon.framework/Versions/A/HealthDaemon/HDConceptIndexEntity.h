@interface HDConceptIndexEntity : HDHealthEntity

+ (id)indices;
+ (id)databaseTable;
+ (long long)protectionClass;
+ (id)foreignKeys;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)insertConceptIndexEntries:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)enumerateConceptIndexEntriesWithPredicate:(id)a0 profile:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (BOOL)removeAllConceptIndexEntriesWithProfile:(id)a0 error:(id *)a1;
+ (id)unitTesting_allConceptIndexEntriesWithProfile:(id)a0 error:(id *)a1;
+ (id)numberOfIndexedConceptsWithProfile:(id)a0 error:(id *)a1;
+ (id)joinClausesForProperty:(id)a0;
+ (id)conceptIndexEntriesForSampleUUID:(id)a0 type:(unsigned long long)a1 profile:(id)a2 error:(id *)a3;

@end
