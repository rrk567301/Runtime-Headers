@interface HDOriginalSignedClinicalDataRecordEntity : HDHealthEntity

+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)foreignKeys;
+ (id)uniquedColumns;
+ (id)joinClausesForProperty:(id)a0;
+ (id)propertyForSyncIdentity;
+ (id)checkConstraints;
+ (id)allProperties;
+ (id)allColumns;
+ (id)entityWithSyncIdentifier:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)existingEntityWithSyncIdentifier:(id)a0 database:(id)a1 error:(id *)a2;

@end
