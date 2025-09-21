@interface HDConceptIndexEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)indices;
+ (id)databaseTable;
+ (id)joinClausesForProperty:(id)a0;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)conceptIndexEntriesForSampleUUID:(id)a0 type:(unsigned long long)a1 profile:(id)a2 error:(id *)a3;
+ (char)enumerateConceptIndexEntriesWithPredicate:(id)a0 profile:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (char)insertConceptIndexEntries:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)numberOfIndexedConceptsWithProfile:(id)a0 error:(id *)a1;
+ (char)removeAllConceptIndexEntriesWithProfile:(id)a0 error:(id *)a1;
+ (id)unitTesting_allConceptIndexEntriesWithProfile:(id)a0 error:(id *)a1;

@end
