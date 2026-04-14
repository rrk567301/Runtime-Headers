@interface HDClinicalAccountEntity : HDHealthEntity

+ (id)databaseTable;
+ (long long)protectionClass;
+ (id)foreignKeys;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)propertyForSyncProvenance;
+ (id)checkConstraints;
+ (id)propertyForSyncAnchor;
+ (id)joinClausesForProperty:(id)a0;
+ (id)propertyForSyncIdentity;

@end
