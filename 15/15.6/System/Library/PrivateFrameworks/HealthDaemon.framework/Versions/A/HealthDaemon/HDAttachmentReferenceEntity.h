@interface HDAttachmentReferenceEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)_insertIfDoesNotExistReference:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)_insertReference:(id)a0 databaseTransaction:(id)a1 error:(id *)a2;
+ (id)anyReferenceWithPredicate:(id)a0 profile:(id)a1 error:(id *)a2;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (char)deleteReferences:(id)a0 cloudStatus:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (char)enumerateReferencesForAttachmentIdentifier:(id)a0 type:(long long)a1 transaction:(id)a2 error:(id *)a3 enumerationHandler:(id /* block */)a4;
+ (char)enumerateReferencesForObjectIdentifier:(id)a0 schemaIdentifier:(id)a1 transaction:(id)a2 error:(id *)a3 enumerationHandler:(id /* block */)a4;
+ (char)enumerateReferencesWithPredicate:(id)a0 transaction:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (char)filteredNonTombstoneReferences:(id)a0 transaction:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (char)insertReference:(id)a0 profile:(id)a1 error:(id *)a2;
+ (char)insertTombstones:(id)a0 cloudStatus:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)referenceWithIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
+ (char)setCloudStatus:(long long)a0 references:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (char)setCloudStatus:(long long)a0 transaction:(id)a1 error:(id *)a2;

@end
