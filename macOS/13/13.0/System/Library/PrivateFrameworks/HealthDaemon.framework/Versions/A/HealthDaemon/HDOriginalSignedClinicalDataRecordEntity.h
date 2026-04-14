@interface HDOriginalSignedClinicalDataRecordEntity : HDHealthEntity

+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)allProperties;
+ (id)databaseTable;
+ (id)joinClausesForProperty:(id)a0;
+ (id)allColumns;
+ (id)checkConstraints;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)uniquedColumns;
+ (id)propertyForSyncProvenance;
+ (id)existingEntityWithSyncIdentifier:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)entityWithSyncIdentifier:(id)a0 database:(id)a1 error:(id *)a2;

@end
