@interface HDOriginalSignedClinicalDataRecordEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)uniquedColumns;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)allProperties;
+ (id)propertyForSyncProvenance;
+ (id)propertyForSyncIdentity;
+ (id)joinClausesForProperty:(id)a0;
+ (id)checkConstraints;
+ (id)allColumns;
+ (id)entityWithSyncIdentifier:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)existingEntityWithSyncIdentifier:(id)a0 database:(id)a1 error:(id *)a2;

@end
