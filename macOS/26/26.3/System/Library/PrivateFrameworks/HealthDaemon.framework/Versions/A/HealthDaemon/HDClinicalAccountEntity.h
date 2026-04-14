@interface HDClinicalAccountEntity : HDHealthEntity

+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)foreignKeys;
+ (id)propertyForSyncAnchor;
+ (id)joinClausesForProperty:(id)a0;
+ (id)propertyForSyncIdentity;
+ (id)checkConstraints;

@end
