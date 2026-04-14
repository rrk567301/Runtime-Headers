@interface HDOriginalSignedClinicalDataRecordEntity : HDHealthEntity

+ (id)uniquedColumns;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)propertyForSyncIdentity;
+ (id)joinClausesForProperty:(id)a0;
+ (id)propertyForSyncProvenance;
+ (id)checkConstraints;
+ (id)allProperties;
+ (id)allColumns;
+ (id)entityWithSyncIdentifier:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)existingEntityWithSyncIdentifier:(id)a0 database:(id)a1 error:(id *)a2;

@end
