@interface HDOriginalSignedClinicalDataRecordEntity : HDHealthEntity

+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)allProperties;
+ (id)propertyForSyncIdentity;
+ (id)checkConstraints;
+ (id)uniquedColumns;
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)propertyForSyncProvenance;
+ (id)joinClausesForProperty:(id)a0;
+ (id)allColumns;
+ (id)entityWithSyncIdentifier:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)existingEntityWithSyncIdentifier:(id)a0 database:(id)a1 error:(id *)a2;

@end
