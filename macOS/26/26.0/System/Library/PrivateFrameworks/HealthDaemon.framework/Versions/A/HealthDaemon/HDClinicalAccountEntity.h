@interface HDClinicalAccountEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)propertyForSyncIdentity;
+ (id)joinClausesForProperty:(id)a0;
+ (id)propertyForSyncAnchor;
+ (id)propertyForSyncProvenance;
+ (id)checkConstraints;

@end
